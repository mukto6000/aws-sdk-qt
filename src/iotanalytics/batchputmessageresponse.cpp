// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchputmessageresponse.h"
#include "batchputmessageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::BatchPutMessageResponse
 * \brief The BatchPutMessageResponse class provides an interace for IoTAnalytics BatchPutMessage responses.
 *
 * \inmodule QtAwsIoTAnalytics
 *
 *  IoT Analytics allows you to collect large amounts of device data, process messages, and store them. You can then query
 *  the data and run sophisticated analytics on it. IoT Analytics enables advanced data exploration through integration with
 *  Jupyter Notebooks and data visualization through integration with Amazon
 * 
 *  QuickSight>
 * 
 *  Traditional analytics and business intelligence tools are designed to process structured data. IoT data often comes from
 *  devices that record noisy processes (such as temperature, motion, or sound). As a result the data from these devices can
 *  have significant gaps, corrupted messages, and false readings that must be cleaned up before analysis can occur. Also,
 *  IoT data is often only meaningful in the context of other data from external sources.
 * 
 *  </p
 * 
 *  IoT Analytics automates the steps required to analyze data from IoT devices. IoT Analytics filters, transforms, and
 *  enriches IoT data before storing it in a time-series data store for analysis. You can set up the service to collect only
 *  the data you need from your devices, apply mathematical transforms to process the data, and enrich the data with
 *  device-specific metadata such as device type and location before storing it. Then, you can analyze your data by running
 *  queries using the built-in SQL query engine, or perform more complex analytics and machine learning inference. IoT
 *  Analytics includes pre-built models for common IoT use cases so you can answer questions like which devices are about to
 *  fail or which customers are at risk of abandoning their wearable
 *
 * \sa IoTAnalyticsClient::batchPutMessage
 */

/*!
 * Constructs a BatchPutMessageResponse object for \a reply to \a request, with parent \a parent.
 */
BatchPutMessageResponse::BatchPutMessageResponse(
        const BatchPutMessageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTAnalyticsResponse(new BatchPutMessageResponsePrivate(this), parent)
{
    setRequest(new BatchPutMessageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchPutMessageRequest * BatchPutMessageResponse::request() const
{
    Q_D(const BatchPutMessageResponse);
    return static_cast<const BatchPutMessageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTAnalytics BatchPutMessage \a response.
 */
void BatchPutMessageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchPutMessageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTAnalytics::BatchPutMessageResponsePrivate
 * \brief The BatchPutMessageResponsePrivate class provides private implementation for BatchPutMessageResponse.
 * \internal
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a BatchPutMessageResponsePrivate object with public implementation \a q.
 */
BatchPutMessageResponsePrivate::BatchPutMessageResponsePrivate(
    BatchPutMessageResponse * const q) : IoTAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a IoTAnalytics BatchPutMessage response element from \a xml.
 */
void BatchPutMessageResponsePrivate::parseBatchPutMessageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchPutMessageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTAnalytics
} // namespace QtAws
