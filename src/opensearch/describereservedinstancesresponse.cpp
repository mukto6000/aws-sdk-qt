// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereservedinstancesresponse.h"
#include "describereservedinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpenSearch {

/*!
 * \class QtAws::OpenSearch::DescribeReservedInstancesResponse
 * \brief The DescribeReservedInstancesResponse class provides an interace for OpenSearch DescribeReservedInstances responses.
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
 * \sa OpenSearchClient::describeReservedInstances
 */

/*!
 * Constructs a DescribeReservedInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservedInstancesResponse::DescribeReservedInstancesResponse(
        const DescribeReservedInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpenSearchResponse(new DescribeReservedInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReservedInstancesRequest * DescribeReservedInstancesResponse::request() const
{
    Q_D(const DescribeReservedInstancesResponse);
    return static_cast<const DescribeReservedInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpenSearch DescribeReservedInstances \a response.
 */
void DescribeReservedInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReservedInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpenSearch::DescribeReservedInstancesResponsePrivate
 * \brief The DescribeReservedInstancesResponsePrivate class provides private implementation for DescribeReservedInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsOpenSearch
 */

/*!
 * Constructs a DescribeReservedInstancesResponsePrivate object with public implementation \a q.
 */
DescribeReservedInstancesResponsePrivate::DescribeReservedInstancesResponsePrivate(
    DescribeReservedInstancesResponse * const q) : OpenSearchResponsePrivate(q)
{

}

/*!
 * Parses a OpenSearch DescribeReservedInstances response element from \a xml.
 */
void DescribeReservedInstancesResponsePrivate::parseDescribeReservedInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpenSearch
} // namespace QtAws
