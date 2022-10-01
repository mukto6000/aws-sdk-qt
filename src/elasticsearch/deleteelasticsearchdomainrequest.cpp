// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteelasticsearchdomainrequest.h"
#include "deleteelasticsearchdomainrequest_p.h"
#include "deleteelasticsearchdomainresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DeleteElasticsearchDomainRequest
 * \brief The DeleteElasticsearchDomainRequest class provides an interface for Elasticsearch DeleteElasticsearchDomain requests.
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
 * \sa ElasticsearchClient::deleteElasticsearchDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteElasticsearchDomainRequest::DeleteElasticsearchDomainRequest(const DeleteElasticsearchDomainRequest &other)
    : ElasticsearchRequest(new DeleteElasticsearchDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteElasticsearchDomainRequest object.
 */
DeleteElasticsearchDomainRequest::DeleteElasticsearchDomainRequest()
    : ElasticsearchRequest(new DeleteElasticsearchDomainRequestPrivate(ElasticsearchRequest::DeleteElasticsearchDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteElasticsearchDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteElasticsearchDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteElasticsearchDomainRequest::response(QNetworkReply * const reply) const
{
    return new DeleteElasticsearchDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::DeleteElasticsearchDomainRequestPrivate
 * \brief The DeleteElasticsearchDomainRequestPrivate class provides private implementation for DeleteElasticsearchDomainRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DeleteElasticsearchDomainRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
DeleteElasticsearchDomainRequestPrivate::DeleteElasticsearchDomainRequestPrivate(
    const ElasticsearchRequest::Action action, DeleteElasticsearchDomainRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteElasticsearchDomainRequest
 * class' copy constructor.
 */
DeleteElasticsearchDomainRequestPrivate::DeleteElasticsearchDomainRequestPrivate(
    const DeleteElasticsearchDomainRequestPrivate &other, DeleteElasticsearchDomainRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
