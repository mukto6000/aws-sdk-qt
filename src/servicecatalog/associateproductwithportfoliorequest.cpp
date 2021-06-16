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

#include "associateproductwithportfoliorequest.h"
#include "associateproductwithportfoliorequest_p.h"
#include "associateproductwithportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateProductWithPortfolioRequest
 * \brief The AssociateProductWithPortfolioRequest class provides an interface for ServiceCatalog AssociateProductWithPortfolio requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::associateProductWithPortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateProductWithPortfolioRequest::AssociateProductWithPortfolioRequest(const AssociateProductWithPortfolioRequest &other)
    : ServiceCatalogRequest(new AssociateProductWithPortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateProductWithPortfolioRequest object.
 */
AssociateProductWithPortfolioRequest::AssociateProductWithPortfolioRequest()
    : ServiceCatalogRequest(new AssociateProductWithPortfolioRequestPrivate(ServiceCatalogRequest::AssociateProductWithPortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateProductWithPortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateProductWithPortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateProductWithPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new AssociateProductWithPortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::AssociateProductWithPortfolioRequestPrivate
 * \brief The AssociateProductWithPortfolioRequestPrivate class provides private implementation for AssociateProductWithPortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociateProductWithPortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
AssociateProductWithPortfolioRequestPrivate::AssociateProductWithPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, AssociateProductWithPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateProductWithPortfolioRequest
 * class' copy constructor.
 */
AssociateProductWithPortfolioRequestPrivate::AssociateProductWithPortfolioRequestPrivate(
    const AssociateProductWithPortfolioRequestPrivate &other, AssociateProductWithPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
