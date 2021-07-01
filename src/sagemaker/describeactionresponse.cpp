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

#include "describeactionresponse.h"
#include "describeactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeActionResponse
 * \brief The DescribeActionResponse class provides an interace for SageMaker DescribeAction responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeAction
 */

/*!
 * Constructs a DescribeActionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeActionResponse::DescribeActionResponse(
        const DescribeActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeActionResponsePrivate(this), parent)
{
    setRequest(new DescribeActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeActionRequest * DescribeActionResponse::request() const
{
    Q_D(const DescribeActionResponse);
    return static_cast<const DescribeActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeAction \a response.
 */
void DescribeActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeActionResponsePrivate
 * \brief The DescribeActionResponsePrivate class provides private implementation for DescribeActionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeActionResponsePrivate object with public implementation \a q.
 */
DescribeActionResponsePrivate::DescribeActionResponsePrivate(
    DescribeActionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeAction response element from \a xml.
 */
void DescribeActionResponsePrivate::parseDescribeActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
