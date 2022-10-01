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

#include "listvocabularyfiltersrequest.h"
#include "listvocabularyfiltersrequest_p.h"
#include "listvocabularyfiltersresponse.h"
#include "transcriberequest_p.h"

namespace QtAws {
namespace Transcribe {

/*!
 * \class QtAws::Transcribe::ListVocabularyFiltersRequest
 * \brief The ListVocabularyFiltersRequest class provides an interface for Transcribe ListVocabularyFilters requests.
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
 * \sa TranscribeClient::listVocabularyFilters
 */

/*!
 * Constructs a copy of \a other.
 */
ListVocabularyFiltersRequest::ListVocabularyFiltersRequest(const ListVocabularyFiltersRequest &other)
    : TranscribeRequest(new ListVocabularyFiltersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVocabularyFiltersRequest object.
 */
ListVocabularyFiltersRequest::ListVocabularyFiltersRequest()
    : TranscribeRequest(new ListVocabularyFiltersRequestPrivate(TranscribeRequest::ListVocabularyFiltersAction, this))
{

}

/*!
 * \reimp
 */
bool ListVocabularyFiltersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVocabularyFiltersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVocabularyFiltersRequest::response(QNetworkReply * const reply) const
{
    return new ListVocabularyFiltersResponse(*this, reply);
}

/*!
 * \class QtAws::Transcribe::ListVocabularyFiltersRequestPrivate
 * \brief The ListVocabularyFiltersRequestPrivate class provides private implementation for ListVocabularyFiltersRequest.
 * \internal
 *
 * \inmodule QtAwsTranscribe
 */

/*!
 * Constructs a ListVocabularyFiltersRequestPrivate object for Transcribe \a action,
 * with public implementation \a q.
 */
ListVocabularyFiltersRequestPrivate::ListVocabularyFiltersRequestPrivate(
    const TranscribeRequest::Action action, ListVocabularyFiltersRequest * const q)
    : TranscribeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVocabularyFiltersRequest
 * class' copy constructor.
 */
ListVocabularyFiltersRequestPrivate::ListVocabularyFiltersRequestPrivate(
    const ListVocabularyFiltersRequestPrivate &other, ListVocabularyFiltersRequest * const q)
    : TranscribeRequestPrivate(other, q)
{

}

} // namespace Transcribe
} // namespace QtAws
