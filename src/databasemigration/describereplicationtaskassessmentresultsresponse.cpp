// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationtaskassessmentresultsresponse.h"
#include "describereplicationtaskassessmentresultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationTaskAssessmentResultsResponse
 * \brief The DescribeReplicationTaskAssessmentResultsResponse class provides an interace for DatabaseMigration DescribeReplicationTaskAssessmentResults responses.
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
 * \sa DatabaseMigrationClient::describeReplicationTaskAssessmentResults
 */

/*!
 * Constructs a DescribeReplicationTaskAssessmentResultsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplicationTaskAssessmentResultsResponse::DescribeReplicationTaskAssessmentResultsResponse(
        const DescribeReplicationTaskAssessmentResultsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeReplicationTaskAssessmentResultsResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationTaskAssessmentResultsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReplicationTaskAssessmentResultsRequest * DescribeReplicationTaskAssessmentResultsResponse::request() const
{
    Q_D(const DescribeReplicationTaskAssessmentResultsResponse);
    return static_cast<const DescribeReplicationTaskAssessmentResultsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeReplicationTaskAssessmentResults \a response.
 */
void DescribeReplicationTaskAssessmentResultsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReplicationTaskAssessmentResultsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationTaskAssessmentResultsResponsePrivate
 * \brief The DescribeReplicationTaskAssessmentResultsResponsePrivate class provides private implementation for DescribeReplicationTaskAssessmentResultsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeReplicationTaskAssessmentResultsResponsePrivate object with public implementation \a q.
 */
DescribeReplicationTaskAssessmentResultsResponsePrivate::DescribeReplicationTaskAssessmentResultsResponsePrivate(
    DescribeReplicationTaskAssessmentResultsResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeReplicationTaskAssessmentResults response element from \a xml.
 */
void DescribeReplicationTaskAssessmentResultsResponsePrivate::parseDescribeReplicationTaskAssessmentResultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationTaskAssessmentResultsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
