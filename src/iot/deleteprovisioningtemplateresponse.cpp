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

#include "deleteprovisioningtemplateresponse.h"
#include "deleteprovisioningtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DeleteProvisioningTemplateResponse
 * \brief The DeleteProvisioningTemplateResponse class provides an interace for IoT DeleteProvisioningTemplate responses.
 *
 * \inmodule QtAwsIoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected devices (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  device (Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  devices>
 * 
 *  The service endpoints that expose this API are listed in <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">AWS IoT Core Endpoints and Quotas</a>. You must use
 *  the endpoint for the region that has the resources you want to
 * 
 *  access>
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">AWS Signature
 *  Version 4</a> to sign the request is:
 * 
 *  <i>execute-api</i>>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::deleteProvisioningTemplate
 */

/*!
 * Constructs a DeleteProvisioningTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProvisioningTemplateResponse::DeleteProvisioningTemplateResponse(
        const DeleteProvisioningTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DeleteProvisioningTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteProvisioningTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProvisioningTemplateRequest * DeleteProvisioningTemplateResponse::request() const
{
    Q_D(const DeleteProvisioningTemplateResponse);
    return static_cast<const DeleteProvisioningTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DeleteProvisioningTemplate \a response.
 */
void DeleteProvisioningTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProvisioningTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DeleteProvisioningTemplateResponsePrivate
 * \brief The DeleteProvisioningTemplateResponsePrivate class provides private implementation for DeleteProvisioningTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DeleteProvisioningTemplateResponsePrivate object with public implementation \a q.
 */
DeleteProvisioningTemplateResponsePrivate::DeleteProvisioningTemplateResponsePrivate(
    DeleteProvisioningTemplateResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DeleteProvisioningTemplate response element from \a xml.
 */
void DeleteProvisioningTemplateResponsePrivate::parseDeleteProvisioningTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProvisioningTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
