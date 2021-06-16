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

#include "updatescalingparametersresponse.h"
#include "updatescalingparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/*!
 * \class QtAws::CloudSearch::UpdateScalingParametersResponse
 * \brief The UpdateScalingParametersResponse class provides an interace for CloudSearch UpdateScalingParameters responses.
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
 * \sa CloudSearchClient::updateScalingParameters
 */

/*!
 * Constructs a UpdateScalingParametersResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateScalingParametersResponse::UpdateScalingParametersResponse(
        const UpdateScalingParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new UpdateScalingParametersResponsePrivate(this), parent)
{
    setRequest(new UpdateScalingParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateScalingParametersRequest * UpdateScalingParametersResponse::request() const
{
    Q_D(const UpdateScalingParametersResponse);
    return static_cast<const UpdateScalingParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudSearch UpdateScalingParameters \a response.
 */
void UpdateScalingParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateScalingParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudSearch::UpdateScalingParametersResponsePrivate
 * \brief The UpdateScalingParametersResponsePrivate class provides private implementation for UpdateScalingParametersResponse.
 * \internal
 *
 * \inmodule QtAwsCloudSearch
 */

/*!
 * Constructs a UpdateScalingParametersResponsePrivate object with public implementation \a q.
 */
UpdateScalingParametersResponsePrivate::UpdateScalingParametersResponsePrivate(
    UpdateScalingParametersResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/*!
 * Parses a CloudSearch UpdateScalingParameters response element from \a xml.
 */
void UpdateScalingParametersResponsePrivate::parseUpdateScalingParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateScalingParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudSearch
} // namespace QtAws
