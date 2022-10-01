// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteportfoliorequest.h"
#include "deleteportfoliorequest_p.h"
#include "deleteportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeletePortfolioRequest
 * \brief The DeletePortfolioRequest class provides an interface for ServiceCatalog DeletePortfolio requests.
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
 * \sa ServiceCatalogClient::deletePortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePortfolioRequest::DeletePortfolioRequest(const DeletePortfolioRequest &other)
    : ServiceCatalogRequest(new DeletePortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePortfolioRequest object.
 */
DeletePortfolioRequest::DeletePortfolioRequest()
    : ServiceCatalogRequest(new DeletePortfolioRequestPrivate(ServiceCatalogRequest::DeletePortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePortfolioRequest::response(QNetworkReply * const reply) const
{
    return new DeletePortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DeletePortfolioRequestPrivate
 * \brief The DeletePortfolioRequestPrivate class provides private implementation for DeletePortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeletePortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DeletePortfolioRequestPrivate::DeletePortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, DeletePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePortfolioRequest
 * class' copy constructor.
 */
DeletePortfolioRequestPrivate::DeletePortfolioRequestPrivate(
    const DeletePortfolioRequestPrivate &other, DeletePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
