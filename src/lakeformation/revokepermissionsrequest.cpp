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

#include "revokepermissionsrequest.h"
#include "revokepermissionsrequest_p.h"
#include "revokepermissionsresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::RevokePermissionsRequest
 * \brief The RevokePermissionsRequest class provides an interface for LakeFormation RevokePermissions requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>AWS Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the AWS Lake Formation
 *
 * \sa LakeFormationClient::revokePermissions
 */

/*!
 * Constructs a copy of \a other.
 */
RevokePermissionsRequest::RevokePermissionsRequest(const RevokePermissionsRequest &other)
    : LakeFormationRequest(new RevokePermissionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RevokePermissionsRequest object.
 */
RevokePermissionsRequest::RevokePermissionsRequest()
    : LakeFormationRequest(new RevokePermissionsRequestPrivate(LakeFormationRequest::RevokePermissionsAction, this))
{

}

/*!
 * \reimp
 */
bool RevokePermissionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RevokePermissionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new RevokePermissionsResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::RevokePermissionsRequestPrivate
 * \brief The RevokePermissionsRequestPrivate class provides private implementation for RevokePermissionsRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a RevokePermissionsRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
RevokePermissionsRequestPrivate::RevokePermissionsRequestPrivate(
    const LakeFormationRequest::Action action, RevokePermissionsRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RevokePermissionsRequest
 * class' copy constructor.
 */
RevokePermissionsRequestPrivate::RevokePermissionsRequestPrivate(
    const RevokePermissionsRequestPrivate &other, RevokePermissionsRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
