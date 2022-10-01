// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesecuritygrouprequest.h"
#include "deletesecuritygrouprequest_p.h"
#include "deletesecuritygroupresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::DeleteSecurityGroupRequest
 * \brief The DeleteSecurityGroupRequest class provides an interface for Ec2 DeleteSecurityGroup requests.
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
 * \sa Ec2Client::deleteSecurityGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSecurityGroupRequest::DeleteSecurityGroupRequest(const DeleteSecurityGroupRequest &other)
    : Ec2Request(new DeleteSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSecurityGroupRequest object.
 */
DeleteSecurityGroupRequest::DeleteSecurityGroupRequest()
    : Ec2Request(new DeleteSecurityGroupRequestPrivate(Ec2Request::DeleteSecurityGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSecurityGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSecurityGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSecurityGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::DeleteSecurityGroupRequestPrivate
 * \brief The DeleteSecurityGroupRequestPrivate class provides private implementation for DeleteSecurityGroupRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a DeleteSecurityGroupRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DeleteSecurityGroupRequestPrivate::DeleteSecurityGroupRequestPrivate(
    const Ec2Request::Action action, DeleteSecurityGroupRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSecurityGroupRequest
 * class' copy constructor.
 */
DeleteSecurityGroupRequestPrivate::DeleteSecurityGroupRequestPrivate(
    const DeleteSecurityGroupRequestPrivate &other, DeleteSecurityGroupRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
