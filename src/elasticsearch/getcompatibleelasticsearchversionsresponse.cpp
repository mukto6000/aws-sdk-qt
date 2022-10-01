// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcompatibleelasticsearchversionsresponse.h"
#include "getcompatibleelasticsearchversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::GetCompatibleElasticsearchVersionsResponse
 * \brief The GetCompatibleElasticsearchVersionsResponse class provides an interace for Elasticsearch GetCompatibleElasticsearchVersions responses.
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
 * \sa ElasticsearchClient::getCompatibleElasticsearchVersions
 */

/*!
 * Constructs a GetCompatibleElasticsearchVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCompatibleElasticsearchVersionsResponse::GetCompatibleElasticsearchVersionsResponse(
        const GetCompatibleElasticsearchVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new GetCompatibleElasticsearchVersionsResponsePrivate(this), parent)
{
    setRequest(new GetCompatibleElasticsearchVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCompatibleElasticsearchVersionsRequest * GetCompatibleElasticsearchVersionsResponse::request() const
{
    Q_D(const GetCompatibleElasticsearchVersionsResponse);
    return static_cast<const GetCompatibleElasticsearchVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch GetCompatibleElasticsearchVersions \a response.
 */
void GetCompatibleElasticsearchVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCompatibleElasticsearchVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::GetCompatibleElasticsearchVersionsResponsePrivate
 * \brief The GetCompatibleElasticsearchVersionsResponsePrivate class provides private implementation for GetCompatibleElasticsearchVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a GetCompatibleElasticsearchVersionsResponsePrivate object with public implementation \a q.
 */
GetCompatibleElasticsearchVersionsResponsePrivate::GetCompatibleElasticsearchVersionsResponsePrivate(
    GetCompatibleElasticsearchVersionsResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch GetCompatibleElasticsearchVersions response element from \a xml.
 */
void GetCompatibleElasticsearchVersionsResponsePrivate::parseGetCompatibleElasticsearchVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCompatibleElasticsearchVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
