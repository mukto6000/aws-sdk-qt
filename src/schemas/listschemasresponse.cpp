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

#include "listschemasresponse.h"
#include "listschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListSchemasResponse
 * \brief The ListSchemasResponse class provides an interace for Schemas ListSchemas responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listSchemas
 */

/*!
 * Constructs a ListSchemasResponse object for \a reply to \a request, with parent \a parent.
 */
ListSchemasResponse::ListSchemasResponse(
        const ListSchemasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new ListSchemasResponsePrivate(this), parent)
{
    setRequest(new ListSchemasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSchemasRequest * ListSchemasResponse::request() const
{
    return static_cast<const ListSchemasRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas ListSchemas \a response.
 */
void ListSchemasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSchemasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::ListSchemasResponsePrivate
 * \brief The ListSchemasResponsePrivate class provides private implementation for ListSchemasResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListSchemasResponsePrivate object with public implementation \a q.
 */
ListSchemasResponsePrivate::ListSchemasResponsePrivate(
    ListSchemasResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas ListSchemas response element from \a xml.
 */
void ListSchemasResponsePrivate::parseListSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSchemasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
