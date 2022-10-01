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

#include "createcomponentrequest.h"
#include "createcomponentrequest_p.h"
#include "createcomponentresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateComponentRequest
 * \brief The CreateComponentRequest class provides an interface for ImageBuilder CreateComponent requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createComponent
 */

/*!
 * Constructs a copy of \a other.
 */
CreateComponentRequest::CreateComponentRequest(const CreateComponentRequest &other)
    : ImageBuilderRequest(new CreateComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateComponentRequest object.
 */
CreateComponentRequest::CreateComponentRequest()
    : ImageBuilderRequest(new CreateComponentRequestPrivate(ImageBuilderRequest::CreateComponentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateComponentRequest::response(QNetworkReply * const reply) const
{
    return new CreateComponentResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::CreateComponentRequestPrivate
 * \brief The CreateComponentRequestPrivate class provides private implementation for CreateComponentRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateComponentRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
CreateComponentRequestPrivate::CreateComponentRequestPrivate(
    const ImageBuilderRequest::Action action, CreateComponentRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateComponentRequest
 * class' copy constructor.
 */
CreateComponentRequestPrivate::CreateComponentRequestPrivate(
    const CreateComponentRequestPrivate &other, CreateComponentRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
