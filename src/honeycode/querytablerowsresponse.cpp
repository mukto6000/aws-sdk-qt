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

#include "querytablerowsresponse.h"
#include "querytablerowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::QueryTableRowsResponse
 * \brief The QueryTableRowsResponse class provides an interace for Honeycode QueryTableRows responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::queryTableRows
 */

/*!
 * Constructs a QueryTableRowsResponse object for \a reply to \a request, with parent \a parent.
 */
QueryTableRowsResponse::QueryTableRowsResponse(
        const QueryTableRowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new QueryTableRowsResponsePrivate(this), parent)
{
    setRequest(new QueryTableRowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const QueryTableRowsRequest * QueryTableRowsResponse::request() const
{
    return static_cast<const QueryTableRowsRequest *>(HoneycodeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Honeycode QueryTableRows \a response.
 */
void QueryTableRowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(QueryTableRowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::QueryTableRowsResponsePrivate
 * \brief The QueryTableRowsResponsePrivate class provides private implementation for QueryTableRowsResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a QueryTableRowsResponsePrivate object with public implementation \a q.
 */
QueryTableRowsResponsePrivate::QueryTableRowsResponsePrivate(
    QueryTableRowsResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode QueryTableRows response element from \a xml.
 */
void QueryTableRowsResponsePrivate::parseQueryTableRowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryTableRowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
