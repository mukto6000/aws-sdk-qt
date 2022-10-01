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

#include "getattributegrouprequest.h"
#include "getattributegrouprequest_p.h"
#include "getattributegroupresponse.h"
#include "servicecatalogappregistryrequest_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAttributeGroupRequest
 * \brief The GetAttributeGroupRequest class provides an interface for ServiceCatalogAppRegistry GetAttributeGroup requests.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::getAttributeGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetAttributeGroupRequest::GetAttributeGroupRequest(const GetAttributeGroupRequest &other)
    : ServiceCatalogAppRegistryRequest(new GetAttributeGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAttributeGroupRequest object.
 */
GetAttributeGroupRequest::GetAttributeGroupRequest()
    : ServiceCatalogAppRegistryRequest(new GetAttributeGroupRequestPrivate(ServiceCatalogAppRegistryRequest::GetAttributeGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetAttributeGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAttributeGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAttributeGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetAttributeGroupResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::GetAttributeGroupRequestPrivate
 * \brief The GetAttributeGroupRequestPrivate class provides private implementation for GetAttributeGroupRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a GetAttributeGroupRequestPrivate object for ServiceCatalogAppRegistry \a action,
 * with public implementation \a q.
 */
GetAttributeGroupRequestPrivate::GetAttributeGroupRequestPrivate(
    const ServiceCatalogAppRegistryRequest::Action action, GetAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAttributeGroupRequest
 * class' copy constructor.
 */
GetAttributeGroupRequestPrivate::GetAttributeGroupRequestPrivate(
    const GetAttributeGroupRequestPrivate &other, GetAttributeGroupRequest * const q)
    : ServiceCatalogAppRegistryRequestPrivate(other, q)
{

}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
