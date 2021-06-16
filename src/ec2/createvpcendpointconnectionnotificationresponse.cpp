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

#include "createvpcendpointconnectionnotificationresponse.h"
#include "createvpcendpointconnectionnotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateVpcEndpointConnectionNotificationResponse
 * \brief The CreateVpcEndpointConnectionNotificationResponse class provides an interace for EC2 CreateVpcEndpointConnectionNotification responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon EC2: <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>, <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AmazonEBS.html">Amazon EBS documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon VPC: <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  AWS VPN: <a href="http://aws.amazon.com/vpn">AWS VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">AWS VPN documentation</a>
 *
 * \sa Ec2Client::createVpcEndpointConnectionNotification
 */

/*!
 * Constructs a CreateVpcEndpointConnectionNotificationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVpcEndpointConnectionNotificationResponse::CreateVpcEndpointConnectionNotificationResponse(
        const CreateVpcEndpointConnectionNotificationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateVpcEndpointConnectionNotificationResponsePrivate(this), parent)
{
    setRequest(new CreateVpcEndpointConnectionNotificationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVpcEndpointConnectionNotificationRequest * CreateVpcEndpointConnectionNotificationResponse::request() const
{
    Q_D(const CreateVpcEndpointConnectionNotificationResponse);
    return static_cast<const CreateVpcEndpointConnectionNotificationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateVpcEndpointConnectionNotification \a response.
 */
void CreateVpcEndpointConnectionNotificationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVpcEndpointConnectionNotificationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateVpcEndpointConnectionNotificationResponsePrivate
 * \brief The CreateVpcEndpointConnectionNotificationResponsePrivate class provides private implementation for CreateVpcEndpointConnectionNotificationResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateVpcEndpointConnectionNotificationResponsePrivate object with public implementation \a q.
 */
CreateVpcEndpointConnectionNotificationResponsePrivate::CreateVpcEndpointConnectionNotificationResponsePrivate(
    CreateVpcEndpointConnectionNotificationResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateVpcEndpointConnectionNotification response element from \a xml.
 */
void CreateVpcEndpointConnectionNotificationResponsePrivate::parseCreateVpcEndpointConnectionNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcEndpointConnectionNotificationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
