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

#include "transfercertificateresponse.h"
#include "transfercertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::TransferCertificateResponse
 * \brief The TransferCertificateResponse class provides an interace for IoT TransferCertificate responses.
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
 * \sa IoTClient::transferCertificate
 */

/*!
 * Constructs a TransferCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
TransferCertificateResponse::TransferCertificateResponse(
        const TransferCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new TransferCertificateResponsePrivate(this), parent)
{
    setRequest(new TransferCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TransferCertificateRequest * TransferCertificateResponse::request() const
{
    return static_cast<const TransferCertificateRequest *>(IoTResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoT TransferCertificate \a response.
 */
void TransferCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TransferCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::TransferCertificateResponsePrivate
 * \brief The TransferCertificateResponsePrivate class provides private implementation for TransferCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a TransferCertificateResponsePrivate object with public implementation \a q.
 */
TransferCertificateResponsePrivate::TransferCertificateResponsePrivate(
    TransferCertificateResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT TransferCertificate response element from \a xml.
 */
void TransferCertificateResponsePrivate::parseTransferCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TransferCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
