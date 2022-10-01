// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyendpointresponse.h"
#include "modifyendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::ModifyEndpointResponse
 * \brief The ModifyEndpointResponse class provides an interace for DatabaseMigration ModifyEndpoint responses.
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
 * \sa DatabaseMigrationClient::modifyEndpoint
 */

/*!
 * Constructs a ModifyEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyEndpointResponse::ModifyEndpointResponse(
        const ModifyEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationResponse(new ModifyEndpointResponsePrivate(this), parent)
{
    setRequest(new ModifyEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyEndpointRequest * ModifyEndpointResponse::request() const
{
    Q_D(const ModifyEndpointResponse);
    return static_cast<const ModifyEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DatabaseMigration ModifyEndpoint \a response.
 */
void ModifyEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DatabaseMigration::ModifyEndpointResponsePrivate
 * \brief The ModifyEndpointResponsePrivate class provides private implementation for ModifyEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a ModifyEndpointResponsePrivate object with public implementation \a q.
 */
ModifyEndpointResponsePrivate::ModifyEndpointResponsePrivate(
    ModifyEndpointResponse * const q) : DatabaseMigrationResponsePrivate(q)
{

}

/*!
 * Parses a DatabaseMigration ModifyEndpoint response element from \a xml.
 */
void ModifyEndpointResponsePrivate::parseModifyEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DatabaseMigration
} // namespace QtAws
