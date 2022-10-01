// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsnapshotsrequest.h"
#include "createsnapshotsrequest_p.h"
#include "createsnapshotsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::CreateSnapshotsRequest
 * \brief The CreateSnapshotsRequest class provides an interface for Ec2 CreateSnapshots requests.
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
 * \sa Ec2Client::createSnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSnapshotsRequest::CreateSnapshotsRequest(const CreateSnapshotsRequest &other)
    : Ec2Request(new CreateSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSnapshotsRequest object.
 */
CreateSnapshotsRequest::CreateSnapshotsRequest()
    : Ec2Request(new CreateSnapshotsRequestPrivate(Ec2Request::CreateSnapshotsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSnapshotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSnapshotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new CreateSnapshotsResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2::CreateSnapshotsRequestPrivate
 * \brief The CreateSnapshotsRequestPrivate class provides private implementation for CreateSnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a CreateSnapshotsRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
CreateSnapshotsRequestPrivate::CreateSnapshotsRequestPrivate(
    const Ec2Request::Action action, CreateSnapshotsRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSnapshotsRequest
 * class' copy constructor.
 */
CreateSnapshotsRequestPrivate::CreateSnapshotsRequestPrivate(
    const CreateSnapshotsRequestPrivate &other, CreateSnapshotsRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace Ec2
} // namespace QtAws
