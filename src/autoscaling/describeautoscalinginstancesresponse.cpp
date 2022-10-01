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

#include "describeautoscalinginstancesresponse.h"
#include "describeautoscalinginstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingInstancesResponse
 * \brief The DescribeAutoScalingInstancesResponse class provides an interace for AutoScaling DescribeAutoScalingInstances responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
 *
 * \sa AutoScalingClient::describeAutoScalingInstances
 */

/*!
 * Constructs a DescribeAutoScalingInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAutoScalingInstancesResponse::DescribeAutoScalingInstancesResponse(
        const DescribeAutoScalingInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeAutoScalingInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeAutoScalingInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAutoScalingInstancesRequest * DescribeAutoScalingInstancesResponse::request() const
{
    Q_D(const DescribeAutoScalingInstancesResponse);
    return static_cast<const DescribeAutoScalingInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeAutoScalingInstances \a response.
 */
void DescribeAutoScalingInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAutoScalingInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingInstancesResponsePrivate
 * \brief The DescribeAutoScalingInstancesResponsePrivate class provides private implementation for DescribeAutoScalingInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAutoScalingInstancesResponsePrivate object with public implementation \a q.
 */
DescribeAutoScalingInstancesResponsePrivate::DescribeAutoScalingInstancesResponsePrivate(
    DescribeAutoScalingInstancesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeAutoScalingInstances response element from \a xml.
 */
void DescribeAutoScalingInstancesResponsePrivate::parseDescribeAutoScalingInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutoScalingInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
