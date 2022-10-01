/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describecontextresponse.h"
#include "describecontextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeContextResponse
 * \brief The DescribeContextResponse class provides an interace for SageMaker DescribeContext responses.
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
 * \sa SageMakerClient::describeContext
 */

/*!
 * Constructs a DescribeContextResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeContextResponse::DescribeContextResponse(
        const DescribeContextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeContextResponsePrivate(this), parent)
{
    setRequest(new DescribeContextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeContextRequest * DescribeContextResponse::request() const
{
    Q_D(const DescribeContextResponse);
    return static_cast<const DescribeContextRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeContext \a response.
 */
void DescribeContextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeContextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeContextResponsePrivate
 * \brief The DescribeContextResponsePrivate class provides private implementation for DescribeContextResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeContextResponsePrivate object with public implementation \a q.
 */
DescribeContextResponsePrivate::DescribeContextResponsePrivate(
    DescribeContextResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeContext response element from \a xml.
 */
void DescribeContextResponsePrivate::parseDescribeContextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeContextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
