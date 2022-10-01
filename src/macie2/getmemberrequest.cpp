// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmemberrequest.h"
#include "getmemberrequest_p.h"
#include "getmemberresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetMemberRequest
 * \brief The GetMemberRequest class provides an interface for Macie2 GetMember requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getMember
 */

/*!
 * Constructs a copy of \a other.
 */
GetMemberRequest::GetMemberRequest(const GetMemberRequest &other)
    : Macie2Request(new GetMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMemberRequest object.
 */
GetMemberRequest::GetMemberRequest()
    : Macie2Request(new GetMemberRequestPrivate(Macie2Request::GetMemberAction, this))
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
 * \class QtAws::Macie2::GetMemberRequestPrivate
 * \brief The GetMemberRequestPrivate class provides private implementation for GetMemberRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetMemberRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetMemberRequestPrivate::GetMemberRequestPrivate(
    const Macie2Request::Action action, GetMemberRequest * const q)
    : Macie2RequestPrivate(action, q)
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
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
