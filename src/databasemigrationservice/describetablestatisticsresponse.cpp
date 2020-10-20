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

#include "describetablestatisticsresponse.h"
#include "describetablestatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeTableStatisticsResponse
 * \brief The DescribeTableStatisticsResponse class provides an interace for DatabaseMigrationService DescribeTableStatistics responses.
 *
 * \inmodule QtAwsDatabaseMigrationService
 *
 *  <fullname>AWS Database Migration Service</fullname>
 * 
 *  AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 *  open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL,
 *  and SAP Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well
 *  as heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about AWS DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  AWS Database Migration Service?</a> in the <i>AWS Database Migration User Guide.</i>
 *
 * \sa DatabaseMigrationServiceClient::describeTableStatistics
 */

/*!
 * Constructs a DescribeTableStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTableStatisticsResponse::DescribeTableStatisticsResponse(
        const DescribeTableStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeTableStatisticsResponsePrivate(this), parent)
{
    setRequest(new DescribeTableStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTableStatisticsRequest * DescribeTableStatisticsResponse::request() const
{
    Q_D(const DescribeTableStatisticsResponse);
    return static_cast<const DescribeTableStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService DescribeTableStatistics \a response.
 */
void DescribeTableStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTableStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeTableStatisticsResponsePrivate
 * \brief The DescribeTableStatisticsResponsePrivate class provides private implementation for DescribeTableStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeTableStatisticsResponsePrivate object with public implementation \a q.
 */
DescribeTableStatisticsResponsePrivate::DescribeTableStatisticsResponsePrivate(
    DescribeTableStatisticsResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DescribeTableStatistics response element from \a xml.
 */
void DescribeTableStatisticsResponsePrivate::parseDescribeTableStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTableStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
