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

#include "createcontainerreciperequest.h"
#include "createcontainerreciperequest_p.h"
#include "createcontainerreciperesponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::CreateContainerRecipeRequest
 * \brief The CreateContainerRecipeRequest class provides an interface for imagebuilder CreateContainerRecipe requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::createContainerRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
CreateContainerRecipeRequest::CreateContainerRecipeRequest(const CreateContainerRecipeRequest &other)
    : imagebuilderRequest(new CreateContainerRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateContainerRecipeRequest object.
 */
CreateContainerRecipeRequest::CreateContainerRecipeRequest()
    : imagebuilderRequest(new CreateContainerRecipeRequestPrivate(imagebuilderRequest::CreateContainerRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContainerRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateContainerRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContainerRecipeRequest::response(QNetworkReply * const reply) const
{
    return new CreateContainerRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::CreateContainerRecipeRequestPrivate
 * \brief The CreateContainerRecipeRequestPrivate class provides private implementation for CreateContainerRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a CreateContainerRecipeRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
CreateContainerRecipeRequestPrivate::CreateContainerRecipeRequestPrivate(
    const imagebuilderRequest::Action action, CreateContainerRecipeRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateContainerRecipeRequest
 * class' copy constructor.
 */
CreateContainerRecipeRequestPrivate::CreateContainerRecipeRequestPrivate(
    const CreateContainerRecipeRequestPrivate &other, CreateContainerRecipeRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
