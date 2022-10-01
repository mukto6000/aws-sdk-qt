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

#include "describefeaturegroupresponse.h"
#include "describefeaturegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeFeatureGroupResponse
 * \brief The DescribeFeatureGroupResponse class provides an interace for SageMaker DescribeFeatureGroup responses.
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
 * \sa SageMakerClient::describeFeatureGroup
 */

/*!
 * Constructs a DescribeFeatureGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFeatureGroupResponse::DescribeFeatureGroupResponse(
        const DescribeFeatureGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeFeatureGroupResponsePrivate(this), parent)
{
    setRequest(new DescribeFeatureGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFeatureGroupRequest * DescribeFeatureGroupResponse::request() const
{
    Q_D(const DescribeFeatureGroupResponse);
    return static_cast<const DescribeFeatureGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeFeatureGroup \a response.
 */
void DescribeFeatureGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFeatureGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeFeatureGroupResponsePrivate
 * \brief The DescribeFeatureGroupResponsePrivate class provides private implementation for DescribeFeatureGroupResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeFeatureGroupResponsePrivate object with public implementation \a q.
 */
DescribeFeatureGroupResponsePrivate::DescribeFeatureGroupResponsePrivate(
    DescribeFeatureGroupResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeFeatureGroup response element from \a xml.
 */
void DescribeFeatureGroupResponsePrivate::parseDescribeFeatureGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFeatureGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
