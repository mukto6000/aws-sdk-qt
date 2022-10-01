// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateidentityproviderrequest.h"
#include "updateidentityproviderrequest_p.h"
#include "updateidentityproviderresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::UpdateIdentityProviderRequest
 * \brief The UpdateIdentityProviderRequest class provides an interface for WorkSpacesWeb UpdateIdentityProvider requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::updateIdentityProvider
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIdentityProviderRequest::UpdateIdentityProviderRequest(const UpdateIdentityProviderRequest &other)
    : WorkSpacesWebRequest(new UpdateIdentityProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIdentityProviderRequest object.
 */
UpdateIdentityProviderRequest::UpdateIdentityProviderRequest()
    : WorkSpacesWebRequest(new UpdateIdentityProviderRequestPrivate(WorkSpacesWebRequest::UpdateIdentityProviderAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIdentityProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIdentityProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIdentityProviderRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIdentityProviderResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::UpdateIdentityProviderRequestPrivate
 * \brief The UpdateIdentityProviderRequestPrivate class provides private implementation for UpdateIdentityProviderRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a UpdateIdentityProviderRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
UpdateIdentityProviderRequestPrivate::UpdateIdentityProviderRequestPrivate(
    const WorkSpacesWebRequest::Action action, UpdateIdentityProviderRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIdentityProviderRequest
 * class' copy constructor.
 */
UpdateIdentityProviderRequestPrivate::UpdateIdentityProviderRequestPrivate(
    const UpdateIdentityProviderRequestPrivate &other, UpdateIdentityProviderRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
