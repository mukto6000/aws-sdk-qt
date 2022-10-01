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

#include "describeschemasresponse.h"
#include "describeschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DescribeSchemasResponse
 * \brief The DescribeSchemasResponse class provides an interace for DatabaseMigration DescribeSchemas responses.
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
 * \sa DatabaseMigrationClient::describeSchemas
 */

/*!
 * Constructs a DescribeSchemasResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSchemasResponse::DescribeSchemasResponse(
        const DescribeSchemasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new DescribeSchemasResponsePrivate(this), parent)
{
    setRequest(new DescribeSchemasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSchemasRequest * DescribeSchemasResponse::request() const
{
    Q_D(const DescribeSchemasResponse);
    return static_cast<const DescribeSchemasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration DescribeSchemas \a response.
 */
void DescribeSchemasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSchemasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::DescribeSchemasResponsePrivate
 * \brief The DescribeSchemasResponsePrivate class provides private implementation for DescribeSchemasResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DescribeSchemasResponsePrivate object with public implementation \a q.
 */
DescribeSchemasResponsePrivate::DescribeSchemasResponsePrivate(
    DescribeSchemasResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration DescribeSchemas response element from \a xml.
 */
void DescribeSchemasResponsePrivate::parseDescribeSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSchemasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
