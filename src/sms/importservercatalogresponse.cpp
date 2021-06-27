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

#include "importservercatalogresponse.h"
#include "importservercatalogresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::ImportServerCatalogResponse
 * \brief The ImportServerCatalogResponse class provides an interace for SMS ImportServerCatalog responses.
 *
 * \inmodule QtAwsSMS
 *
 *  <fullname>AWS Server Migration Service</fullname>
 * 
 *  AWS Server Migration Service (AWS SMS) makes it easier and faster for you to migrate your on-premises workloads to AWS.
 *  To learn more about AWS SMS, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">AWS Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">AWS Server Migration Service User
 *  Guide</a>
 *
 * \sa SmsClient::importServerCatalog
 */

/*!
 * Constructs a ImportServerCatalogResponse object for \a reply to \a request, with parent \a parent.
 */
ImportServerCatalogResponse::ImportServerCatalogResponse(
        const ImportServerCatalogRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new ImportServerCatalogResponsePrivate(this), parent)
{
    setRequest(new ImportServerCatalogRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportServerCatalogRequest * ImportServerCatalogResponse::request() const
{
    return static_cast<const ImportServerCatalogRequest *>(SmsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SMS ImportServerCatalog \a response.
 */
void ImportServerCatalogResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportServerCatalogResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::ImportServerCatalogResponsePrivate
 * \brief The ImportServerCatalogResponsePrivate class provides private implementation for ImportServerCatalogResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a ImportServerCatalogResponsePrivate object with public implementation \a q.
 */
ImportServerCatalogResponsePrivate::ImportServerCatalogResponsePrivate(
    ImportServerCatalogResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS ImportServerCatalog response element from \a xml.
 */
void ImportServerCatalogResponsePrivate::parseImportServerCatalogResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportServerCatalogResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
