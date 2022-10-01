// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachloadbalancertargetgroupsresponse.h"
#include "attachloadbalancertargetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::AttachLoadBalancerTargetGroupsResponse
 * \brief The AttachLoadBalancerTargetGroupsResponse class provides an interace for AutoScaling AttachLoadBalancerTargetGroups responses.
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
 * \sa AutoScalingClient::attachLoadBalancerTargetGroups
 */

/*!
 * Constructs a AttachLoadBalancerTargetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
AttachLoadBalancerTargetGroupsResponse::AttachLoadBalancerTargetGroupsResponse(
        const AttachLoadBalancerTargetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new AttachLoadBalancerTargetGroupsResponsePrivate(this), parent)
{
    setRequest(new AttachLoadBalancerTargetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachLoadBalancerTargetGroupsRequest * AttachLoadBalancerTargetGroupsResponse::request() const
{
    Q_D(const AttachLoadBalancerTargetGroupsResponse);
    return static_cast<const AttachLoadBalancerTargetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling AttachLoadBalancerTargetGroups \a response.
 */
void AttachLoadBalancerTargetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachLoadBalancerTargetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::AttachLoadBalancerTargetGroupsResponsePrivate
 * \brief The AttachLoadBalancerTargetGroupsResponsePrivate class provides private implementation for AttachLoadBalancerTargetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a AttachLoadBalancerTargetGroupsResponsePrivate object with public implementation \a q.
 */
AttachLoadBalancerTargetGroupsResponsePrivate::AttachLoadBalancerTargetGroupsResponsePrivate(
    AttachLoadBalancerTargetGroupsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling AttachLoadBalancerTargetGroups response element from \a xml.
 */
void AttachLoadBalancerTargetGroupsResponsePrivate::parseAttachLoadBalancerTargetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachLoadBalancerTargetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
