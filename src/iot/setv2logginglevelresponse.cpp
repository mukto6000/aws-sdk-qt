// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setv2logginglevelresponse.h"
#include "setv2logginglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::SetV2LoggingLevelResponse
 * \brief The SetV2LoggingLevelResponse class provides an interace for IoT SetV2LoggingLevel responses.
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
 * \sa IoTClient::setV2LoggingLevel
 */

/*!
 * Constructs a SetV2LoggingLevelResponse object for \a reply to \a request, with parent \a parent.
 */
SetV2LoggingLevelResponse::SetV2LoggingLevelResponse(
        const SetV2LoggingLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new SetV2LoggingLevelResponsePrivate(this), parent)
{
    setRequest(new SetV2LoggingLevelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetV2LoggingLevelRequest * SetV2LoggingLevelResponse::request() const
{
    Q_D(const SetV2LoggingLevelResponse);
    return static_cast<const SetV2LoggingLevelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT SetV2LoggingLevel \a response.
 */
void SetV2LoggingLevelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetV2LoggingLevelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::SetV2LoggingLevelResponsePrivate
 * \brief The SetV2LoggingLevelResponsePrivate class provides private implementation for SetV2LoggingLevelResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a SetV2LoggingLevelResponsePrivate object with public implementation \a q.
 */
SetV2LoggingLevelResponsePrivate::SetV2LoggingLevelResponsePrivate(
    SetV2LoggingLevelResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT SetV2LoggingLevel response element from \a xml.
 */
void SetV2LoggingLevelResponsePrivate::parseSetV2LoggingLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetV2LoggingLevelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
