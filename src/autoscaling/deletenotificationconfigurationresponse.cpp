// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenotificationconfigurationresponse.h"
#include "deletenotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteNotificationConfigurationResponse
 * \brief The DeleteNotificationConfigurationResponse class provides an interace for AutoScaling DeleteNotificationConfiguration responses.
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
 * \sa AutoScalingClient::deleteNotificationConfiguration
 */

/*!
 * Constructs a DeleteNotificationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNotificationConfigurationResponse::DeleteNotificationConfigurationResponse(
        const DeleteNotificationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DeleteNotificationConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteNotificationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNotificationConfigurationRequest * DeleteNotificationConfigurationResponse::request() const
{
    Q_D(const DeleteNotificationConfigurationResponse);
    return static_cast<const DeleteNotificationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DeleteNotificationConfiguration \a response.
 */
void DeleteNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNotificationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DeleteNotificationConfigurationResponsePrivate
 * \brief The DeleteNotificationConfigurationResponsePrivate class provides private implementation for DeleteNotificationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteNotificationConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteNotificationConfigurationResponsePrivate::DeleteNotificationConfigurationResponsePrivate(
    DeleteNotificationConfigurationResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DeleteNotificationConfiguration response element from \a xml.
 */
void DeleteNotificationConfigurationResponsePrivate::parseDeleteNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotificationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
