// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteelasticsearchserviceroleresponse.h"
#include "deleteelasticsearchserviceroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::DeleteElasticsearchServiceRoleResponse
 * \brief The DeleteElasticsearchServiceRoleResponse class provides an interace for Elasticsearch DeleteElasticsearchServiceRole responses.
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
 * \sa ElasticsearchClient::deleteElasticsearchServiceRole
 */

/*!
 * Constructs a DeleteElasticsearchServiceRoleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteElasticsearchServiceRoleResponse::DeleteElasticsearchServiceRoleResponse(
        const DeleteElasticsearchServiceRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new DeleteElasticsearchServiceRoleResponsePrivate(this), parent)
{
    setRequest(new DeleteElasticsearchServiceRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteElasticsearchServiceRoleRequest * DeleteElasticsearchServiceRoleResponse::request() const
{
    Q_D(const DeleteElasticsearchServiceRoleResponse);
    return static_cast<const DeleteElasticsearchServiceRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch DeleteElasticsearchServiceRole \a response.
 */
void DeleteElasticsearchServiceRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteElasticsearchServiceRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::DeleteElasticsearchServiceRoleResponsePrivate
 * \brief The DeleteElasticsearchServiceRoleResponsePrivate class provides private implementation for DeleteElasticsearchServiceRoleResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a DeleteElasticsearchServiceRoleResponsePrivate object with public implementation \a q.
 */
DeleteElasticsearchServiceRoleResponsePrivate::DeleteElasticsearchServiceRoleResponsePrivate(
    DeleteElasticsearchServiceRoleResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch DeleteElasticsearchServiceRole response element from \a xml.
 */
void DeleteElasticsearchServiceRoleResponsePrivate::parseDeleteElasticsearchServiceRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteElasticsearchServiceRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
