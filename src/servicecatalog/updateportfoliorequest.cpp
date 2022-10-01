// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateportfoliorequest.h"
#include "updateportfoliorequest_p.h"
#include "updateportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdatePortfolioRequest
 * \brief The UpdatePortfolioRequest class provides an interface for ServiceCatalog UpdatePortfolio requests.
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
 * \sa ServiceCatalogClient::updatePortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePortfolioRequest::UpdatePortfolioRequest(const UpdatePortfolioRequest &other)
    : ServiceCatalogRequest(new UpdatePortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePortfolioRequest object.
 */
UpdatePortfolioRequest::UpdatePortfolioRequest()
    : ServiceCatalogRequest(new UpdatePortfolioRequestPrivate(ServiceCatalogRequest::UpdatePortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePortfolioRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::UpdatePortfolioRequestPrivate
 * \brief The UpdatePortfolioRequestPrivate class provides private implementation for UpdatePortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdatePortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
UpdatePortfolioRequestPrivate::UpdatePortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdatePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePortfolioRequest
 * class' copy constructor.
 */
UpdatePortfolioRequestPrivate::UpdatePortfolioRequestPrivate(
    const UpdatePortfolioRequestPrivate &other, UpdatePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
