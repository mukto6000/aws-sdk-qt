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

#include "deleteapplicationinputprocessingconfigurationresponse.h"
#include "deleteapplicationinputprocessingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationInputProcessingConfigurationResponse
 * \brief The DeleteApplicationInputProcessingConfigurationResponse class provides an interace for KinesisAnalyticsV2 DeleteApplicationInputProcessingConfiguration responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  SQL or Java. The service enables you to quickly author and run SQL or Java code against streaming sources to perform
 *  time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationInputProcessingConfiguration
 */

/*!
 * Constructs a DeleteApplicationInputProcessingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationInputProcessingConfigurationResponse::DeleteApplicationInputProcessingConfigurationResponse(
        const DeleteApplicationInputProcessingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new DeleteApplicationInputProcessingConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationInputProcessingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationInputProcessingConfigurationRequest * DeleteApplicationInputProcessingConfigurationResponse::request() const
{
    Q_D(const DeleteApplicationInputProcessingConfigurationResponse);
    return static_cast<const DeleteApplicationInputProcessingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 DeleteApplicationInputProcessingConfiguration \a response.
 */
void DeleteApplicationInputProcessingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationInputProcessingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationInputProcessingConfigurationResponsePrivate
 * \brief The DeleteApplicationInputProcessingConfigurationResponsePrivate class provides private implementation for DeleteApplicationInputProcessingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationInputProcessingConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteApplicationInputProcessingConfigurationResponsePrivate::DeleteApplicationInputProcessingConfigurationResponsePrivate(
    DeleteApplicationInputProcessingConfigurationResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 DeleteApplicationInputProcessingConfiguration response element from \a xml.
 */
void DeleteApplicationInputProcessingConfigurationResponsePrivate::parseDeleteApplicationInputProcessingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationInputProcessingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
