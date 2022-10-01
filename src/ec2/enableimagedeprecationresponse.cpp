// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableimagedeprecationresponse.h"
#include "enableimagedeprecationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::EnableImageDeprecationResponse
 * \brief The EnableImageDeprecationResponse class provides an interace for Ec2 EnableImageDeprecation responses.
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
 * \sa Ec2Client::enableImageDeprecation
 */

/*!
 * Constructs a EnableImageDeprecationResponse object for \a reply to \a request, with parent \a parent.
 */
EnableImageDeprecationResponse::EnableImageDeprecationResponse(
        const EnableImageDeprecationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new EnableImageDeprecationResponsePrivate(this), parent)
{
    setRequest(new EnableImageDeprecationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableImageDeprecationRequest * EnableImageDeprecationResponse::request() const
{
    Q_D(const EnableImageDeprecationResponse);
    return static_cast<const EnableImageDeprecationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 EnableImageDeprecation \a response.
 */
void EnableImageDeprecationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableImageDeprecationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::EnableImageDeprecationResponsePrivate
 * \brief The EnableImageDeprecationResponsePrivate class provides private implementation for EnableImageDeprecationResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a EnableImageDeprecationResponsePrivate object with public implementation \a q.
 */
EnableImageDeprecationResponsePrivate::EnableImageDeprecationResponsePrivate(
    EnableImageDeprecationResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 EnableImageDeprecation response element from \a xml.
 */
void EnableImageDeprecationResponsePrivate::parseEnableImageDeprecationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableImageDeprecationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws
