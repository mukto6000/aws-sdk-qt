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

#include "applypendingmaintenanceactionresponse.h"
#include "applypendingmaintenanceactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/*!
 * \class QtAws::DatabaseMigrationService::ApplyPendingMaintenanceActionResponse
 * \brief The ApplyPendingMaintenanceActionResponse class provides an interace for DatabaseMigrationService ApplyPendingMaintenanceAction responses.
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
 * \sa DatabaseMigrationServiceClient::applyPendingMaintenanceAction
 */

/*!
 * Constructs a ApplyPendingMaintenanceActionResponse object for \a reply to \a request, with parent \a parent.
 */
ApplyPendingMaintenanceActionResponse::ApplyPendingMaintenanceActionResponse(
        const ApplyPendingMaintenanceActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new ApplyPendingMaintenanceActionResponsePrivate(this), parent)
{
    setRequest(new ApplyPendingMaintenanceActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ApplyPendingMaintenanceActionRequest * ApplyPendingMaintenanceActionResponse::request() const
{
    Q_D(const ApplyPendingMaintenanceActionResponse);
    return static_cast<const ApplyPendingMaintenanceActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigrationService ApplyPendingMaintenanceAction \a response.
 */
void ApplyPendingMaintenanceActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ApplyPendingMaintenanceActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigrationService::ApplyPendingMaintenanceActionResponsePrivate
 * \brief The ApplyPendingMaintenanceActionResponsePrivate class provides private implementation for ApplyPendingMaintenanceActionResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigrationService
 */

/*!
 * Constructs a ApplyPendingMaintenanceActionResponsePrivate object with public implementation \a q.
 */
ApplyPendingMaintenanceActionResponsePrivate::ApplyPendingMaintenanceActionResponsePrivate(
    ApplyPendingMaintenanceActionResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigrationService ApplyPendingMaintenanceAction response element from \a xml.
 */
void ApplyPendingMaintenanceActionResponsePrivate::parseApplyPendingMaintenanceActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApplyPendingMaintenanceActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
