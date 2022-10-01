// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateautoscalinggroupresponse.h"
#include "updateautoscalinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::UpdateAutoScalingGroupResponse
 * \brief The UpdateAutoScalingGroupResponse class provides an interace for AutoScaling UpdateAutoScalingGroup responses.
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
 * \sa AutoScalingClient::updateAutoScalingGroup
 */

/*!
 * Constructs a UpdateAutoScalingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAutoScalingGroupResponse::UpdateAutoScalingGroupResponse(
        const UpdateAutoScalingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new UpdateAutoScalingGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateAutoScalingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAutoScalingGroupRequest * UpdateAutoScalingGroupResponse::request() const
{
    Q_D(const UpdateAutoScalingGroupResponse);
    return static_cast<const UpdateAutoScalingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling UpdateAutoScalingGroup \a response.
 */
void UpdateAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAutoScalingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::UpdateAutoScalingGroupResponsePrivate
 * \brief The UpdateAutoScalingGroupResponsePrivate class provides private implementation for UpdateAutoScalingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a UpdateAutoScalingGroupResponsePrivate object with public implementation \a q.
 */
UpdateAutoScalingGroupResponsePrivate::UpdateAutoScalingGroupResponsePrivate(
    UpdateAutoScalingGroupResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling UpdateAutoScalingGroup response element from \a xml.
 */
void UpdateAutoScalingGroupResponsePrivate::parseUpdateAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAutoScalingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
