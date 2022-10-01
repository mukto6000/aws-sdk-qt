// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpackagesfordomainresponse.h"
#include "listpackagesfordomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ListPackagesForDomainResponse
 * \brief The ListPackagesForDomainResponse class provides an interace for Elasticsearch ListPackagesForDomain responses.
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
 * \sa ElasticsearchClient::listPackagesForDomain
 */

/*!
 * Constructs a ListPackagesForDomainResponse object for \a reply to \a request, with parent \a parent.
 */
ListPackagesForDomainResponse::ListPackagesForDomainResponse(
        const ListPackagesForDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new ListPackagesForDomainResponsePrivate(this), parent)
{
    setRequest(new ListPackagesForDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPackagesForDomainRequest * ListPackagesForDomainResponse::request() const
{
    Q_D(const ListPackagesForDomainResponse);
    return static_cast<const ListPackagesForDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch ListPackagesForDomain \a response.
 */
void ListPackagesForDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPackagesForDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::ListPackagesForDomainResponsePrivate
 * \brief The ListPackagesForDomainResponsePrivate class provides private implementation for ListPackagesForDomainResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ListPackagesForDomainResponsePrivate object with public implementation \a q.
 */
ListPackagesForDomainResponsePrivate::ListPackagesForDomainResponsePrivate(
    ListPackagesForDomainResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch ListPackagesForDomain response element from \a xml.
 */
void ListPackagesForDomainResponsePrivate::parseListPackagesForDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPackagesForDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
