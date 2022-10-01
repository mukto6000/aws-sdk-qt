// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatewebsiteauthorizationproviderrequest.h"
#include "disassociatewebsiteauthorizationproviderrequest_p.h"
#include "disassociatewebsiteauthorizationproviderresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DisassociateWebsiteAuthorizationProviderRequest
 * \brief The DisassociateWebsiteAuthorizationProviderRequest class provides an interface for WorkLink DisassociateWebsiteAuthorizationProvider requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::disassociateWebsiteAuthorizationProvider
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateWebsiteAuthorizationProviderRequest::DisassociateWebsiteAuthorizationProviderRequest(const DisassociateWebsiteAuthorizationProviderRequest &other)
    : WorkLinkRequest(new DisassociateWebsiteAuthorizationProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateWebsiteAuthorizationProviderRequest object.
 */
DisassociateWebsiteAuthorizationProviderRequest::DisassociateWebsiteAuthorizationProviderRequest()
    : WorkLinkRequest(new DisassociateWebsiteAuthorizationProviderRequestPrivate(WorkLinkRequest::DisassociateWebsiteAuthorizationProviderAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateWebsiteAuthorizationProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateWebsiteAuthorizationProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateWebsiteAuthorizationProviderRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateWebsiteAuthorizationProviderResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::DisassociateWebsiteAuthorizationProviderRequestPrivate
 * \brief The DisassociateWebsiteAuthorizationProviderRequestPrivate class provides private implementation for DisassociateWebsiteAuthorizationProviderRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DisassociateWebsiteAuthorizationProviderRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
DisassociateWebsiteAuthorizationProviderRequestPrivate::DisassociateWebsiteAuthorizationProviderRequestPrivate(
    const WorkLinkRequest::Action action, DisassociateWebsiteAuthorizationProviderRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateWebsiteAuthorizationProviderRequest
 * class' copy constructor.
 */
DisassociateWebsiteAuthorizationProviderRequestPrivate::DisassociateWebsiteAuthorizationProviderRequestPrivate(
    const DisassociateWebsiteAuthorizationProviderRequestPrivate &other, DisassociateWebsiteAuthorizationProviderRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
