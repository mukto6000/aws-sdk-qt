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

#include "provisionpublicipv4poolcidrresponse.h"
#include "provisionpublicipv4poolcidrresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::ProvisionPublicIpv4PoolCidrResponse
 * \brief The ProvisionPublicIpv4PoolCidrResponse class provides an interace for Ec2 ProvisionPublicIpv4PoolCidr responses.
 *
 * \inmodule QtAwsEc2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the Amazon Web Services
 *  Cloud. Using Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *  faster. Amazon Virtual Private Cloud (Amazon VPC) enables you to provision a logically isolated section of the Amazon
 *  Web Services Cloud where you can launch Amazon Web Services resources in a virtual network that you've defined. Amazon
 *  Elastic Block Store (Amazon EBS) provides block level storage volumes for use with EC2 instances. EBS volumes are highly
 *  available and reliable storage volumes that can be attached to any running instance and used like a hard
 * 
 *  drive>
 * 
 *  To learn more, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon EC2: <a href="http://aws.amazon.com/ec2">AmazonEC2 product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ebs">Amazon EBS documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon VPC: <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon Web Services VPN: <a href="http://aws.amazon.com/vpn">Amazon Web Services VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">Amazon Web Services VPN documentation</a>
 *
 * \sa Ec2Client::provisionPublicIpv4PoolCidr
 */

/*!
 * Constructs a ProvisionPublicIpv4PoolCidrResponse object for \a reply to \a request, with parent \a parent.
 */
ProvisionPublicIpv4PoolCidrResponse::ProvisionPublicIpv4PoolCidrResponse(
        const ProvisionPublicIpv4PoolCidrRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ProvisionPublicIpv4PoolCidrResponsePrivate(this), parent)
{
    setRequest(new ProvisionPublicIpv4PoolCidrRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ProvisionPublicIpv4PoolCidrRequest * ProvisionPublicIpv4PoolCidrResponse::request() const
{
    Q_D(const ProvisionPublicIpv4PoolCidrResponse);
    return static_cast<const ProvisionPublicIpv4PoolCidrRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 ProvisionPublicIpv4PoolCidr \a response.
 */
void ProvisionPublicIpv4PoolCidrResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ProvisionPublicIpv4PoolCidrResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::ProvisionPublicIpv4PoolCidrResponsePrivate
 * \brief The ProvisionPublicIpv4PoolCidrResponsePrivate class provides private implementation for ProvisionPublicIpv4PoolCidrResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a ProvisionPublicIpv4PoolCidrResponsePrivate object with public implementation \a q.
 */
ProvisionPublicIpv4PoolCidrResponsePrivate::ProvisionPublicIpv4PoolCidrResponsePrivate(
    ProvisionPublicIpv4PoolCidrResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 ProvisionPublicIpv4PoolCidr response element from \a xml.
 */
void ProvisionPublicIpv4PoolCidrResponsePrivate::parseProvisionPublicIpv4PoolCidrResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ProvisionPublicIpv4PoolCidrResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws
