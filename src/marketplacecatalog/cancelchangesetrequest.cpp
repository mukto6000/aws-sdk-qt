// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelchangesetrequest.h"
#include "cancelchangesetrequest_p.h"
#include "cancelchangesetresponse.h"
#include "marketplacecatalogrequest_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::CancelChangeSetRequest
 * \brief The CancelChangeSetRequest class provides an interface for MarketplaceCatalog CancelChangeSet requests.
 *
 * \inmodule QtAwsMarketplaceCatalog
 *
 *  Catalog API actions allow you to manage your entities through list, describe, and update capabilities. An entity can be
 *  a product or an offer on AWS Marketplace.
 * 
 *  </p
 * 
 *  You can automate your entity update process by integrating the AWS Marketplace Catalog API with your AWS Marketplace
 *  product build or deployment pipelines. You can also create your own applications on top of the Catalog API to manage
 *  your products on AWS
 *
 * \sa MarketplaceCatalogClient::cancelChangeSet
 */

/*!
 * Constructs a copy of \a other.
 */
CancelChangeSetRequest::CancelChangeSetRequest(const CancelChangeSetRequest &other)
    : MarketplaceCatalogRequest(new CancelChangeSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelChangeSetRequest object.
 */
CancelChangeSetRequest::CancelChangeSetRequest()
    : MarketplaceCatalogRequest(new CancelChangeSetRequestPrivate(MarketplaceCatalogRequest::CancelChangeSetAction, this))
{

}

/*!
 * \reimp
 */
bool CancelChangeSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelChangeSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new CancelChangeSetResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceCatalog::CancelChangeSetRequestPrivate
 * \brief The CancelChangeSetRequestPrivate class provides private implementation for CancelChangeSetRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a CancelChangeSetRequestPrivate object for MarketplaceCatalog \a action,
 * with public implementation \a q.
 */
CancelChangeSetRequestPrivate::CancelChangeSetRequestPrivate(
    const MarketplaceCatalogRequest::Action action, CancelChangeSetRequest * const q)
    : MarketplaceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelChangeSetRequest
 * class' copy constructor.
 */
CancelChangeSetRequestPrivate::CancelChangeSetRequestPrivate(
    const CancelChangeSetRequestPrivate &other, CancelChangeSetRequest * const q)
    : MarketplaceCatalogRequestPrivate(other, q)
{

}

} // namespace MarketplaceCatalog
} // namespace QtAws
