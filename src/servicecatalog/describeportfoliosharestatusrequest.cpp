// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeportfoliosharestatusrequest.h"
#include "describeportfoliosharestatusrequest_p.h"
#include "describeportfoliosharestatusresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioShareStatusRequest
 * \brief The DescribePortfolioShareStatusRequest class provides an interface for ServiceCatalog DescribePortfolioShareStatus requests.
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
 * \sa ServiceCatalogClient::describePortfolioShareStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePortfolioShareStatusRequest::DescribePortfolioShareStatusRequest(const DescribePortfolioShareStatusRequest &other)
    : ServiceCatalogRequest(new DescribePortfolioShareStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePortfolioShareStatusRequest object.
 */
DescribePortfolioShareStatusRequest::DescribePortfolioShareStatusRequest()
    : ServiceCatalogRequest(new DescribePortfolioShareStatusRequestPrivate(ServiceCatalogRequest::DescribePortfolioShareStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePortfolioShareStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePortfolioShareStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePortfolioShareStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribePortfolioShareStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioShareStatusRequestPrivate
 * \brief The DescribePortfolioShareStatusRequestPrivate class provides private implementation for DescribePortfolioShareStatusRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribePortfolioShareStatusRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribePortfolioShareStatusRequestPrivate::DescribePortfolioShareStatusRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribePortfolioShareStatusRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePortfolioShareStatusRequest
 * class' copy constructor.
 */
DescribePortfolioShareStatusRequestPrivate::DescribePortfolioShareStatusRequestPrivate(
    const DescribePortfolioShareStatusRequestPrivate &other, DescribePortfolioShareStatusRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
