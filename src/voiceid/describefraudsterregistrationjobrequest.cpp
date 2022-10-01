/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describefraudsterregistrationjobrequest.h"
#include "describefraudsterregistrationjobrequest_p.h"
#include "describefraudsterregistrationjobresponse.h"
#include "voiceidrequest_p.h"

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DescribeFraudsterRegistrationJobRequest
 * \brief The DescribeFraudsterRegistrationJobRequest class provides an interface for VoiceId DescribeFraudsterRegistrationJob requests.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::describeFraudsterRegistrationJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFraudsterRegistrationJobRequest::DescribeFraudsterRegistrationJobRequest(const DescribeFraudsterRegistrationJobRequest &other)
    : VoiceIdRequest(new DescribeFraudsterRegistrationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFraudsterRegistrationJobRequest object.
 */
DescribeFraudsterRegistrationJobRequest::DescribeFraudsterRegistrationJobRequest()
    : VoiceIdRequest(new DescribeFraudsterRegistrationJobRequestPrivate(VoiceIdRequest::DescribeFraudsterRegistrationJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFraudsterRegistrationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFraudsterRegistrationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFraudsterRegistrationJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFraudsterRegistrationJobResponse(*this, reply);
}

/*!
 * \class QtAws::VoiceId::DescribeFraudsterRegistrationJobRequestPrivate
 * \brief The DescribeFraudsterRegistrationJobRequestPrivate class provides private implementation for DescribeFraudsterRegistrationJobRequest.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DescribeFraudsterRegistrationJobRequestPrivate object for VoiceId \a action,
 * with public implementation \a q.
 */
DescribeFraudsterRegistrationJobRequestPrivate::DescribeFraudsterRegistrationJobRequestPrivate(
    const VoiceIdRequest::Action action, DescribeFraudsterRegistrationJobRequest * const q)
    : VoiceIdRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFraudsterRegistrationJobRequest
 * class' copy constructor.
 */
DescribeFraudsterRegistrationJobRequestPrivate::DescribeFraudsterRegistrationJobRequestPrivate(
    const DescribeFraudsterRegistrationJobRequestPrivate &other, DescribeFraudsterRegistrationJobRequest * const q)
    : VoiceIdRequestPrivate(other, q)
{

}

} // namespace VoiceId
} // namespace QtAws
