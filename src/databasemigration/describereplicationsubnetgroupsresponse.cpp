// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplicationsubnetgroupsresponse.h"
#include "describereplicationsubnetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationSubnetGroupsResponse
 * \brief The DescribeReplicationSubnetGroupsResponse class provides an interace for DatabaseMigration DescribeReplicationSubnetGroups responses.
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
 * \sa DatabaseMigrationClient::describeReplicationSubnetGroups
 */

/*!
 * Constructs a DescribeReplicationSubnetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplicationSubnetGroupsResponse::DescribeReplicationSubnetGroupsResponse(
        const DescribeReplicationSubnetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeReplicationSubnetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationSubnetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReplicationSubnetGroupsRequest * DescribeReplicationSubnetGroupsResponse::request() const
{
    Q_D(const DescribeReplicationSubnetGroupsResponse);
    return static_cast<const DescribeReplicationSubnetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeReplicationSubnetGroups \a response.
 */
void DescribeReplicationSubnetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReplicationSubnetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeReplicationSubnetGroupsResponsePrivate
 * \brief The DescribeReplicationSubnetGroupsResponsePrivate class provides private implementation for DescribeReplicationSubnetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeReplicationSubnetGroupsResponsePrivate object with public implementation \a q.
 */
DescribeReplicationSubnetGroupsResponsePrivate::DescribeReplicationSubnetGroupsResponsePrivate(
    DescribeReplicationSubnetGroupsResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeReplicationSubnetGroups response element from \a xml.
 */
void DescribeReplicationSubnetGroupsResponsePrivate::parseDescribeReplicationSubnetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationSubnetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
