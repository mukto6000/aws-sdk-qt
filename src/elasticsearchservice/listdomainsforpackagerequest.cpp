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

#include "listdomainsforpackagerequest.h"
#include "listdomainsforpackagerequest_p.h"
#include "listdomainsforpackageresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ListDomainsForPackageRequest
 * \brief The ListDomainsForPackageRequest class provides an interface for Elasticsearch ListDomainsForPackage requests.
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
 * \sa ElasticsearchClient::listDomainsForPackage
 */

/*!
 * Constructs a copy of \a other.
 */
ListDomainsForPackageRequest::ListDomainsForPackageRequest(const ListDomainsForPackageRequest &other)
    : ElasticsearchRequest(new ListDomainsForPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDomainsForPackageRequest object.
 */
ListDomainsForPackageRequest::ListDomainsForPackageRequest()
    : ElasticsearchRequest(new ListDomainsForPackageRequestPrivate(ElasticsearchRequest::ListDomainsForPackageAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainsForPackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDomainsForPackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainsForPackageRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainsForPackageResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::ListDomainsForPackageRequestPrivate
 * \brief The ListDomainsForPackageRequestPrivate class provides private implementation for ListDomainsForPackageRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ListDomainsForPackageRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
ListDomainsForPackageRequestPrivate::ListDomainsForPackageRequestPrivate(
    const ElasticsearchRequest::Action action, ListDomainsForPackageRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDomainsForPackageRequest
 * class' copy constructor.
 */
ListDomainsForPackageRequestPrivate::ListDomainsForPackageRequestPrivate(
    const ListDomainsForPackageRequestPrivate &other, ListDomainsForPackageRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
