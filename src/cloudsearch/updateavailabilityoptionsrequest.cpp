// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateavailabilityoptionsrequest.h"
#include "updateavailabilityoptionsrequest_p.h"
#include "updateavailabilityoptionsresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::UpdateAvailabilityOptionsRequest
 * \brief The UpdateAvailabilityOptionsRequest class provides an interface for CloudSearch UpdateAvailabilityOptions requests.
 *
 * \inmodule QtAwsCloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::updateAvailabilityOptions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAvailabilityOptionsRequest::UpdateAvailabilityOptionsRequest(const UpdateAvailabilityOptionsRequest &other)
    : CloudSearchRequest(new UpdateAvailabilityOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAvailabilityOptionsRequest object.
 */
UpdateAvailabilityOptionsRequest::UpdateAvailabilityOptionsRequest()
    : CloudSearchRequest(new UpdateAvailabilityOptionsRequestPrivate(CloudSearchRequest::UpdateAvailabilityOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAvailabilityOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAvailabilityOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAvailabilityOptionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAvailabilityOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::UpdateAvailabilityOptionsRequestPrivate
 * \brief The UpdateAvailabilityOptionsRequestPrivate class provides private implementation for UpdateAvailabilityOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a UpdateAvailabilityOptionsRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
UpdateAvailabilityOptionsRequestPrivate::UpdateAvailabilityOptionsRequestPrivate(
    const CloudSearchRequest::Action action, UpdateAvailabilityOptionsRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAvailabilityOptionsRequest
 * class' copy constructor.
 */
UpdateAvailabilityOptionsRequestPrivate::UpdateAvailabilityOptionsRequestPrivate(
    const UpdateAvailabilityOptionsRequestPrivate &other, UpdateAvailabilityOptionsRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
