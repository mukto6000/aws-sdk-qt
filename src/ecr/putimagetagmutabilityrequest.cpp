// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putimagetagmutabilityrequest.h"
#include "putimagetagmutabilityrequest_p.h"
#include "putimagetagmutabilityresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutImageTagMutabilityRequest
 * \brief The PutImageTagMutabilityRequest class provides an interface for Ecr PutImageTagMutability requests.
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
 * \sa EcrClient::putImageTagMutability
 */

/*!
 * Constructs a copy of \a other.
 */
PutImageTagMutabilityRequest::PutImageTagMutabilityRequest(const PutImageTagMutabilityRequest &other)
    : EcrRequest(new PutImageTagMutabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutImageTagMutabilityRequest object.
 */
PutImageTagMutabilityRequest::PutImageTagMutabilityRequest()
    : EcrRequest(new PutImageTagMutabilityRequestPrivate(EcrRequest::PutImageTagMutabilityAction, this))
{

}

/*!
 * \reimp
 */
bool PutImageTagMutabilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutImageTagMutabilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutImageTagMutabilityRequest::response(QNetworkReply * const reply) const
{
    return new PutImageTagMutabilityResponse(*this, reply);
}

/*!
 * \class QtAws::Ecr::PutImageTagMutabilityRequestPrivate
 * \brief The PutImageTagMutabilityRequestPrivate class provides private implementation for PutImageTagMutabilityRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutImageTagMutabilityRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
PutImageTagMutabilityRequestPrivate::PutImageTagMutabilityRequestPrivate(
    const EcrRequest::Action action, PutImageTagMutabilityRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutImageTagMutabilityRequest
 * class' copy constructor.
 */
PutImageTagMutabilityRequestPrivate::PutImageTagMutabilityRequestPrivate(
    const PutImageTagMutabilityRequestPrivate &other, PutImageTagMutabilityRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
