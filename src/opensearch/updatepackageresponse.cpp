// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepackageresponse.h"
#include "updatepackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::UpdatePackageResponse
 * \brief The UpdatePackageResponse class provides an interace for OpenSearch UpdatePackage responses.
 *
 * \inmodule QtAwsOpenSearch
 *
 *  <fullname>Amazon OpenSearch Configuration Service</fullname>
 * 
 *  Use the Amazon OpenSearch configuration API to create, configure, and manage Amazon OpenSearch Service
 * 
 *  domains>
 * 
 *  For sample code that uses the configuration API, see the <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/opensearch-configuration-samples.html">
 *  Amazon OpenSearch Service Developer Guide</a>. The guide also contains <a
 *  href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/request-signing.html"> sample code for
 *  sending signed HTTP requests to the OpenSearch APIs</a>.
 * 
 *  </p
 * 
 *  The endpoint for configuration service requests is region-specific: es.<i>region</i>.amazonaws.com. For example,
 *  es.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#service-regions" target="_blank">Regions and
 *  Endpoints</a>.
 *
 * \sa OpenSearchClient::updatePackage
 */

/*!
 * Constructs a UpdatePackageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePackageResponse::UpdatePackageResponse(
        const UpdatePackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new UpdatePackageResponsePrivate(this), parent)
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
 * Parses a successful OpenSearch UpdatePackage \a response.
 */
void UpdatePackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::UpdatePackageResponsePrivate
 * \brief The UpdatePackageResponsePrivate class provides private implementation for UpdatePackageResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a UpdatePackageResponsePrivate object with public implementation \a q.
 */
UpdatePackageResponsePrivate::UpdatePackageResponsePrivate(
    UpdatePackageResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch UpdatePackage response element from \a xml.
 */
void UpdatePackageResponsePrivate::parseUpdatePackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
