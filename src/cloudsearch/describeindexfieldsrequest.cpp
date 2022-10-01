// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeindexfieldsrequest.h"
#include "describeindexfieldsrequest_p.h"
#include "describeindexfieldsresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeIndexFieldsRequest
 * \brief The DescribeIndexFieldsRequest class provides an interface for CloudSearch DescribeIndexFields requests.
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
 * \sa CloudSearchClient::describeIndexFields
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeIndexFieldsRequest::DescribeIndexFieldsRequest(const DescribeIndexFieldsRequest &other)
    : CloudSearchRequest(new DescribeIndexFieldsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeIndexFieldsRequest object.
 */
DescribeIndexFieldsRequest::DescribeIndexFieldsRequest()
    : CloudSearchRequest(new DescribeIndexFieldsRequestPrivate(CloudSearchRequest::DescribeIndexFieldsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeIndexFieldsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeIndexFieldsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeIndexFieldsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIndexFieldsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DescribeIndexFieldsRequestPrivate
 * \brief The DescribeIndexFieldsRequestPrivate class provides private implementation for DescribeIndexFieldsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeIndexFieldsRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DescribeIndexFieldsRequestPrivate::DescribeIndexFieldsRequestPrivate(
    const CloudSearchRequest::Action action, DescribeIndexFieldsRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeIndexFieldsRequest
 * class' copy constructor.
 */
DescribeIndexFieldsRequestPrivate::DescribeIndexFieldsRequestPrivate(
    const DescribeIndexFieldsRequestPrivate &other, DescribeIndexFieldsRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
