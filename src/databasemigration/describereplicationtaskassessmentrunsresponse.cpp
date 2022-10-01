// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationtaskassessmentrunsresponse.h"
#include "describereplicationtaskassessmentrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationTaskAssessmentRunsResponse
 * \brief The DescribeReplicationTaskAssessmentRunsResponse class provides an interace for DatabaseMigration DescribeReplicationTaskAssessmentRuns responses.
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
 * \sa DatabaseMigrationClient::describeReplicationTaskAssessmentRuns
 */

/*!
 * Constructs a DescribeReplicationTaskAssessmentRunsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplicationTaskAssessmentRunsResponse::DescribeReplicationTaskAssessmentRunsResponse(
        const DescribeReplicationTaskAssessmentRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeReplicationTaskAssessmentRunsResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationTaskAssessmentRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReplicationTaskAssessmentRunsRequest * DescribeReplicationTaskAssessmentRunsResponse::request() const
{
    Q_D(const DescribeReplicationTaskAssessmentRunsResponse);
    return static_cast<const DescribeReplicationTaskAssessmentRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeReplicationTaskAssessmentRuns \a response.
 */
void DescribeReplicationTaskAssessmentRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReplicationTaskAssessmentRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationTaskAssessmentRunsResponsePrivate
 * \brief The DescribeReplicationTaskAssessmentRunsResponsePrivate class provides private implementation for DescribeReplicationTaskAssessmentRunsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeReplicationTaskAssessmentRunsResponsePrivate object with public implementation \a q.
 */
DescribeReplicationTaskAssessmentRunsResponsePrivate::DescribeReplicationTaskAssessmentRunsResponsePrivate(
    DescribeReplicationTaskAssessmentRunsResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeReplicationTaskAssessmentRuns response element from \a xml.
 */
void DescribeReplicationTaskAssessmentRunsResponsePrivate::parseDescribeReplicationTaskAssessmentRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationTaskAssessmentRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
