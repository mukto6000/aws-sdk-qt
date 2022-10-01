// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "declineinvitationsrequest.h"
#include "declineinvitationsrequest_p.h"
#include "declineinvitationsresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DeclineInvitationsRequest
 * \brief The DeclineInvitationsRequest class provides an interface for Macie2 DeclineInvitations requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::declineInvitations
 */

/*!
 * Constructs a copy of \a other.
 */
DeclineInvitationsRequest::DeclineInvitationsRequest(const DeclineInvitationsRequest &other)
    : Macie2Request(new DeclineInvitationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeclineInvitationsRequest object.
 */
DeclineInvitationsRequest::DeclineInvitationsRequest()
    : Macie2Request(new DeclineInvitationsRequestPrivate(Macie2Request::DeclineInvitationsAction, this))
{

}

/*!
 * \reimp
 */
bool DeclineInvitationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeclineInvitationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeclineInvitationsRequest::response(QNetworkReply * const reply) const
{
    return new DeclineInvitationsResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::DeclineInvitationsRequestPrivate
 * \brief The DeclineInvitationsRequestPrivate class provides private implementation for DeclineInvitationsRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DeclineInvitationsRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
DeclineInvitationsRequestPrivate::DeclineInvitationsRequestPrivate(
    const Macie2Request::Action action, DeclineInvitationsRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeclineInvitationsRequest
 * class' copy constructor.
 */
DeclineInvitationsRequestPrivate::DeclineInvitationsRequestPrivate(
    const DeclineInvitationsRequestPrivate &other, DeclineInvitationsRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
