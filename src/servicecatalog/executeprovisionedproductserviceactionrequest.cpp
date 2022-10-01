// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "executeprovisionedproductserviceactionrequest.h"
#include "executeprovisionedproductserviceactionrequest_p.h"
#include "executeprovisionedproductserviceactionresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ExecuteProvisionedProductServiceActionRequest
 * \brief The ExecuteProvisionedProductServiceActionRequest class provides an interface for ServiceCatalog ExecuteProvisionedProductServiceAction requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
 *
 * \sa ServiceCatalogClient::executeProvisionedProductServiceAction
 */

/*!
 * Constructs a copy of \a other.
 */
ExecuteProvisionedProductServiceActionRequest::ExecuteProvisionedProductServiceActionRequest(const ExecuteProvisionedProductServiceActionRequest &other)
    : ServiceCatalogRequest(new ExecuteProvisionedProductServiceActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExecuteProvisionedProductServiceActionRequest object.
 */
ExecuteProvisionedProductServiceActionRequest::ExecuteProvisionedProductServiceActionRequest()
    : ServiceCatalogRequest(new ExecuteProvisionedProductServiceActionRequestPrivate(ServiceCatalogRequest::ExecuteProvisionedProductServiceActionAction, this))
{

}

/*!
 * \reimp
 */
bool ExecuteProvisionedProductServiceActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExecuteProvisionedProductServiceActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExecuteProvisionedProductServiceActionRequest::response(QNetworkReply * const reply) const
{
    return new ExecuteProvisionedProductServiceActionResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ExecuteProvisionedProductServiceActionRequestPrivate
 * \brief The ExecuteProvisionedProductServiceActionRequestPrivate class provides private implementation for ExecuteProvisionedProductServiceActionRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ExecuteProvisionedProductServiceActionRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ExecuteProvisionedProductServiceActionRequestPrivate::ExecuteProvisionedProductServiceActionRequestPrivate(
    const ServiceCatalogRequest::Action action, ExecuteProvisionedProductServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExecuteProvisionedProductServiceActionRequest
 * class' copy constructor.
 */
ExecuteProvisionedProductServiceActionRequestPrivate::ExecuteProvisionedProductServiceActionRequestPrivate(
    const ExecuteProvisionedProductServiceActionRequestPrivate &other, ExecuteProvisionedProductServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
