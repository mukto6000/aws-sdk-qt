// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefleetadvisorschemasresponse.h"
#include "describefleetadvisorschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorSchemasResponse
 * \brief The DescribeFleetAdvisorSchemasResponse class provides an interace for DatabaseMigration DescribeFleetAdvisorSchemas responses.
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
 * \sa DatabaseMigrationClient::describeFleetAdvisorSchemas
 */

/*!
 * Constructs a DescribeFleetAdvisorSchemasResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetAdvisorSchemasResponse::DescribeFleetAdvisorSchemasResponse(
        const DescribeFleetAdvisorSchemasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeFleetAdvisorSchemasResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetAdvisorSchemasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFleetAdvisorSchemasRequest * DescribeFleetAdvisorSchemasResponse::request() const
{
    Q_D(const DescribeFleetAdvisorSchemasResponse);
    return static_cast<const DescribeFleetAdvisorSchemasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeFleetAdvisorSchemas \a response.
 */
void DescribeFleetAdvisorSchemasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFleetAdvisorSchemasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeFleetAdvisorSchemasResponsePrivate
 * \brief The DescribeFleetAdvisorSchemasResponsePrivate class provides private implementation for DescribeFleetAdvisorSchemasResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeFleetAdvisorSchemasResponsePrivate object with public implementation \a q.
 */
DescribeFleetAdvisorSchemasResponsePrivate::DescribeFleetAdvisorSchemasResponsePrivate(
    DescribeFleetAdvisorSchemasResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeFleetAdvisorSchemas response element from \a xml.
 */
void DescribeFleetAdvisorSchemasResponsePrivate::parseDescribeFleetAdvisorSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetAdvisorSchemasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
