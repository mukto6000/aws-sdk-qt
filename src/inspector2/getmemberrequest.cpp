// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmemberrequest.h"
#include "getmemberrequest_p.h"
#include "getmemberresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::GetMemberRequest
 * \brief The GetMemberRequest class provides an interface for Inspector2 GetMember requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::getMember
 */

/*!
 * Constructs a copy of \a other.
 */
GetMemberRequest::GetMemberRequest(const GetMemberRequest &other)
    : Inspector2Request(new GetMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMemberRequest object.
 */
GetMemberRequest::GetMemberRequest()
    : Inspector2Request(new GetMemberRequestPrivate(Inspector2Request::GetMemberAction, this))
{

}

/*!
 * \reimp
 */
bool GetMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMemberRequest::response(QNetworkReply * const reply) const
{
    return new GetMemberResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::GetMemberRequestPrivate
 * \brief The GetMemberRequestPrivate class provides private implementation for GetMemberRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a GetMemberRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
GetMemberRequestPrivate::GetMemberRequestPrivate(
    const Inspector2Request::Action action, GetMemberRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMemberRequest
 * class' copy constructor.
 */
GetMemberRequestPrivate::GetMemberRequestPrivate(
    const GetMemberRequestPrivate &other, GetMemberRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
