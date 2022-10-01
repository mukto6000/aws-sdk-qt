// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeelasticsearchdomainconfigrequest.h"
#include "describeelasticsearchdomainconfigrequest_p.h"
#include "describeelasticsearchdomainconfigresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainConfigRequest
 * \brief The DescribeElasticsearchDomainConfigRequest class provides an interface for Elasticsearch DescribeElasticsearchDomainConfig requests.
 *
 * \inmodule QtAwsElasticsearch
 *
 *  <fullname>Amazon Elasticsearch Configuration Service</fullname>
 * 
 *  Use the Amazon Elasticsearch Configuration API to create, configure, and manage Elasticsearch
 * 
 *  domains>
 * 
 *  For sample code that uses the Configuration API, see the <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-configuration-samples.html">Amazon
 *  Elasticsearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-request-signing.html">sample code for
 *  sending signed HTTP requests to the Elasticsearch
 * 
 *  APIs</a>>
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticsearch-service-regions" target="_blank">Regions and
 *
 * \sa ElasticsearchClient::describeElasticsearchDomainConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeElasticsearchDomainConfigRequest::DescribeElasticsearchDomainConfigRequest(const DescribeElasticsearchDomainConfigRequest &other)
    : ElasticsearchRequest(new DescribeElasticsearchDomainConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeElasticsearchDomainConfigRequest object.
 */
DescribeElasticsearchDomainConfigRequest::DescribeElasticsearchDomainConfigRequest()
    : ElasticsearchRequest(new DescribeElasticsearchDomainConfigRequestPrivate(ElasticsearchRequest::DescribeElasticsearchDomainConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeElasticsearchDomainConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeElasticsearchDomainConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeElasticsearchDomainConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeElasticsearchDomainConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DescribeElasticsearchDomainConfigRequestPrivate
 * \brief The DescribeElasticsearchDomainConfigRequestPrivate class provides private implementation for DescribeElasticsearchDomainConfigRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DescribeElasticsearchDomainConfigRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DescribeElasticsearchDomainConfigRequestPrivate::DescribeElasticsearchDomainConfigRequestPrivate(
    const ElasticsearchRequest::Action action, DescribeElasticsearchDomainConfigRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeElasticsearchDomainConfigRequest
 * class' copy constructor.
 */
DescribeElasticsearchDomainConfigRequestPrivate::DescribeElasticsearchDomainConfigRequestPrivate(
    const DescribeElasticsearchDomainConfigRequestPrivate &other, DescribeElasticsearchDomainConfigRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
