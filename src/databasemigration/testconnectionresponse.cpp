// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testconnectionresponse.h"
#include "testconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::TestConnectionResponse
 * \brief The TestConnectionResponse class provides an interace for DatabaseMigration TestConnection responses.
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
 * \sa DatabaseMigrationClient::testConnection
 */

/*!
 * Constructs a TestConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
TestConnectionResponse::TestConnectionResponse(
        const TestConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new TestConnectionResponsePrivate(this), parent)
{
    setRequest(new TestConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestConnectionRequest * TestConnectionResponse::request() const
{
    Q_D(const TestConnectionResponse);
    return static_cast<const TestConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration TestConnection \a response.
 */
void TestConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::TestConnectionResponsePrivate
 * \brief The TestConnectionResponsePrivate class provides private implementation for TestConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a TestConnectionResponsePrivate object with public implementation \a q.
 */
TestConnectionResponsePrivate::TestConnectionResponsePrivate(
    TestConnectionResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration TestConnection response element from \a xml.
 */
void TestConnectionResponsePrivate::parseTestConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
