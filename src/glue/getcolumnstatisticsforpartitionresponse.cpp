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

#include "getcolumnstatisticsforpartitionresponse.h"
#include "getcolumnstatisticsforpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetColumnStatisticsForPartitionResponse
 * \brief The GetColumnStatisticsForPartitionResponse class provides an interace for Glue GetColumnStatisticsForPartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getColumnStatisticsForPartition
 */

/*!
 * Constructs a GetColumnStatisticsForPartitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetColumnStatisticsForPartitionResponse::GetColumnStatisticsForPartitionResponse(
        const GetColumnStatisticsForPartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetColumnStatisticsForPartitionResponsePrivate(this), parent)
{
    setRequest(new GetColumnStatisticsForPartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetColumnStatisticsForPartitionRequest * GetColumnStatisticsForPartitionResponse::request() const
{
    Q_D(const GetColumnStatisticsForPartitionResponse);
    return static_cast<const GetColumnStatisticsForPartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetColumnStatisticsForPartition \a response.
 */
void GetColumnStatisticsForPartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetColumnStatisticsForPartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetColumnStatisticsForPartitionResponsePrivate
 * \brief The GetColumnStatisticsForPartitionResponsePrivate class provides private implementation for GetColumnStatisticsForPartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetColumnStatisticsForPartitionResponsePrivate object with public implementation \a q.
 */
GetColumnStatisticsForPartitionResponsePrivate::GetColumnStatisticsForPartitionResponsePrivate(
    GetColumnStatisticsForPartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetColumnStatisticsForPartition response element from \a xml.
 */
void GetColumnStatisticsForPartitionResponsePrivate::parseGetColumnStatisticsForPartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetColumnStatisticsForPartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
