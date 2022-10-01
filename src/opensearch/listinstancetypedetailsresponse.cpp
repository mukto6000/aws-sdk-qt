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

#include "listinstancetypedetailsresponse.h"
#include "listinstancetypedetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::ListInstanceTypeDetailsResponse
 * \brief The ListInstanceTypeDetailsResponse class provides an interace for OpenSearch ListInstanceTypeDetails responses.
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
 * \sa OpenSearchClient::listInstanceTypeDetails
 */

/*!
 * Constructs a ListInstanceTypeDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstanceTypeDetailsResponse::ListInstanceTypeDetailsResponse(
        const ListInstanceTypeDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new ListInstanceTypeDetailsResponsePrivate(this), parent)
{
    setRequest(new ListInstanceTypeDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstanceTypeDetailsRequest * ListInstanceTypeDetailsResponse::request() const
{
    Q_D(const ListInstanceTypeDetailsResponse);
    return static_cast<const ListInstanceTypeDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch ListInstanceTypeDetails \a response.
 */
void ListInstanceTypeDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInstanceTypeDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::ListInstanceTypeDetailsResponsePrivate
 * \brief The ListInstanceTypeDetailsResponsePrivate class provides private implementation for ListInstanceTypeDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a ListInstanceTypeDetailsResponsePrivate object with public implementation \a q.
 */
ListInstanceTypeDetailsResponsePrivate::ListInstanceTypeDetailsResponsePrivate(
    ListInstanceTypeDetailsResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch ListInstanceTypeDetails response element from \a xml.
 */
void ListInstanceTypeDetailsResponsePrivate::parseListInstanceTypeDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstanceTypeDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
