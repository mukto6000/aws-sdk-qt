// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteportalrequest.h"
#include "deleteportalrequest_p.h"
#include "deleteportalresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DeletePortalRequest
 * \brief The DeletePortalRequest class provides an interface for WorkSpacesWeb DeletePortal requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::deletePortal
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePortalRequest::DeletePortalRequest(const DeletePortalRequest &other)
    : WorkSpacesWebRequest(new DeletePortalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePortalRequest object.
 */
DeletePortalRequest::DeletePortalRequest()
    : WorkSpacesWebRequest(new DeletePortalRequestPrivate(WorkSpacesWebRequest::DeletePortalAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePortalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePortalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePortalRequest::response(QNetworkReply * const reply) const
{
    return new DeletePortalResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::DeletePortalRequestPrivate
 * \brief The DeletePortalRequestPrivate class provides private implementation for DeletePortalRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DeletePortalRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
DeletePortalRequestPrivate::DeletePortalRequestPrivate(
    const WorkSpacesWebRequest::Action action, DeletePortalRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePortalRequest
 * class' copy constructor.
 */
DeletePortalRequestPrivate::DeletePortalRequestPrivate(
    const DeletePortalRequestPrivate &other, DeletePortalRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
