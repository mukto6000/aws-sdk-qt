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

#include "createimagepipelinerequest.h"
#include "createimagepipelinerequest_p.h"
#include "createimagepipelineresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::CreateImagePipelineRequest
 * \brief The CreateImagePipelineRequest class provides an interface for imagebuilder CreateImagePipeline requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::createImagePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImagePipelineRequest::CreateImagePipelineRequest(const CreateImagePipelineRequest &other)
    : imagebuilderRequest(new CreateImagePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImagePipelineRequest object.
 */
CreateImagePipelineRequest::CreateImagePipelineRequest()
    : imagebuilderRequest(new CreateImagePipelineRequestPrivate(imagebuilderRequest::CreateImagePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImagePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImagePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImagePipelineRequest::response(QNetworkReply * const reply) const
{
    return new CreateImagePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::CreateImagePipelineRequestPrivate
 * \brief The CreateImagePipelineRequestPrivate class provides private implementation for CreateImagePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a CreateImagePipelineRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
CreateImagePipelineRequestPrivate::CreateImagePipelineRequestPrivate(
    const imagebuilderRequest::Action action, CreateImagePipelineRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImagePipelineRequest
 * class' copy constructor.
 */
CreateImagePipelineRequestPrivate::CreateImagePipelineRequestPrivate(
    const CreateImagePipelineRequestPrivate &other, CreateImagePipelineRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
