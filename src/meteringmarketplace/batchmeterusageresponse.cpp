/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchmeterusageresponse.h"
#include "batchmeterusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::BatchMeterUsageResponse
 *
 * \brief The BatchMeterUsageResponse class encapsulates MarketplaceMetering BatchMeterUsage responses.
 *
 * \ingroup MarketplaceMetering
 *
 *  <fullname>AWS Marketplace Metering Service</fullname>
 * 
 *  This reference provides descriptions of the low-level AWS Marketplace Metering Service
 * 
 *  API>
 * 
 *  AWS Marketplace sellers can use this API to submit usage data for custom usage
 * 
 *  dimensions>
 * 
 *  <b>Submitting Metering Records</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>MeterUsage</i>- Submits the metering record for a Marketplace product. MeterUsage is called from an EC2
 * 
 *  instance> </li> <li>
 * 
 *  <i>BatchMeterUsage</i>- Submits the metering record for a set of customers. BatchMeterUsage is called from a
 *  software-as-a-service (SaaS)
 * 
 *  application> </li> </ul>
 * 
 *  <b>Accepting New Customers</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>ResolveCustomer</i>- Called by a SaaS application during the registration process. When a buyer visits your website
 *  during the registration process, the buyer submits a Registration Token through the browser. The Registration Token is
 *  resolved through this API to obtain a CustomerIdentifier and Product
 *
 * \sa MarketplaceMeteringClient::batchMeterUsage
 */

/*!
 * @brief  Constructs a new BatchMeterUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchMeterUsageResponse::BatchMeterUsageResponse(
        const BatchMeterUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceMeteringResponse(new BatchMeterUsageResponsePrivate(this), parent)
{
    setRequest(new BatchMeterUsageRequest(request));
    setReply(reply);
}

const BatchMeterUsageRequest * BatchMeterUsageResponse::request() const
{
    Q_D(const BatchMeterUsageResponse);
    return static_cast<const BatchMeterUsageRequest *>(d->request);
}

/*!
 * @brief  Parse a MarketplaceMetering BatchMeterUsage response.
 *
 * @param  response  Response to parse.
 */
void BatchMeterUsageResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchMeterUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class BatchMeterUsageResponsePrivate
 *
 * \brief Private implementation for BatchMeterUsageResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new BatchMeterUsageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchMeterUsageResponse instance.
 */
BatchMeterUsageResponsePrivate::BatchMeterUsageResponsePrivate(
    BatchMeterUsageResponse * const q) : MarketplaceMeteringResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MarketplaceMetering BatchMeterUsageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchMeterUsageResponsePrivate::parseBatchMeterUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchMeterUsageResponse"));
    /// @todo
}

} // namespace MarketplaceMetering
} // namespace QtAws
