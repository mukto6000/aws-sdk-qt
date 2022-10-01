// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableserialconsoleaccessresponse.h"
#include "enableserialconsoleaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::EnableSerialConsoleAccessResponse
 * \brief The EnableSerialConsoleAccessResponse class provides an interace for Ec2 EnableSerialConsoleAccess responses.
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
 * \sa Ec2Client::enableSerialConsoleAccess
 */

/*!
 * Constructs a EnableSerialConsoleAccessResponse object for \a reply to \a request, with parent \a parent.
 */
EnableSerialConsoleAccessResponse::EnableSerialConsoleAccessResponse(
        const EnableSerialConsoleAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new EnableSerialConsoleAccessResponsePrivate(this), parent)
{
    setRequest(new EnableSerialConsoleAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableSerialConsoleAccessRequest * EnableSerialConsoleAccessResponse::request() const
{
    Q_D(const EnableSerialConsoleAccessResponse);
    return static_cast<const EnableSerialConsoleAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 EnableSerialConsoleAccess \a response.
 */
void EnableSerialConsoleAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableSerialConsoleAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::EnableSerialConsoleAccessResponsePrivate
 * \brief The EnableSerialConsoleAccessResponsePrivate class provides private implementation for EnableSerialConsoleAccessResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a EnableSerialConsoleAccessResponsePrivate object with public implementation \a q.
 */
EnableSerialConsoleAccessResponsePrivate::EnableSerialConsoleAccessResponsePrivate(
    EnableSerialConsoleAccessResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 EnableSerialConsoleAccess response element from \a xml.
 */
void EnableSerialConsoleAccessResponsePrivate::parseEnableSerialConsoleAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableSerialConsoleAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws
