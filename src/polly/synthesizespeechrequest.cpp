// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "synthesizespeechrequest.h"
#include "synthesizespeechrequest_p.h"
#include "synthesizespeechresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::SynthesizeSpeechRequest
 * \brief The SynthesizeSpeechRequest class provides an interface for Polly SynthesizeSpeech requests.
 *
 * \inmodule QtAwsPolly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::synthesizeSpeech
 */

/*!
 * Constructs a copy of \a other.
 */
SynthesizeSpeechRequest::SynthesizeSpeechRequest(const SynthesizeSpeechRequest &other)
    : PollyRequest(new SynthesizeSpeechRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SynthesizeSpeechRequest object.
 */
SynthesizeSpeechRequest::SynthesizeSpeechRequest()
    : PollyRequest(new SynthesizeSpeechRequestPrivate(PollyRequest::SynthesizeSpeechAction, this))
{

}

/*!
 * \reimp
 */
bool SynthesizeSpeechRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SynthesizeSpeechResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SynthesizeSpeechRequest::response(QNetworkReply * const reply) const
{
    return new SynthesizeSpeechResponse(*this, reply);
}

/*!
 * \class QtAws::Polly::SynthesizeSpeechRequestPrivate
 * \brief The SynthesizeSpeechRequestPrivate class provides private implementation for SynthesizeSpeechRequest.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a SynthesizeSpeechRequestPrivate object for Polly \a action,
 * with public implementation \a q.
 */
SynthesizeSpeechRequestPrivate::SynthesizeSpeechRequestPrivate(
    const PollyRequest::Action action, SynthesizeSpeechRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SynthesizeSpeechRequest
 * class' copy constructor.
 */
SynthesizeSpeechRequestPrivate::SynthesizeSpeechRequestPrivate(
    const SynthesizeSpeechRequestPrivate &other, SynthesizeSpeechRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
