// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepackageresponse.h"
#include "updatepackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Elasticsearch {

/*!
 * \class QtAws::Elasticsearch::UpdatePackageResponse
 * \brief The UpdatePackageResponse class provides an interace for Elasticsearch UpdatePackage responses.
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
 * \sa ElasticsearchClient::updatePackage
 */

/*!
 * Constructs a UpdatePackageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePackageResponse::UpdatePackageResponse(
        const UpdatePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchResponse(new UpdatePackageResponsePrivate(this), parent)
{
    setRequest(new UpdatePackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePackageRequest * UpdatePackageResponse::request() const
{
    Q_D(const UpdatePackageResponse);
    return static_cast<const UpdatePackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Elasticsearch UpdatePackage \a response.
 */
void UpdatePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Elasticsearch::UpdatePackageResponsePrivate
 * \brief The UpdatePackageResponsePrivate class provides private implementation for UpdatePackageResponse.
 * \internal
 *
 * \inmodule QtAwsElasticsearch
 */

/*!
 * Constructs a UpdatePackageResponsePrivate object with public implementation \a q.
 */
UpdatePackageResponsePrivate::UpdatePackageResponsePrivate(
    UpdatePackageResponse * const q) : ElasticsearchResponsePrivate(q)
{

}

/*!
 * Parses a Elasticsearch UpdatePackage response element from \a xml.
 */
void UpdatePackageResponsePrivate::parseUpdatePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Elasticsearch
} // namespace QtAws
