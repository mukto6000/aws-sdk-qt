// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteelasticsearchdomainresponse.h"
#include "deleteelasticsearchdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DeleteElasticsearchDomainResponse
 * \brief The DeleteElasticsearchDomainResponse class provides an interace for Elasticsearch DeleteElasticsearchDomain responses.
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
 * Constructs a DeleteElasticsearchDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteElasticsearchDomainResponse::DeleteElasticsearchDomainResponse(
        const DeleteElasticsearchDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DeleteElasticsearchDomainResponsePrivate(this), parent)
{
    setRequest(new DeleteElasticsearchDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteElasticsearchDomainRequest * DeleteElasticsearchDomainResponse::request() const
{
    Q_D(const DeleteElasticsearchDomainResponse);
    return static_cast<const DeleteElasticsearchDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DeleteElasticsearchDomain \a response.
 */
void DeleteElasticsearchDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteElasticsearchDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DeleteElasticsearchDomainResponsePrivate
 * \brief The DeleteElasticsearchDomainResponsePrivate class provides private implementation for DeleteElasticsearchDomainResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DeleteElasticsearchDomainResponsePrivate object with public implementation \a q.
 */
DeleteElasticsearchDomainResponsePrivate::DeleteElasticsearchDomainResponsePrivate(
    DeleteElasticsearchDomainResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DeleteElasticsearchDomain response element from \a xml.
 */
void DeleteElasticsearchDomainResponsePrivate::parseDeleteElasticsearchDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteElasticsearchDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
