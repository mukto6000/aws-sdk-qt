// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyfleetrequest.h"
#include "modifyfleetrequest_p.h"
#include "modifyfleetresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::ModifyFleetRequest
 * \brief The ModifyFleetRequest class provides an interface for Ec2 ModifyFleet requests.
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
 * \sa Ec2Client::modifyFleet
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyFleetRequest::ModifyFleetRequest(const ModifyFleetRequest &other)
    : Ec2Request(new ModifyFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyFleetRequest object.
 */
ModifyFleetRequest::ModifyFleetRequest()
    : Ec2Request(new ModifyFleetRequestPrivate(Ec2Request::ModifyFleetAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyFleetRequest::response(QNetworkReply * const reply) const
{
    return new ModifyFleetResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::ModifyFleetRequestPrivate
 * \brief The ModifyFleetRequestPrivate class provides private implementation for ModifyFleetRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a ModifyFleetRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
ModifyFleetRequestPrivate::ModifyFleetRequestPrivate(
    const Ec2Request::Action action, ModifyFleetRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyFleetRequest
 * class' copy constructor.
 */
ModifyFleetRequestPrivate::ModifyFleetRequestPrivate(
    const ModifyFleetRequestPrivate &other, ModifyFleetRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
