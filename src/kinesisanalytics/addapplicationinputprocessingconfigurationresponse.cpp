/*
    Copyright 2013-2020 Paul Colby

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

#include "addapplicationinputprocessingconfigurationresponse.h"
#include "addapplicationinputprocessingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputProcessingConfigurationResponse
 * \brief The AddApplicationInputProcessingConfigurationResponse class provides an interace for KinesisAnalytics AddApplicationInputProcessingConfiguration responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *  <fullname>Amazon Kinesis Analytics</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p <note>
 * 
 *  This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 *  Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 *  href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 * 
 *  Documentation</a>> </note>
 * 
 *  This is the <i>Amazon Kinesis Analytics v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
 *  additional information.
 *
 * \sa KinesisAnalyticsClient::addApplicationInputProcessingConfiguration
 */

/*!
 * Constructs a AddApplicationInputProcessingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationInputProcessingConfigurationResponse::AddApplicationInputProcessingConfigurationResponse(
        const AddApplicationInputProcessingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationInputProcessingConfigurationResponsePrivate(this), parent)
{
    setRequest(new AddApplicationInputProcessingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationInputProcessingConfigurationRequest * AddApplicationInputProcessingConfigurationResponse::request() const
{
    Q_D(const AddApplicationInputProcessingConfigurationResponse);
    return static_cast<const AddApplicationInputProcessingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalytics AddApplicationInputProcessingConfiguration \a response.
 */
void AddApplicationInputProcessingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationInputProcessingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputProcessingConfigurationResponsePrivate
 * \brief The AddApplicationInputProcessingConfigurationResponsePrivate class provides private implementation for AddApplicationInputProcessingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationInputProcessingConfigurationResponsePrivate object with public implementation \a q.
 */
AddApplicationInputProcessingConfigurationResponsePrivate::AddApplicationInputProcessingConfigurationResponsePrivate(
    AddApplicationInputProcessingConfigurationResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics AddApplicationInputProcessingConfiguration response element from \a xml.
 */
void AddApplicationInputProcessingConfigurationResponsePrivate::parseAddApplicationInputProcessingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationInputProcessingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
