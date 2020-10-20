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

#include "createbillinggroupresponse.h"
#include "createbillinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateBillingGroupResponse
 * \brief The CreateBillingGroupResponse class provides an interace for IoT CreateBillingGroup responses.
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
 * \sa IoTClient::createBillingGroup
 */

/*!
 * Constructs a CreateBillingGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBillingGroupResponse::CreateBillingGroupResponse(
        const CreateBillingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateBillingGroupResponsePrivate(this), parent)
{
    setRequest(new CreateBillingGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBillingGroupRequest * CreateBillingGroupResponse::request() const
{
    Q_D(const CreateBillingGroupResponse);
    return static_cast<const CreateBillingGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT CreateBillingGroup \a response.
 */
void CreateBillingGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBillingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::CreateBillingGroupResponsePrivate
 * \brief The CreateBillingGroupResponsePrivate class provides private implementation for CreateBillingGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CreateBillingGroupResponsePrivate object with public implementation \a q.
 */
CreateBillingGroupResponsePrivate::CreateBillingGroupResponsePrivate(
    CreateBillingGroupResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT CreateBillingGroup response element from \a xml.
 */
void CreateBillingGroupResponsePrivate::parseCreateBillingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBillingGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
