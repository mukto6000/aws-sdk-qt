/*
    Copyright 2013-2020 Paul Colby

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

#include "registercacertificateresponse.h"
#include "registercacertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::RegisterCACertificateResponse
 * \brief The RegisterCACertificateResponse class provides an interace for IoT RegisterCACertificate responses.
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
 *  For more information about how AWS IoT works, see the <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 * 
 *  Guide</a>>
 * 
 *  For information about how to use the credentials provider for AWS IoT, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing Direct Calls to AWS
 *
 * \sa IoTClient::registerCACertificate
 */

/*!
 * Constructs a RegisterCACertificateResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterCACertificateResponse::RegisterCACertificateResponse(
        const RegisterCACertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new RegisterCACertificateResponsePrivate(this), parent)
{
    setRequest(new RegisterCACertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterCACertificateRequest * RegisterCACertificateResponse::request() const
{
    Q_D(const RegisterCACertificateResponse);
    return static_cast<const RegisterCACertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT RegisterCACertificate \a response.
 */
void RegisterCACertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterCACertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::RegisterCACertificateResponsePrivate
 * \brief The RegisterCACertificateResponsePrivate class provides private implementation for RegisterCACertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a RegisterCACertificateResponsePrivate object with public implementation \a q.
 */
RegisterCACertificateResponsePrivate::RegisterCACertificateResponsePrivate(
    RegisterCACertificateResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT RegisterCACertificate response element from \a xml.
 */
void RegisterCACertificateResponsePrivate::parseRegisterCACertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterCACertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
