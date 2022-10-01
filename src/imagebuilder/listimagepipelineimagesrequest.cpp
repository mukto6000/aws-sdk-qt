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

#include "listimagepipelineimagesrequest.h"
#include "listimagepipelineimagesrequest_p.h"
#include "listimagepipelineimagesresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListImagePipelineImagesRequest
 * \brief The ListImagePipelineImagesRequest class provides an interface for ImageBuilder ListImagePipelineImages requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listImagePipelineImages
 */

/*!
 * Constructs a copy of \a other.
 */
ListImagePipelineImagesRequest::ListImagePipelineImagesRequest(const ListImagePipelineImagesRequest &other)
    : ImageBuilderRequest(new ListImagePipelineImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImagePipelineImagesRequest object.
 */
ListImagePipelineImagesRequest::ListImagePipelineImagesRequest()
    : ImageBuilderRequest(new ListImagePipelineImagesRequestPrivate(ImageBuilderRequest::ListImagePipelineImagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListImagePipelineImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImagePipelineImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImagePipelineImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListImagePipelineImagesResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListImagePipelineImagesRequestPrivate
 * \brief The ListImagePipelineImagesRequestPrivate class provides private implementation for ListImagePipelineImagesRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListImagePipelineImagesRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListImagePipelineImagesRequestPrivate::ListImagePipelineImagesRequestPrivate(
    const ImageBuilderRequest::Action action, ListImagePipelineImagesRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImagePipelineImagesRequest
 * class' copy constructor.
 */
ListImagePipelineImagesRequestPrivate::ListImagePipelineImagesRequestPrivate(
    const ListImagePipelineImagesRequestPrivate &other, ListImagePipelineImagesRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
