// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifytrafficmirrorfilterruleresponse.h"
#include "modifytrafficmirrorfilterruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::ModifyTrafficMirrorFilterRuleResponse
 * \brief The ModifyTrafficMirrorFilterRuleResponse class provides an interace for Ec2 ModifyTrafficMirrorFilterRule responses.
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
 * \sa Ec2Client::modifyTrafficMirrorFilterRule
 */

/*!
 * Constructs a ModifyTrafficMirrorFilterRuleResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyTrafficMirrorFilterRuleResponse::ModifyTrafficMirrorFilterRuleResponse(
        const ModifyTrafficMirrorFilterRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ModifyTrafficMirrorFilterRuleResponsePrivate(this), parent)
{
    setRequest(new ModifyTrafficMirrorFilterRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyTrafficMirrorFilterRuleRequest * ModifyTrafficMirrorFilterRuleResponse::request() const
{
    Q_D(const ModifyTrafficMirrorFilterRuleResponse);
    return static_cast<const ModifyTrafficMirrorFilterRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 ModifyTrafficMirrorFilterRule \a response.
 */
void ModifyTrafficMirrorFilterRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyTrafficMirrorFilterRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::ModifyTrafficMirrorFilterRuleResponsePrivate
 * \brief The ModifyTrafficMirrorFilterRuleResponsePrivate class provides private implementation for ModifyTrafficMirrorFilterRuleResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a ModifyTrafficMirrorFilterRuleResponsePrivate object with public implementation \a q.
 */
ModifyTrafficMirrorFilterRuleResponsePrivate::ModifyTrafficMirrorFilterRuleResponsePrivate(
    ModifyTrafficMirrorFilterRuleResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 ModifyTrafficMirrorFilterRule response element from \a xml.
 */
void ModifyTrafficMirrorFilterRuleResponsePrivate::parseModifyTrafficMirrorFilterRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyTrafficMirrorFilterRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws
