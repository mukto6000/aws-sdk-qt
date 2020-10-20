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

#include "createtopicruleresponse.h"
#include "createtopicruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::CreateTopicRuleResponse
 * \brief The CreateTopicRuleResponse class provides an interace for IoT CreateTopicRule responses.
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
 * \sa IoTClient::createTopicRule
 */

/*!
 * Constructs a CreateTopicRuleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTopicRuleResponse::CreateTopicRuleResponse(
        const CreateTopicRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new CreateTopicRuleResponsePrivate(this), parent)
{
    setRequest(new CreateTopicRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTopicRuleRequest * CreateTopicRuleResponse::request() const
{
    Q_D(const CreateTopicRuleResponse);
    return static_cast<const CreateTopicRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT CreateTopicRule \a response.
 */
void CreateTopicRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTopicRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT::CreateTopicRuleResponsePrivate
 * \brief The CreateTopicRuleResponsePrivate class provides private implementation for CreateTopicRuleResponse.
 * \internal
 *
 * \inmodule QtAwsIoT
 */

/*!
 * Constructs a CreateTopicRuleResponsePrivate object with public implementation \a q.
 */
CreateTopicRuleResponsePrivate::CreateTopicRuleResponsePrivate(
    CreateTopicRuleResponse * const q) : IoTResponsePrivate(q)
{

}

/*!
 * Parses a IoT CreateTopicRule response element from \a xml.
 */
void CreateTopicRuleResponsePrivate::parseCreateTopicRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTopicRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT
} // namespace QtAws
