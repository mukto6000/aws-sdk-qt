// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "purchasereservedinstanceofferingrequest.h"
#include "purchasereservedinstanceofferingrequest_p.h"
#include "purchasereservedinstanceofferingresponse.h"
#include "opensearchrequest_p.h"

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::PurchaseReservedInstanceOfferingRequest
 * \brief The PurchaseReservedInstanceOfferingRequest class provides an interface for OpenSearch PurchaseReservedInstanceOffering requests.
 *
 * \inmodule QtAwsOpenSearch
 *
 *  <fullname>Amazon OpenSearch Configuration Service</fullname>
 * 
 *  Use the Amazon OpenSearch configuration API to create, configure, and manage Amazon OpenSearch Service
 * 
 *  domains>
 * 
 *  For sample code that uses the configuration API, see the <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/opensearch-configuration-samples.html">
 *  Amazon OpenSearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/request-signing.html"> sample code for
 *  sending signed HTTP requests to the OpenSearch APIs</a>.
 * 
 *  </p
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#service-regions" target="_blank">Regions and
 *  Endpoints</a>.
 *
 * \sa OpenSearchClient::purchaseReservedInstanceOffering
 */

/*!
 * Constructs a copy of \a other.
 */
PurchaseReservedInstanceOfferingRequest::PurchaseReservedInstanceOfferingRequest(const PurchaseReservedInstanceOfferingRequest &other)
    : OpenSearchRequest(new PurchaseReservedInstanceOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PurchaseReservedInstanceOfferingRequest object.
 */
PurchaseReservedInstanceOfferingRequest::PurchaseReservedInstanceOfferingRequest()
    : OpenSearchRequest(new PurchaseReservedInstanceOfferingRequestPrivate(OpenSearchRequest::PurchaseReservedInstanceOfferingAction, this))
{

}

/*!
 * \reimp
 */
bool PurchaseReservedInstanceOfferingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PurchaseReservedInstanceOfferingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PurchaseReservedInstanceOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseReservedInstanceOfferingResponse(*this, reply);
}

/*!
 * \class QtAws::OpenSearch::PurchaseReservedInstanceOfferingRequestPrivate
 * \brief The PurchaseReservedInstanceOfferingRequestPrivate class provides private implementation for PurchaseReservedInstanceOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a PurchaseReservedInstanceOfferingRequestPrivate object for OpenSearch \a action,
 * with public implementation \a q.
 */
PurchaseReservedInstanceOfferingRequestPrivate::PurchaseReservedInstanceOfferingRequestPrivate(
    const OpenSearchRequest::Action action, PurchaseReservedInstanceOfferingRequest * const q)
    : OpenSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PurchaseReservedInstanceOfferingRequest
 * class' copy constructor.
 */
PurchaseReservedInstanceOfferingRequestPrivate::PurchaseReservedInstanceOfferingRequestPrivate(
    const PurchaseReservedInstanceOfferingRequestPrivate &other, PurchaseReservedInstanceOfferingRequest * const q)
    : OpenSearchRequestPrivate(other, q)
{

}

} // namespace OpenSearch
} // namespace QtAws
