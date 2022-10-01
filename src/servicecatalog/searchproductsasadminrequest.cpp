// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchproductsasadminrequest.h"
#include "searchproductsasadminrequest_p.h"
#include "searchproductsasadminresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::SearchProductsAsAdminRequest
 * \brief The SearchProductsAsAdminRequest class provides an interface for ServiceCatalog SearchProductsAsAdmin requests.
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
 * \sa ServiceCatalogClient::searchProductsAsAdmin
 */

/*!
 * Constructs a copy of \a other.
 */
SearchProductsAsAdminRequest::SearchProductsAsAdminRequest(const SearchProductsAsAdminRequest &other)
    : ServiceCatalogRequest(new SearchProductsAsAdminRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchProductsAsAdminRequest object.
 */
SearchProductsAsAdminRequest::SearchProductsAsAdminRequest()
    : ServiceCatalogRequest(new SearchProductsAsAdminRequestPrivate(ServiceCatalogRequest::SearchProductsAsAdminAction, this))
{

}

/*!
 * \reimp
 */
bool SearchProductsAsAdminRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchProductsAsAdminResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchProductsAsAdminRequest::response(QNetworkReply * const reply) const
{
    return new SearchProductsAsAdminResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::SearchProductsAsAdminRequestPrivate
 * \brief The SearchProductsAsAdminRequestPrivate class provides private implementation for SearchProductsAsAdminRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a SearchProductsAsAdminRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
SearchProductsAsAdminRequestPrivate::SearchProductsAsAdminRequestPrivate(
    const ServiceCatalogRequest::Action action, SearchProductsAsAdminRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchProductsAsAdminRequest
 * class' copy constructor.
 */
SearchProductsAsAdminRequestPrivate::SearchProductsAsAdminRequestPrivate(
    const SearchProductsAsAdminRequestPrivate &other, SearchProductsAsAdminRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
