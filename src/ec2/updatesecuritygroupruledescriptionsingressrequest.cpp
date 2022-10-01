// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesecuritygroupruledescriptionsingressrequest.h"
#include "updatesecuritygroupruledescriptionsingressrequest_p.h"
#include "updatesecuritygroupruledescriptionsingressresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::UpdateSecurityGroupRuleDescriptionsIngressRequest
 * \brief The UpdateSecurityGroupRuleDescriptionsIngressRequest class provides an interface for Ec2 UpdateSecurityGroupRuleDescriptionsIngress requests.
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
 * \sa Ec2Client::updateSecurityGroupRuleDescriptionsIngress
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSecurityGroupRuleDescriptionsIngressRequest::UpdateSecurityGroupRuleDescriptionsIngressRequest(const UpdateSecurityGroupRuleDescriptionsIngressRequest &other)
    : Ec2Request(new UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSecurityGroupRuleDescriptionsIngressRequest object.
 */
UpdateSecurityGroupRuleDescriptionsIngressRequest::UpdateSecurityGroupRuleDescriptionsIngressRequest()
    : Ec2Request(new UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate(Ec2Request::UpdateSecurityGroupRuleDescriptionsIngressAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSecurityGroupRuleDescriptionsIngressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSecurityGroupRuleDescriptionsIngressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSecurityGroupRuleDescriptionsIngressRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSecurityGroupRuleDescriptionsIngressResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate
 * \brief The UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate class provides private implementation for UpdateSecurityGroupRuleDescriptionsIngressRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate::UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate(
    const Ec2Request::Action action, UpdateSecurityGroupRuleDescriptionsIngressRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSecurityGroupRuleDescriptionsIngressRequest
 * class' copy constructor.
 */
UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate::UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate(
    const UpdateSecurityGroupRuleDescriptionsIngressRequestPrivate &other, UpdateSecurityGroupRuleDescriptionsIngressRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
