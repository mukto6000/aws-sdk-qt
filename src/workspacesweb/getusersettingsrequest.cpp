// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusersettingsrequest.h"
#include "getusersettingsrequest_p.h"
#include "getusersettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::GetUserSettingsRequest
 * \brief The GetUserSettingsRequest class provides an interface for WorkSpacesWeb GetUserSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::getUserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserSettingsRequest::GetUserSettingsRequest(const GetUserSettingsRequest &other)
    : WorkSpacesWebRequest(new GetUserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserSettingsRequest object.
 */
GetUserSettingsRequest::GetUserSettingsRequest()
    : WorkSpacesWebRequest(new GetUserSettingsRequestPrivate(WorkSpacesWebRequest::GetUserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new GetUserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::GetUserSettingsRequestPrivate
 * \brief The GetUserSettingsRequestPrivate class provides private implementation for GetUserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a GetUserSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
GetUserSettingsRequestPrivate::GetUserSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, GetUserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserSettingsRequest
 * class' copy constructor.
 */
GetUserSettingsRequestPrivate::GetUserSettingsRequestPrivate(
    const GetUserSettingsRequestPrivate &other, GetUserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
