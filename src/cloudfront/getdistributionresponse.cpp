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

#include "getdistributionresponse.h"
#include "getdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetDistributionResponse
 * \brief The GetDistributionResponse class provides an interace for CloudFront GetDistribution responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getDistribution
 */

/*!
 * Constructs a GetDistributionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDistributionResponse::GetDistributionResponse(
        const GetDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetDistributionResponsePrivate(this), parent)
{
    setRequest(new GetDistributionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDistributionRequest * GetDistributionResponse::request() const
{
    Q_D(const GetDistributionResponse);
    return static_cast<const GetDistributionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetDistribution \a response.
 */
void GetDistributionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetDistributionResponsePrivate
 * \brief The GetDistributionResponsePrivate class provides private implementation for GetDistributionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetDistributionResponsePrivate object with public implementation \a q.
 */
GetDistributionResponsePrivate::GetDistributionResponsePrivate(
    GetDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetDistribution response element from \a xml.
 */
void GetDistributionResponsePrivate::parseGetDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDistributionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
