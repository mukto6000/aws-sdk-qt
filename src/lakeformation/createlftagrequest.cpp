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

#include "createlftagrequest.h"
#include "createlftagrequest_p.h"
#include "createlftagresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::CreateLFTagRequest
 * \brief The CreateLFTagRequest class provides an interface for LakeFormation CreateLFTag requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::createLFTag
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLFTagRequest::CreateLFTagRequest(const CreateLFTagRequest &other)
    : LakeFormationRequest(new CreateLFTagRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLFTagRequest object.
 */
CreateLFTagRequest::CreateLFTagRequest()
    : LakeFormationRequest(new CreateLFTagRequestPrivate(LakeFormationRequest::CreateLFTagAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLFTagRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLFTagResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLFTagRequest::response(QNetworkReply * const reply) const
{
    return new CreateLFTagResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::CreateLFTagRequestPrivate
 * \brief The CreateLFTagRequestPrivate class provides private implementation for CreateLFTagRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a CreateLFTagRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
CreateLFTagRequestPrivate::CreateLFTagRequestPrivate(
    const LakeFormationRequest::Action action, CreateLFTagRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLFTagRequest
 * class' copy constructor.
 */
CreateLFTagRequestPrivate::CreateLFTagRequestPrivate(
    const CreateLFTagRequestPrivate &other, CreateLFTagRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
