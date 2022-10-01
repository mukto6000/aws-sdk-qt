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

#include "startstreamtranscriptionrequest.h"
#include "startstreamtranscriptionrequest_p.h"
#include "startstreamtranscriptionresponse.h"
#include "transcribestreamingrequest_p.h"

namespace QtAws {
namespace TranscribeStreaming {

/*!
 * \class QtAws::TranscribeStreaming::StartStreamTranscriptionRequest
 * \brief The StartStreamTranscriptionRequest class provides an interface for TranscribeStreaming StartStreamTranscription requests.
 *
 * \inmodule QtAwsTranscribeStreaming
 *
 *  Operations and objects for transcribing streaming speech to
 *
 * \sa TranscribeStreamingClient::startStreamTranscription
 */

/*!
 * Constructs a copy of \a other.
 */
StartStreamTranscriptionRequest::StartStreamTranscriptionRequest(const StartStreamTranscriptionRequest &other)
    : TranscribeStreamingRequest(new StartStreamTranscriptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartStreamTranscriptionRequest object.
 */
StartStreamTranscriptionRequest::StartStreamTranscriptionRequest()
    : TranscribeStreamingRequest(new StartStreamTranscriptionRequestPrivate(TranscribeStreamingRequest::StartStreamTranscriptionAction, this))
{

}

/*!
 * \reimp
 */
bool StartStreamTranscriptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartStreamTranscriptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartStreamTranscriptionRequest::response(QNetworkReply * const reply) const
{
    return new StartStreamTranscriptionResponse(*this, reply);
}

/*!
 * \class QtAws::TranscribeStreaming::StartStreamTranscriptionRequestPrivate
 * \brief The StartStreamTranscriptionRequestPrivate class provides private implementation for StartStreamTranscriptionRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribeStreaming
 */

/*!
 * Constructs a StartStreamTranscriptionRequestPrivate object for TranscribeStreaming \a action,
 * with public implementation \a q.
 */
StartStreamTranscriptionRequestPrivate::StartStreamTranscriptionRequestPrivate(
    const TranscribeStreamingRequest::Action action, StartStreamTranscriptionRequest * const q)
    : TranscribeStreamingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartStreamTranscriptionRequest
 * class' copy constructor.
 */
StartStreamTranscriptionRequestPrivate::StartStreamTranscriptionRequestPrivate(
    const StartStreamTranscriptionRequestPrivate &other, StartStreamTranscriptionRequest * const q)
    : TranscribeStreamingRequestPrivate(other, q)
{

}

} // namespace TranscribeStreaming
} // namespace QtAws
