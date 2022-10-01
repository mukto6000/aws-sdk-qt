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

#include "stopdatasourcesyncjobresponse.h"
#include "stopdatasourcesyncjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::StopDataSourceSyncJobResponse
 * \brief The StopDataSourceSyncJobResponse class provides an interace for Kendra StopDataSourceSyncJob responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::stopDataSourceSyncJob
 */

/*!
 * Constructs a StopDataSourceSyncJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopDataSourceSyncJobResponse::StopDataSourceSyncJobResponse(
        const StopDataSourceSyncJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new StopDataSourceSyncJobResponsePrivate(this), parent)
{
    setRequest(new StopDataSourceSyncJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopDataSourceSyncJobRequest * StopDataSourceSyncJobResponse::request() const
{
    Q_D(const StopDataSourceSyncJobResponse);
    return static_cast<const StopDataSourceSyncJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra StopDataSourceSyncJob \a response.
 */
void StopDataSourceSyncJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopDataSourceSyncJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::StopDataSourceSyncJobResponsePrivate
 * \brief The StopDataSourceSyncJobResponsePrivate class provides private implementation for StopDataSourceSyncJobResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a StopDataSourceSyncJobResponsePrivate object with public implementation \a q.
 */
StopDataSourceSyncJobResponsePrivate::StopDataSourceSyncJobResponsePrivate(
    StopDataSourceSyncJobResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra StopDataSourceSyncJob response element from \a xml.
 */
void StopDataSourceSyncJobResponsePrivate::parseStopDataSourceSyncJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDataSourceSyncJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
