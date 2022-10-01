// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerepositoriesrequest.h"
#include "describerepositoriesrequest_p.h"
#include "describerepositoriesresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DescribeRepositoriesRequest
 * \brief The DescribeRepositoriesRequest class provides an interface for Ecr DescribeRepositories requests.
 *
 * \inmodule QtAwsEcr
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 * 
 *  images>
 * 
 *  Amazon ECR has service endpoints in each supported Region. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ecr.html">Amazon ECR endpoints</a> in the <i>Amazon Web Services
 *  General
 *
 * \sa EcrClient::describeRepositories
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRepositoriesRequest::DescribeRepositoriesRequest(const DescribeRepositoriesRequest &other)
    : EcrRequest(new DescribeRepositoriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRepositoriesRequest object.
 */
DescribeRepositoriesRequest::DescribeRepositoriesRequest()
    : EcrRequest(new DescribeRepositoriesRequestPrivate(EcrRequest::DescribeRepositoriesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRepositoriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRepositoriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRepositoriesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRepositoriesResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::DescribeRepositoriesRequestPrivate
 * \brief The DescribeRepositoriesRequestPrivate class provides private implementation for DescribeRepositoriesRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DescribeRepositoriesRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
DescribeRepositoriesRequestPrivate::DescribeRepositoriesRequestPrivate(
    const EcrRequest::Action action, DescribeRepositoriesRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRepositoriesRequest
 * class' copy constructor.
 */
DescribeRepositoriesRequestPrivate::DescribeRepositoriesRequestPrivate(
    const DescribeRepositoriesRequestPrivate &other, DescribeRepositoriesRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
