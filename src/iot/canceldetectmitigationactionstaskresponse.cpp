// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceldetectmitigationactionstaskresponse.h"
#include "canceldetectmitigationactionstaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CancelDetectMitigationActionsTaskResponse
 * \brief The CancelDetectMitigationActionsTaskResponse class provides an interace for IoT CancelDetectMitigationActionsTask responses.
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
 * \sa IoTClient::cancelDetectMitigationActionsTask
 */

/*!
 * Constructs a CancelDetectMitigationActionsTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CancelDetectMitigationActionsTaskResponse::CancelDetectMitigationActionsTaskResponse(
        const CancelDetectMitigationActionsTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CancelDetectMitigationActionsTaskResponsePrivate(this), parent)
{
    setRequest(new CancelDetectMitigationActionsTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelDetectMitigationActionsTaskRequest * CancelDetectMitigationActionsTaskResponse::request() const
{
    Q_D(const CancelDetectMitigationActionsTaskResponse);
    return static_cast<const CancelDetectMitigationActionsTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT CancelDetectMitigationActionsTask \a response.
 */
void CancelDetectMitigationActionsTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelDetectMitigationActionsTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::CancelDetectMitigationActionsTaskResponsePrivate
 * \brief The CancelDetectMitigationActionsTaskResponsePrivate class provides private implementation for CancelDetectMitigationActionsTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CancelDetectMitigationActionsTaskResponsePrivate object with public implementation \a q.
 */
CancelDetectMitigationActionsTaskResponsePrivate::CancelDetectMitigationActionsTaskResponsePrivate(
    CancelDetectMitigationActionsTaskResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT CancelDetectMitigationActionsTask response element from \a xml.
 */
void CancelDetectMitigationActionsTaskResponsePrivate::parseCancelDetectMitigationActionsTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelDetectMitigationActionsTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
