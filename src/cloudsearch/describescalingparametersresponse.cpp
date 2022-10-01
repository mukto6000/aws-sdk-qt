// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describescalingparametersresponse.h"
#include "describescalingparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::DescribeScalingParametersResponse
 * \brief The DescribeScalingParametersResponse class provides an interace for CloudSearch DescribeScalingParameters responses.
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
 * \sa CloudSearchClient::describeScalingParameters
 */

/*!
 * Constructs a DescribeScalingParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeScalingParametersResponse::DescribeScalingParametersResponse(
        const DescribeScalingParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeScalingParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeScalingParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScalingParametersRequest * DescribeScalingParametersResponse::request() const
{
    Q_D(const DescribeScalingParametersResponse);
    return static_cast<const DescribeScalingParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch DescribeScalingParameters \a response.
 */
void DescribeScalingParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeScalingParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::DescribeScalingParametersResponsePrivate
 * \brief The DescribeScalingParametersResponsePrivate class provides private implementation for DescribeScalingParametersResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a DescribeScalingParametersResponsePrivate object with public implementation \a q.
 */
DescribeScalingParametersResponsePrivate::DescribeScalingParametersResponsePrivate(
    DescribeScalingParametersResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch DescribeScalingParameters response element from \a xml.
 */
void DescribeScalingParametersResponsePrivate::parseDescribeScalingParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
