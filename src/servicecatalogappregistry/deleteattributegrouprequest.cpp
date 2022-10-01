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

#include "deleteattributegrouprequest.h"
#include "deleteattributegrouprequest_p.h"
#include "deleteattributegroupresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DeleteAttributeGroupRequest
 * \brief The DeleteAttributeGroupRequest class provides an interface for ServiceCatalogAppRegistry DeleteAttributeGroup requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::deleteAttributeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAttributeGroupRequest::DeleteAttributeGroupRequest(const DeleteAttributeGroupRequest &other)
    : ServiceCatalogAppRegistryRequest(new DeleteAttributeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAttributeGroupRequest object.
 */
DeleteAttributeGroupRequest::DeleteAttributeGroupRequest()
    : ServiceCatalogAppRegistryRequest(new DeleteAttributeGroupRequestPrivate(ServiceCatalogAppRegistryRequest::DeleteAttributeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAttributeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAttributeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAttributeGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAttributeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::DeleteAttributeGroupRequestPrivate
 * \brief The DeleteAttributeGroupRequestPrivate class provides private implementation for DeleteAttributeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a DeleteAttributeGroupRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
DeleteAttributeGroupRequestPrivate::DeleteAttributeGroupRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, DeleteAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAttributeGroupRequest
 * class' copy constructor.
 */
DeleteAttributeGroupRequestPrivate::DeleteAttributeGroupRequestPrivate(
    const DeleteAttributeGroupRequestPrivate &other, DeleteAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
