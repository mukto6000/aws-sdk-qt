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

#include "registerimageresponse.h"
#include "registerimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RegisterImageResponse
 * \brief The RegisterImageResponse class provides an interace for EC2 RegisterImage responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS Cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications faster. Amazon
 *  Virtual Private Cloud (Amazon VPC) enables you to provision a logically isolated section of the AWS Cloud where you can
 *  launch AWS resources in a virtual network that you've defined. Amazon Elastic Block Store (Amazon EBS) provides block
 *  level storage volumes for use with EC2 instances. EBS volumes are highly available and reliable storage volumes that can
 *  be attached to any running instance and used like a hard
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
 *  AWS VPN: <a href="http://aws.amazon.com/vpn">AWS VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">AWS VPN documentation</a>
 *
 * \sa Ec2Client::registerImage
 */

/*!
 * Constructs a RegisterImageResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterImageResponse::RegisterImageResponse(
        const RegisterImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new RegisterImageResponsePrivate(this), parent)
{
    setRequest(new RegisterImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterImageRequest * RegisterImageResponse::request() const
{
    return static_cast<const RegisterImageRequest *>(Ec2Response::request());
}

/*!
 * \reimp
 * Parses a successful EC2 RegisterImage \a response.
 */
void RegisterImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::RegisterImageResponsePrivate
 * \brief The RegisterImageResponsePrivate class provides private implementation for RegisterImageResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a RegisterImageResponsePrivate object with public implementation \a q.
 */
RegisterImageResponsePrivate::RegisterImageResponsePrivate(
    RegisterImageResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 RegisterImage response element from \a xml.
 */
void RegisterImageResponsePrivate::parseRegisterImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
