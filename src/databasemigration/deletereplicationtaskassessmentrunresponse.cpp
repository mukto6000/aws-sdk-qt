// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationtaskassessmentrunresponse.h"
#include "deletereplicationtaskassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationTaskAssessmentRunResponse
 * \brief The DeleteReplicationTaskAssessmentRunResponse class provides an interace for DatabaseMigration DeleteReplicationTaskAssessmentRun responses.
 *
 * \inmodule QtAwsDatabaseMigration
 *
 *  <fullname>Database Migration Service</fullname>
 * 
 *  Database Migration Service (DMS) can migrate your data to and from the most widely used commercial and open-source
 *  databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, MySQL, and SAP
 *  Adaptive Server Enterprise (ASE). The service supports homogeneous migrations such as Oracle to Oracle, as well as
 *  heterogeneous migrations between different database platforms, such as Oracle to MySQL or SQL Server to
 * 
 *  PostgreSQL>
 * 
 *  For more information about DMS, see <a href="https://docs.aws.amazon.com/dms/latest/userguide/Welcome.html">What Is
 *  Database Migration Service?</a> in the <i>Database Migration Service User Guide.</i>
 *
 * \sa DatabaseMigrationClient::deleteReplicationTaskAssessmentRun
 */

/*!
 * Constructs a DeleteReplicationTaskAssessmentRunResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationTaskAssessmentRunResponse::DeleteReplicationTaskAssessmentRunResponse(
        const DeleteReplicationTaskAssessmentRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DeleteReplicationTaskAssessmentRunResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationTaskAssessmentRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationTaskAssessmentRunRequest * DeleteReplicationTaskAssessmentRunResponse::request() const
{
    Q_D(const DeleteReplicationTaskAssessmentRunResponse);
    return static_cast<const DeleteReplicationTaskAssessmentRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DeleteReplicationTaskAssessmentRun \a response.
 */
void DeleteReplicationTaskAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReplicationTaskAssessmentRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DeleteReplicationTaskAssessmentRunResponsePrivate
 * \brief The DeleteReplicationTaskAssessmentRunResponsePrivate class provides private implementation for DeleteReplicationTaskAssessmentRunResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DeleteReplicationTaskAssessmentRunResponsePrivate object with public implementation \a q.
 */
DeleteReplicationTaskAssessmentRunResponsePrivate::DeleteReplicationTaskAssessmentRunResponsePrivate(
    DeleteReplicationTaskAssessmentRunResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DeleteReplicationTaskAssessmentRun response element from \a xml.
 */
void DeleteReplicationTaskAssessmentRunResponsePrivate::parseDeleteReplicationTaskAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationTaskAssessmentRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
