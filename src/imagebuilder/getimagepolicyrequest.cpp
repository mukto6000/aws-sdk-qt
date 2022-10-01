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

#include "getimagepolicyrequest.h"
#include "getimagepolicyrequest_p.h"
#include "getimagepolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImagePolicyRequest
 * \brief The GetImagePolicyRequest class provides an interface for ImageBuilder GetImagePolicy requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImagePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetImagePolicyRequest::GetImagePolicyRequest(const GetImagePolicyRequest &other)
    : ImageBuilderRequest(new GetImagePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImagePolicyRequest object.
 */
GetImagePolicyRequest::GetImagePolicyRequest()
    : ImageBuilderRequest(new GetImagePolicyRequestPrivate(ImageBuilderRequest::GetImagePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetImagePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImagePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImagePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetImagePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetImagePolicyRequestPrivate
 * \brief The GetImagePolicyRequestPrivate class provides private implementation for GetImagePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImagePolicyRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetImagePolicyRequestPrivate::GetImagePolicyRequestPrivate(
    const ImageBuilderRequest::Action action, GetImagePolicyRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImagePolicyRequest
 * class' copy constructor.
 */
GetImagePolicyRequestPrivate::GetImagePolicyRequestPrivate(
    const GetImagePolicyRequestPrivate &other, GetImagePolicyRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
