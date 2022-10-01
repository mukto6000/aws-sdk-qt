// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restoreaddresstoclassicresponse.h"
#include "restoreaddresstoclassicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::RestoreAddressToClassicResponse
 * \brief The RestoreAddressToClassicResponse class provides an interace for Ec2 RestoreAddressToClassic responses.
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
 * \sa Ec2Client::restoreAddressToClassic
 */

/*!
 * Constructs a RestoreAddressToClassicResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreAddressToClassicResponse::RestoreAddressToClassicResponse(
        const RestoreAddressToClassicRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new RestoreAddressToClassicResponsePrivate(this), parent)
{
    setRequest(new RestoreAddressToClassicRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreAddressToClassicRequest * RestoreAddressToClassicResponse::request() const
{
    Q_D(const RestoreAddressToClassicResponse);
    return static_cast<const RestoreAddressToClassicRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 RestoreAddressToClassic \a response.
 */
void RestoreAddressToClassicResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreAddressToClassicResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::RestoreAddressToClassicResponsePrivate
 * \brief The RestoreAddressToClassicResponsePrivate class provides private implementation for RestoreAddressToClassicResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a RestoreAddressToClassicResponsePrivate object with public implementation \a q.
 */
RestoreAddressToClassicResponsePrivate::RestoreAddressToClassicResponsePrivate(
    RestoreAddressToClassicResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 RestoreAddressToClassic response element from \a xml.
 */
void RestoreAddressToClassicResponsePrivate::parseRestoreAddressToClassicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreAddressToClassicResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws
