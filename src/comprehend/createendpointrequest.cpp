// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createendpointrequest.h"
#include "createendpointrequest_p.h"
#include "createendpointresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::CreateEndpointRequest
 * \brief The CreateEndpointRequest class provides an interface for Comprehend CreateEndpoint requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::createEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEndpointRequest::CreateEndpointRequest(const CreateEndpointRequest &other)
    : ComprehendRequest(new CreateEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEndpointRequest object.
 */
CreateEndpointRequest::CreateEndpointRequest()
    : ComprehendRequest(new CreateEndpointRequestPrivate(ComprehendRequest::CreateEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::CreateEndpointRequestPrivate
 * \brief The CreateEndpointRequestPrivate class provides private implementation for CreateEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a CreateEndpointRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
CreateEndpointRequestPrivate::CreateEndpointRequestPrivate(
    const ComprehendRequest::Action action, CreateEndpointRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEndpointRequest
 * class' copy constructor.
 */
CreateEndpointRequestPrivate::CreateEndpointRequestPrivate(
    const CreateEndpointRequestPrivate &other, CreateEndpointRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
