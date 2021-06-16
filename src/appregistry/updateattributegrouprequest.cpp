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

#include "updateattributegrouprequest.h"
#include "updateattributegrouprequest_p.h"
#include "updateattributegroupresponse.h"
#include "appregistryrequest_p.h"

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::UpdateAttributeGroupRequest
 * \brief The UpdateAttributeGroupRequest class provides an interface for AppRegistry UpdateAttributeGroup requests.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::updateAttributeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAttributeGroupRequest::UpdateAttributeGroupRequest(const UpdateAttributeGroupRequest &other)
    : AppRegistryRequest(new UpdateAttributeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAttributeGroupRequest object.
 */
UpdateAttributeGroupRequest::UpdateAttributeGroupRequest()
    : AppRegistryRequest(new UpdateAttributeGroupRequestPrivate(AppRegistryRequest::UpdateAttributeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAttributeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAttributeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAttributeGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAttributeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AppRegistry::UpdateAttributeGroupRequestPrivate
 * \brief The UpdateAttributeGroupRequestPrivate class provides private implementation for UpdateAttributeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a UpdateAttributeGroupRequestPrivate object for AppRegistry \a action,
 * with public implementation \a q.
 */
UpdateAttributeGroupRequestPrivate::UpdateAttributeGroupRequestPrivate(
    const AppRegistryRequest::Action action, UpdateAttributeGroupRequest * const q)
    : AppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAttributeGroupRequest
 * class' copy constructor.
 */
UpdateAttributeGroupRequestPrivate::UpdateAttributeGroupRequestPrivate(
    const UpdateAttributeGroupRequestPrivate &other, UpdateAttributeGroupRequest * const q)
    : AppRegistryRequestPrivate(other, q)
{

}

} // namespace AppRegistry
} // namespace QtAws
