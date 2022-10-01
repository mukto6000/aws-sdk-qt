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

#include "getcontainerrecipepolicyrequest.h"
#include "getcontainerrecipepolicyrequest_p.h"
#include "getcontainerrecipepolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetContainerRecipePolicyRequest
 * \brief The GetContainerRecipePolicyRequest class provides an interface for ImageBuilder GetContainerRecipePolicy requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getContainerRecipePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetContainerRecipePolicyRequest::GetContainerRecipePolicyRequest(const GetContainerRecipePolicyRequest &other)
    : ImageBuilderRequest(new GetContainerRecipePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContainerRecipePolicyRequest object.
 */
GetContainerRecipePolicyRequest::GetContainerRecipePolicyRequest()
    : ImageBuilderRequest(new GetContainerRecipePolicyRequestPrivate(ImageBuilderRequest::GetContainerRecipePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetContainerRecipePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContainerRecipePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContainerRecipePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetContainerRecipePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetContainerRecipePolicyRequestPrivate
 * \brief The GetContainerRecipePolicyRequestPrivate class provides private implementation for GetContainerRecipePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetContainerRecipePolicyRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetContainerRecipePolicyRequestPrivate::GetContainerRecipePolicyRequestPrivate(
    const ImageBuilderRequest::Action action, GetContainerRecipePolicyRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContainerRecipePolicyRequest
 * class' copy constructor.
 */
GetContainerRecipePolicyRequestPrivate::GetContainerRecipePolicyRequestPrivate(
    const GetContainerRecipePolicyRequestPrivate &other, GetContainerRecipePolicyRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
