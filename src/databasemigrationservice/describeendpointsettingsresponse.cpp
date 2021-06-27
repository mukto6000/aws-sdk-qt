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

#include "describeendpointsettingsresponse.h"
#include "describeendpointsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::DescribeEndpointSettingsResponse
 * \brief The DescribeEndpointSettingsResponse class provides an interace for DatabaseMigrationService DescribeEndpointSettings responses.
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
 * \sa DatabaseMigrationServiceClient::describeEndpointSettings
 */

/*!
 * Constructs a DescribeEndpointSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEndpointSettingsResponse::DescribeEndpointSettingsResponse(
        const DescribeEndpointSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeEndpointSettingsResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEndpointSettingsRequest * DescribeEndpointSettingsResponse::request() const
{
    return static_cast<const DescribeEndpointSettingsRequest *>(DatabaseMigrationServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService DescribeEndpointSettings \a response.
 */
void DescribeEndpointSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEndpointSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::DescribeEndpointSettingsResponsePrivate
 * \brief The DescribeEndpointSettingsResponsePrivate class provides private implementation for DescribeEndpointSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a DescribeEndpointSettingsResponsePrivate object with public implementation \a q.
 */
DescribeEndpointSettingsResponsePrivate::DescribeEndpointSettingsResponsePrivate(
    DescribeEndpointSettingsResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService DescribeEndpointSettings response element from \a xml.
 */
void DescribeEndpointSettingsResponsePrivate::parseDescribeEndpointSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
