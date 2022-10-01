// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describethingregistrationtaskresponse.h"
#include "describethingregistrationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::DescribeThingRegistrationTaskResponse
 * \brief The DescribeThingRegistrationTaskResponse class provides an interace for IoT DescribeThingRegistrationTask responses.
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
 * \sa IoTClient::describeThingRegistrationTask
 */

/*!
 * Constructs a DescribeThingRegistrationTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeThingRegistrationTaskResponse::DescribeThingRegistrationTaskResponse(
        const DescribeThingRegistrationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeThingRegistrationTaskResponsePrivate(this), parent)
{
    setRequest(new DescribeThingRegistrationTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeThingRegistrationTaskRequest * DescribeThingRegistrationTaskResponse::request() const
{
    Q_D(const DescribeThingRegistrationTaskResponse);
    return static_cast<const DescribeThingRegistrationTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT DescribeThingRegistrationTask \a response.
 */
void DescribeThingRegistrationTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeThingRegistrationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::DescribeThingRegistrationTaskResponsePrivate
 * \brief The DescribeThingRegistrationTaskResponsePrivate class provides private implementation for DescribeThingRegistrationTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a DescribeThingRegistrationTaskResponsePrivate object with public implementation \a q.
 */
DescribeThingRegistrationTaskResponsePrivate::DescribeThingRegistrationTaskResponsePrivate(
    DescribeThingRegistrationTaskResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT DescribeThingRegistrationTask response element from \a xml.
 */
void DescribeThingRegistrationTaskResponsePrivate::parseDescribeThingRegistrationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeThingRegistrationTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
