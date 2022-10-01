// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccountpermissionsrequest.h"
#include "listaccountpermissionsrequest_p.h"
#include "listaccountpermissionsresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListAccountPermissionsRequest
 * \brief The ListAccountPermissionsRequest class provides an interface for Inspector2 ListAccountPermissions requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listAccountPermissions
 */

/*!
 * Constructs a copy of \a other.
 */
ListAccountPermissionsRequest::ListAccountPermissionsRequest(const ListAccountPermissionsRequest &other)
    : Inspector2Request(new ListAccountPermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAccountPermissionsRequest object.
 */
ListAccountPermissionsRequest::ListAccountPermissionsRequest()
    : Inspector2Request(new ListAccountPermissionsRequestPrivate(Inspector2Request::ListAccountPermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAccountPermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAccountPermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAccountPermissionsRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountPermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::ListAccountPermissionsRequestPrivate
 * \brief The ListAccountPermissionsRequestPrivate class provides private implementation for ListAccountPermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListAccountPermissionsRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
ListAccountPermissionsRequestPrivate::ListAccountPermissionsRequestPrivate(
    const Inspector2Request::Action action, ListAccountPermissionsRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAccountPermissionsRequest
 * class' copy constructor.
 */
ListAccountPermissionsRequestPrivate::ListAccountPermissionsRequestPrivate(
    const ListAccountPermissionsRequestPrivate &other, ListAccountPermissionsRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
