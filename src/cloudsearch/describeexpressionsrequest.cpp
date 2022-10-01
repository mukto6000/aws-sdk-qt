// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexpressionsrequest.h"
#include "describeexpressionsrequest_p.h"
#include "describeexpressionsresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeExpressionsRequest
 * \brief The DescribeExpressionsRequest class provides an interface for CloudSearch DescribeExpressions requests.
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
 * \sa CloudSearchClient::describeExpressions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeExpressionsRequest::DescribeExpressionsRequest(const DescribeExpressionsRequest &other)
    : CloudSearchRequest(new DescribeExpressionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeExpressionsRequest object.
 */
DescribeExpressionsRequest::DescribeExpressionsRequest()
    : CloudSearchRequest(new DescribeExpressionsRequestPrivate(CloudSearchRequest::DescribeExpressionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExpressionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeExpressionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExpressionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExpressionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudSearch::DescribeExpressionsRequestPrivate
 * \brief The DescribeExpressionsRequestPrivate class provides private implementation for DescribeExpressionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeExpressionsRequestPrivate object for CloudSearch \a action,
 * with public implementation \a q.
 */
DescribeExpressionsRequestPrivate::DescribeExpressionsRequestPrivate(
    const CloudSearchRequest::Action action, DescribeExpressionsRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeExpressionsRequest
 * class' copy constructor.
 */
DescribeExpressionsRequestPrivate::DescribeExpressionsRequestPrivate(
    const DescribeExpressionsRequestPrivate &other, DescribeExpressionsRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
