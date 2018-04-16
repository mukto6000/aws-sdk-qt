/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listprovisionedproductplansrequest.h"
#include "listprovisionedproductplansrequest_p.h"
#include "listprovisionedproductplansresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListProvisionedProductPlansRequest
 *
 * \brief The ListProvisionedProductPlansRequest class encapsulates ServiceCatalog ListProvisionedProductPlans requests.
 *
 * \ingroup ServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::listProvisionedProductPlans
 */

/*!
 * @brief  Constructs a new ListProvisionedProductPlansRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListProvisionedProductPlansRequest::ListProvisionedProductPlansRequest(const ListProvisionedProductPlansRequest &other)
    : ServiceCatalogRequest(new ListProvisionedProductPlansRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListProvisionedProductPlansRequest object.
 */
ListProvisionedProductPlansRequest::ListProvisionedProductPlansRequest()
    : ServiceCatalogRequest(new ListProvisionedProductPlansRequestPrivate(ServiceCatalogRequest::ListProvisionedProductPlansAction, this))
{

}

/*!
 * \reimp
 */
bool ListProvisionedProductPlansRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListProvisionedProductPlansResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListProvisionedProductPlansResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProvisionedProductPlansRequest::response(QNetworkReply * const reply) const
{
    return new ListProvisionedProductPlansResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListProvisionedProductPlansRequestPrivate
 *
 * @brief  Private implementation for ListProvisionedProductPlansRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListProvisionedProductPlansRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ListProvisionedProductPlansRequest instance.
 */
ListProvisionedProductPlansRequestPrivate::ListProvisionedProductPlansRequestPrivate(
    const ServiceCatalogRequest::Action action, ListProvisionedProductPlansRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListProvisionedProductPlansRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListProvisionedProductPlansRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListProvisionedProductPlansRequest instance.
 */
ListProvisionedProductPlansRequestPrivate::ListProvisionedProductPlansRequestPrivate(
    const ListProvisionedProductPlansRequestPrivate &other, ListProvisionedProductPlansRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
