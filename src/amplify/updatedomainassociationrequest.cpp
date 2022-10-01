// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainassociationrequest.h"
#include "updatedomainassociationrequest_p.h"
#include "updatedomainassociationresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateDomainAssociationRequest
 * \brief The UpdateDomainAssociationRequest class provides an interface for Amplify UpdateDomainAssociation requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::updateDomainAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainAssociationRequest::UpdateDomainAssociationRequest(const UpdateDomainAssociationRequest &other)
    : AmplifyRequest(new UpdateDomainAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainAssociationRequest object.
 */
UpdateDomainAssociationRequest::UpdateDomainAssociationRequest()
    : AmplifyRequest(new UpdateDomainAssociationRequestPrivate(AmplifyRequest::UpdateDomainAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainAssociationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::UpdateDomainAssociationRequestPrivate
 * \brief The UpdateDomainAssociationRequestPrivate class provides private implementation for UpdateDomainAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateDomainAssociationRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
UpdateDomainAssociationRequestPrivate::UpdateDomainAssociationRequestPrivate(
    const AmplifyRequest::Action action, UpdateDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainAssociationRequest
 * class' copy constructor.
 */
UpdateDomainAssociationRequestPrivate::UpdateDomainAssociationRequestPrivate(
    const UpdateDomainAssociationRequestPrivate &other, UpdateDomainAssociationRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
