// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainsforpackageresponse.h"
#include "listdomainsforpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::ListDomainsForPackageResponse
 * \brief The ListDomainsForPackageResponse class provides an interace for Elasticsearch ListDomainsForPackage responses.
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
 * Constructs a ListDomainsForPackageResponse object for \a reply to \a request, with parent \a parent.
 */
ListDomainsForPackageResponse::ListDomainsForPackageResponse(
        const ListDomainsForPackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new ListDomainsForPackageResponsePrivate(this), parent)
{
    setRequest(new ListDomainsForPackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDomainsForPackageRequest * ListDomainsForPackageResponse::request() const
{
    Q_D(const ListDomainsForPackageResponse);
    return static_cast<const ListDomainsForPackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch ListDomainsForPackage \a response.
 */
void ListDomainsForPackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDomainsForPackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::ListDomainsForPackageResponsePrivate
 * \brief The ListDomainsForPackageResponsePrivate class provides private implementation for ListDomainsForPackageResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a ListDomainsForPackageResponsePrivate object with public implementation \a q.
 */
ListDomainsForPackageResponsePrivate::ListDomainsForPackageResponsePrivate(
    ListDomainsForPackageResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch ListDomainsForPackage response element from \a xml.
 */
void ListDomainsForPackageResponsePrivate::parseListDomainsForPackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainsForPackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
