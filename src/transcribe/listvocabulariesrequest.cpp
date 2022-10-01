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

#include "listvocabulariesrequest.h"
#include "listvocabulariesrequest_p.h"
#include "listvocabulariesresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListVocabulariesRequest
 * \brief The ListVocabulariesRequest class provides an interface for Transcribe ListVocabularies requests.
 *
 * \inmodule QtAwsTranscribe
 *
 *  Amazon Transcribe offers three main types of batch transcription: <b>Standard</b>, <b>Medical</b>, and <b>Call
 * 
 *  Analytics</b>> <ul> <li>
 * 
 *  <b>Standard transcriptions</b> are the most common option. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Medical transcriptions</b> are tailored to medical professionals and incorporate medical terms. A common use case for
 *  this service is transcribing doctor-patient dialogue into after-visit notes. Refer to for
 * 
 *  details> </li> <li>
 * 
 *  <b>Call Analytics transcriptions</b> are designed for use with call center audio on two different channels; if you're
 *  looking for insight into customer service calls, use this option. Refer to for
 *
 * \sa TranscribeClient::listVocabularies
 */

/*!
 * Constructs a copy of \a other.
 */
ListVocabulariesRequest::ListVocabulariesRequest(const ListVocabulariesRequest &other)
    : TranscribeRequest(new ListVocabulariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVocabulariesRequest object.
 */
ListVocabulariesRequest::ListVocabulariesRequest()
    : TranscribeRequest(new ListVocabulariesRequestPrivate(TranscribeRequest::ListVocabulariesAction, this))
{

}

/*!
 * \reimp
 */
bool ListVocabulariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVocabulariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVocabulariesRequest::response(QNetworkReply * const reply) const
{
    return new ListVocabulariesResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::ListVocabulariesRequestPrivate
 * \brief The ListVocabulariesRequestPrivate class provides private implementation for ListVocabulariesRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListVocabulariesRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
ListVocabulariesRequestPrivate::ListVocabulariesRequestPrivate(
    const TranscribeRequest::Action action, ListVocabulariesRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVocabulariesRequest
 * class' copy constructor.
 */
ListVocabulariesRequestPrivate::ListVocabulariesRequestPrivate(
    const ListVocabulariesRequestPrivate &other, ListVocabulariesRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
