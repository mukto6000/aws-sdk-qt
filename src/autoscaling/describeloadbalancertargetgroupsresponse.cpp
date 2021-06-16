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

#include "describeloadbalancertargetgroupsresponse.h"
#include "describeloadbalancertargetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeLoadBalancerTargetGroupsResponse
 * \brief The DescribeLoadBalancerTargetGroupsResponse class provides an interace for AutoScaling DescribeLoadBalancerTargetGroups responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service with AWS Auto Scaling, Amazon CloudWatch, and Elastic Load
 * 
 *  Balancing>
 * 
 *  For more information, including information about granting IAM users required permissions for Amazon EC2 Auto Scaling
 *  actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User
 *
 * \sa AutoScalingClient::describeLoadBalancerTargetGroups
 */

/*!
 * Constructs a DescribeLoadBalancerTargetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLoadBalancerTargetGroupsResponse::DescribeLoadBalancerTargetGroupsResponse(
        const DescribeLoadBalancerTargetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeLoadBalancerTargetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeLoadBalancerTargetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLoadBalancerTargetGroupsRequest * DescribeLoadBalancerTargetGroupsResponse::request() const
{
    Q_D(const DescribeLoadBalancerTargetGroupsResponse);
    return static_cast<const DescribeLoadBalancerTargetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeLoadBalancerTargetGroups \a response.
 */
void DescribeLoadBalancerTargetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLoadBalancerTargetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeLoadBalancerTargetGroupsResponsePrivate
 * \brief The DescribeLoadBalancerTargetGroupsResponsePrivate class provides private implementation for DescribeLoadBalancerTargetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeLoadBalancerTargetGroupsResponsePrivate object with public implementation \a q.
 */
DescribeLoadBalancerTargetGroupsResponsePrivate::DescribeLoadBalancerTargetGroupsResponsePrivate(
    DescribeLoadBalancerTargetGroupsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeLoadBalancerTargetGroups response element from \a xml.
 */
void DescribeLoadBalancerTargetGroupsResponsePrivate::parseDescribeLoadBalancerTargetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoadBalancerTargetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
