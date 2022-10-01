// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getupgradestatusrequest.h"
#include "getupgradestatusrequest_p.h"
#include "getupgradestatusresponse.h"
#include "elasticsearchrequest_p.h"

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::GetUpgradeStatusRequest
 * \brief The GetUpgradeStatusRequest class provides an interface for Elasticsearch GetUpgradeStatus requests.
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
 * \sa ElasticsearchClient::getUpgradeStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetUpgradeStatusRequest::GetUpgradeStatusRequest(const GetUpgradeStatusRequest &other)
    : ElasticsearchRequest(new GetUpgradeStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUpgradeStatusRequest object.
 */
GetUpgradeStatusRequest::GetUpgradeStatusRequest()
    : ElasticsearchRequest(new GetUpgradeStatusRequestPrivate(ElasticsearchRequest::GetUpgradeStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetUpgradeStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUpgradeStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUpgradeStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetUpgradeStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Elasticsearch::GetUpgradeStatusRequestPrivate
 * \brief The GetUpgradeStatusRequestPrivate class provides private implementation for GetUpgradeStatusRequest.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a GetUpgradeStatusRequestPrivate object for Elasticsearch \a action,
 * with public implementation \a q.
 */
GetUpgradeStatusRequestPrivate::GetUpgradeStatusRequestPrivate(
    const ElasticsearchRequest::Action action, GetUpgradeStatusRequest * const q)
    : ElasticsearchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUpgradeStatusRequest
 * class' copy constructor.
 */
GetUpgradeStatusRequestPrivate::GetUpgradeStatusRequestPrivate(
    const GetUpgradeStatusRequestPrivate &other, GetUpgradeStatusRequest * const q)
    : ElasticsearchRequestPrivate(other, q)
{

}

} // namespace Elasticsearch
} // namespace QtAws
