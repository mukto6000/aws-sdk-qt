// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startpipelinereprocessingresponse.h"
#include "startpipelinereprocessingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::StartPipelineReprocessingResponse
 * \brief The StartPipelineReprocessingResponse class provides an interace for IoTAnalytics StartPipelineReprocessing responses.
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
 * \sa IoTAnalyticsClient::startPipelineReprocessing
 */

/*!
 * Constructs a StartPipelineReprocessingResponse object for \a reply to \a request, with parent \a parent.
 */
StartPipelineReprocessingResponse::StartPipelineReprocessingResponse(
        const StartPipelineReprocessingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTAnalyticsResponse(new StartPipelineReprocessingResponsePrivate(this), parent)
{
    setRequest(new StartPipelineReprocessingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartPipelineReprocessingRequest * StartPipelineReprocessingResponse::request() const
{
    Q_D(const StartPipelineReprocessingResponse);
    return static_cast<const StartPipelineReprocessingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTAnalytics StartPipelineReprocessing \a response.
 */
void StartPipelineReprocessingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartPipelineReprocessingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTAnalytics::StartPipelineReprocessingResponsePrivate
 * \brief The StartPipelineReprocessingResponsePrivate class provides private implementation for StartPipelineReprocessingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a StartPipelineReprocessingResponsePrivate object with public implementation \a q.
 */
StartPipelineReprocessingResponsePrivate::StartPipelineReprocessingResponsePrivate(
    StartPipelineReprocessingResponse * const q) : IoTAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a IoTAnalytics StartPipelineReprocessing response element from \a xml.
 */
void StartPipelineReprocessingResponsePrivate::parseStartPipelineReprocessingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartPipelineReprocessingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTAnalytics
} // namespace QtAws
