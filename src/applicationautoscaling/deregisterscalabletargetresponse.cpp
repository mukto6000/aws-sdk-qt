// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterscalabletargetresponse.h"
#include "deregisterscalabletargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationAutoScaling {

/*!
 * \class QtAws::ApplicationAutoScaling::DeregisterScalableTargetResponse
 * \brief The DeregisterScalableTargetResponse class provides an interace for ApplicationAutoScaling DeregisterScalableTarget responses.
 *
 * \inmodule QtAwsApplicationAutoScaling
 *
 *  With Application Auto Scaling, you can configure automatic scaling for the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon AppStream 2.0
 * 
 *  fleet> </li> <li>
 * 
 *  Amazon Aurora
 * 
 *  Replica> </li> <li>
 * 
 *  Amazon Comprehend document classification and entity recognizer
 * 
 *  endpoint> </li> <li>
 * 
 *  Amazon DynamoDB tables and global secondary indexes throughput
 * 
 *  capacit> </li> <li>
 * 
 *  Amazon ECS
 * 
 *  service> </li> <li>
 * 
 *  Amazon ElastiCache for Redis clusters (replication
 * 
 *  groups> </li> <li>
 * 
 *  Amazon EMR
 * 
 *  cluster> </li> <li>
 * 
 *  Amazon Keyspaces (for Apache Cassandra)
 * 
 *  table> </li> <li>
 * 
 *  Lambda function provisioned
 * 
 *  concurrenc> </li> <li>
 * 
 *  Amazon Managed Streaming for Apache Kafka broker
 * 
 *  storag> </li> <li>
 * 
 *  Amazon Neptune
 * 
 *  cluster> </li> <li>
 * 
 *  Amazon SageMaker endpoint
 * 
 *  variant> </li> <li>
 * 
 *  Spot Fleets (Amazon
 * 
 *  EC2> </li> <li>
 * 
 *  Custom resources provided by your own applications or
 * 
 *  service> </li> </ul>
 * 
 *  <b>API Summary</b>
 * 
 *  </p
 * 
 *  The Application Auto Scaling service API includes three key sets of actions:
 * 
 *  </p <ul> <li>
 * 
 *  Register and manage scalable targets - Register Amazon Web Services or custom resources as scalable targets (a resource
 *  that Application Auto Scaling can scale), set minimum and maximum capacity limits, and retrieve information on existing
 *  scalable
 * 
 *  targets> </li> <li>
 * 
 *  Configure and manage automatic scaling - Define scaling policies to dynamically scale your resources in response to
 *  CloudWatch alarms, schedule one-time or recurring scaling actions, and retrieve your recent scaling activity
 * 
 *  history> </li> <li>
 * 
 *  Suspend and resume scaling - Temporarily suspend and later resume automatic scaling by calling the <a
 *  href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_RegisterScalableTarget.html">RegisterScalableTarget</a>
 *  API action for any Application Auto Scaling scalable target. You can suspend and resume (individually or in combination)
 *  scale-out activities that are triggered by a scaling policy, scale-in activities that are triggered by a scaling policy,
 *  and scheduled
 * 
 *  scaling> </li> </ul>
 * 
 *  To learn more about Application Auto Scaling, including information about granting IAM users required permissions for
 *  Application Auto Scaling actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/application/userguide/what-is-application-auto-scaling.html">Application
 *  Auto Scaling User
 *
 * \sa ApplicationAutoScalingClient::deregisterScalableTarget
 */

/*!
 * Constructs a DeregisterScalableTargetResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterScalableTargetResponse::DeregisterScalableTargetResponse(
        const DeregisterScalableTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationAutoScalingResponse(new DeregisterScalableTargetResponsePrivate(this), parent)
{
    setRequest(new DeregisterScalableTargetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterScalableTargetRequest * DeregisterScalableTargetResponse::request() const
{
    Q_D(const DeregisterScalableTargetResponse);
    return static_cast<const DeregisterScalableTargetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationAutoScaling DeregisterScalableTarget \a response.
 */
void DeregisterScalableTargetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterScalableTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationAutoScaling::DeregisterScalableTargetResponsePrivate
 * \brief The DeregisterScalableTargetResponsePrivate class provides private implementation for DeregisterScalableTargetResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationAutoScaling
 */

/*!
 * Constructs a DeregisterScalableTargetResponsePrivate object with public implementation \a q.
 */
DeregisterScalableTargetResponsePrivate::DeregisterScalableTargetResponsePrivate(
    DeregisterScalableTargetResponse * const q) : ApplicationAutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationAutoScaling DeregisterScalableTarget response element from \a xml.
 */
void DeregisterScalableTargetResponsePrivate::parseDeregisterScalableTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterScalableTargetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationAutoScaling
} // namespace QtAws
