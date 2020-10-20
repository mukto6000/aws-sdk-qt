/*
    Copyright 2013-2020 Paul Colby

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

#include "createstreamprocessorrequest.h"
#include "createstreamprocessorrequest_p.h"
#include "createstreamprocessorresponse.h"
#include "rekognitionrequest_p.h"

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::CreateStreamProcessorRequest
 * \brief The CreateStreamProcessorRequest class provides an interface for Rekognition CreateStreamProcessor requests.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::createStreamProcessor
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStreamProcessorRequest::CreateStreamProcessorRequest(const CreateStreamProcessorRequest &other)
    : RekognitionRequest(new CreateStreamProcessorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStreamProcessorRequest object.
 */
CreateStreamProcessorRequest::CreateStreamProcessorRequest()
    : RekognitionRequest(new CreateStreamProcessorRequestPrivate(RekognitionRequest::CreateStreamProcessorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStreamProcessorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStreamProcessorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStreamProcessorRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamProcessorResponse(*this, reply);
}

/*!
 * \class QtAws::Rekognition::CreateStreamProcessorRequestPrivate
 * \brief The CreateStreamProcessorRequestPrivate class provides private implementation for CreateStreamProcessorRequest.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a CreateStreamProcessorRequestPrivate object for Rekognition \a action,
 * with public implementation \a q.
 */
CreateStreamProcessorRequestPrivate::CreateStreamProcessorRequestPrivate(
    const RekognitionRequest::Action action, CreateStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamProcessorRequest
 * class' copy constructor.
 */
CreateStreamProcessorRequestPrivate::CreateStreamProcessorRequestPrivate(
    const CreateStreamProcessorRequestPrivate &other, CreateStreamProcessorRequest * const q)
    : RekognitionRequestPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace QtAws
