// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetresponse.h"
#include "createdatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::CreateDatasetResponse
 * \brief The CreateDatasetResponse class provides an interace for IoTAnalytics CreateDataset responses.
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
 * \sa IoTAnalyticsClient::createDataset
 */

/*!
 * Constructs a CreateDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDatasetResponse::CreateDatasetResponse(
        const CreateDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTAnalyticsResponse(new CreateDatasetResponsePrivate(this), parent)
{
    setRequest(new CreateDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDatasetRequest * CreateDatasetResponse::request() const
{
    Q_D(const CreateDatasetResponse);
    return static_cast<const CreateDatasetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTAnalytics CreateDataset \a response.
 */
void CreateDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTAnalytics::CreateDatasetResponsePrivate
 * \brief The CreateDatasetResponsePrivate class provides private implementation for CreateDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a CreateDatasetResponsePrivate object with public implementation \a q.
 */
CreateDatasetResponsePrivate::CreateDatasetResponsePrivate(
    CreateDatasetResponse * const q) : IoTAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a IoTAnalytics CreateDataset response element from \a xml.
 */
void CreateDatasetResponsePrivate::parseCreateDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTAnalytics
} // namespace QtAws
