// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeendpointresponse.h"
#include "describeendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeEndpointResponse
 * \brief The DescribeEndpointResponse class provides an interace for SageMaker DescribeEndpoint responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeEndpoint
 */

/*!
 * Constructs a DescribeEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEndpointResponse::DescribeEndpointResponse(
        const DescribeEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeEndpointResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEndpointRequest * DescribeEndpointResponse::request() const
{
    Q_D(const DescribeEndpointResponse);
    return static_cast<const DescribeEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeEndpoint \a response.
 */
void DescribeEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeEndpointResponsePrivate
 * \brief The DescribeEndpointResponsePrivate class provides private implementation for DescribeEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeEndpointResponsePrivate object with public implementation \a q.
 */
DescribeEndpointResponsePrivate::DescribeEndpointResponsePrivate(
    DescribeEndpointResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeEndpoint response element from \a xml.
 */
void DescribeEndpointResponsePrivate::parseDescribeEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
