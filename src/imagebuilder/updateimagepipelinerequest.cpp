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

#include "updateimagepipelinerequest.h"
#include "updateimagepipelinerequest_p.h"
#include "updateimagepipelineresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::UpdateImagePipelineRequest
 * \brief The UpdateImagePipelineRequest class provides an interface for imagebuilder UpdateImagePipeline requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::updateImagePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateImagePipelineRequest::UpdateImagePipelineRequest(const UpdateImagePipelineRequest &other)
    : imagebuilderRequest(new UpdateImagePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateImagePipelineRequest object.
 */
UpdateImagePipelineRequest::UpdateImagePipelineRequest()
    : imagebuilderRequest(new UpdateImagePipelineRequestPrivate(imagebuilderRequest::UpdateImagePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateImagePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateImagePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateImagePipelineRequest::response(QNetworkReply * const reply) const
{
    return new UpdateImagePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::UpdateImagePipelineRequestPrivate
 * \brief The UpdateImagePipelineRequestPrivate class provides private implementation for UpdateImagePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a UpdateImagePipelineRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
UpdateImagePipelineRequestPrivate::UpdateImagePipelineRequestPrivate(
    const imagebuilderRequest::Action action, UpdateImagePipelineRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateImagePipelineRequest
 * class' copy constructor.
 */
UpdateImagePipelineRequestPrivate::UpdateImagePipelineRequestPrivate(
    const UpdateImagePipelineRequestPrivate &other, UpdateImagePipelineRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
