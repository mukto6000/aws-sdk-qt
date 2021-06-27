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

#include "describechangesetresponse.h"
#include "describechangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::DescribeChangeSetResponse
 * \brief The DescribeChangeSetResponse class provides an interace for MarketplaceCatalog DescribeChangeSet responses.
 *
 * \inmodule QtAwsMarketplaceCatalog
 *
 *  Catalog API actions allow you to manage your entities through list, describe, and update capabilities. An entity can be
 *  a product or an offer on AWS Marketplace.
 * 
 *  </p
 * 
 *  You can automate your entity update process by integrating the AWS Marketplace Catalog API with your AWS Marketplace
 *  product build or deployment pipelines. You can also create your own applications on top of the Catalog API to manage
 *  your products on AWS
 *
 * \sa MarketplaceCatalogClient::describeChangeSet
 */

/*!
 * Constructs a DescribeChangeSetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeChangeSetResponse::DescribeChangeSetResponse(
        const DescribeChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceCatalogResponse(new DescribeChangeSetResponsePrivate(this), parent)
{
    setRequest(new DescribeChangeSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeChangeSetRequest * DescribeChangeSetResponse::request() const
{
    return static_cast<const DescribeChangeSetRequest *>(MarketplaceCatalogResponse::request());
}

/*!
 * \reimp
 * Parses a successful MarketplaceCatalog DescribeChangeSet \a response.
 */
void DescribeChangeSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MarketplaceCatalog::DescribeChangeSetResponsePrivate
 * \brief The DescribeChangeSetResponsePrivate class provides private implementation for DescribeChangeSetResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a DescribeChangeSetResponsePrivate object with public implementation \a q.
 */
DescribeChangeSetResponsePrivate::DescribeChangeSetResponsePrivate(
    DescribeChangeSetResponse * const q) : MarketplaceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a MarketplaceCatalog DescribeChangeSet response element from \a xml.
 */
void DescribeChangeSetResponsePrivate::parseDescribeChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChangeSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MarketplaceCatalog
} // namespace QtAws
