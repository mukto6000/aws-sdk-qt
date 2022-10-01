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

#include "updatereportplanresponse.h"
#include "updatereportplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateReportPlanResponse
 * \brief The UpdateReportPlanResponse class provides an interace for Backup UpdateReportPlan responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateReportPlan
 */

/*!
 * Constructs a UpdateReportPlanResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReportPlanResponse::UpdateReportPlanResponse(
        const UpdateReportPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new UpdateReportPlanResponsePrivate(this), parent)
{
    setRequest(new UpdateReportPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReportPlanRequest * UpdateReportPlanResponse::request() const
{
    Q_D(const UpdateReportPlanResponse);
    return static_cast<const UpdateReportPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup UpdateReportPlan \a response.
 */
void UpdateReportPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReportPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::UpdateReportPlanResponsePrivate
 * \brief The UpdateReportPlanResponsePrivate class provides private implementation for UpdateReportPlanResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateReportPlanResponsePrivate object with public implementation \a q.
 */
UpdateReportPlanResponsePrivate::UpdateReportPlanResponsePrivate(
    UpdateReportPlanResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup UpdateReportPlan response element from \a xml.
 */
void UpdateReportPlanResponsePrivate::parseUpdateReportPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReportPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
