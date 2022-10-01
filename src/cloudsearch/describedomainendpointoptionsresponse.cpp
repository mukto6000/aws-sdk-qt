// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainendpointoptionsresponse.h"
#include "describedomainendpointoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeDomainEndpointOptionsResponse
 * \brief The DescribeDomainEndpointOptionsResponse class provides an interace for CloudSearch DescribeDomainEndpointOptions responses.
 *
 * \inmodule QtAwsCloudSearch
 *
 *  <fullname>Amazon CloudSearch Configuration Service</fullname>
 * 
 *  You use the Amazon CloudSearch configuration service to create, configure, and manage search domains. Configuration
 *  service requests are submitted using the AWS Query protocol. AWS Query requests are HTTP or HTTPS requests submitted via
 *  HTTP GET or POST with a query parameter named
 * 
 *  Action>
 * 
 *  The endpoint for configuration service requests is region-specific: cloudsearch.<i>region</i>.amazonaws.com. For
 *  example, cloudsearch.us-east-1.amazonaws.com. For a current list of supported regions and endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#cloudsearch_region" target="_blank">Regions and
 *
 * \sa CloudSearchClient::describeDomainEndpointOptions
 */

/*!
 * Constructs a DescribeDomainEndpointOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDomainEndpointOptionsResponse::DescribeDomainEndpointOptionsResponse(
        const DescribeDomainEndpointOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeDomainEndpointOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeDomainEndpointOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDomainEndpointOptionsRequest * DescribeDomainEndpointOptionsResponse::request() const
{
    Q_D(const DescribeDomainEndpointOptionsResponse);
    return static_cast<const DescribeDomainEndpointOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DescribeDomainEndpointOptions \a response.
 */
void DescribeDomainEndpointOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDomainEndpointOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DescribeDomainEndpointOptionsResponsePrivate
 * \brief The DescribeDomainEndpointOptionsResponsePrivate class provides private implementation for DescribeDomainEndpointOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeDomainEndpointOptionsResponsePrivate object with public implementation \a q.
 */
DescribeDomainEndpointOptionsResponsePrivate::DescribeDomainEndpointOptionsResponsePrivate(
    DescribeDomainEndpointOptionsResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DescribeDomainEndpointOptions response element from \a xml.
 */
void DescribeDomainEndpointOptionsResponsePrivate::parseDescribeDomainEndpointOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainEndpointOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
