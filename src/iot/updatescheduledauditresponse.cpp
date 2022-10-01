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

#include "updatescheduledauditresponse.h"
#include "updatescheduledauditresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::UpdateScheduledAuditResponse
 * \brief The UpdateScheduledAuditResponse class provides an interace for IoT UpdateScheduledAudit responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>IoT</fullname>
 * 
 *  IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. You can discover your custom IoT-Data endpoint
 *  to communicate with, configure rules for data processing and integration with other services, organize resources
 *  associated with each device (Registry), configure logging, and create and manage policies and credentials to
 *  authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">Amazon Web Services IoT Core Endpoints and
 *  Quotas</a>. You must use the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  Services Signature Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to
 *  Amazon Web Services
 *
 * \sa IoTClient::updateScheduledAudit
 */

/*!
 * Constructs a UpdateScheduledAuditResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateScheduledAuditResponse::UpdateScheduledAuditResponse(
        const UpdateScheduledAuditRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new UpdateScheduledAuditResponsePrivate(this), parent)
{
    setRequest(new UpdateScheduledAuditRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateScheduledAuditRequest * UpdateScheduledAuditResponse::request() const
{
    Q_D(const UpdateScheduledAuditResponse);
    return static_cast<const UpdateScheduledAuditRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT UpdateScheduledAudit \a response.
 */
void UpdateScheduledAuditResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateScheduledAuditResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::UpdateScheduledAuditResponsePrivate
 * \brief The UpdateScheduledAuditResponsePrivate class provides private implementation for UpdateScheduledAuditResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a UpdateScheduledAuditResponsePrivate object with public implementation \a q.
 */
UpdateScheduledAuditResponsePrivate::UpdateScheduledAuditResponsePrivate(
    UpdateScheduledAuditResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT UpdateScheduledAudit response element from \a xml.
 */
void UpdateScheduledAuditResponsePrivate::parseUpdateScheduledAuditResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateScheduledAuditResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
