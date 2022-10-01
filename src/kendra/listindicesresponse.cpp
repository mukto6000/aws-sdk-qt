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

#include "listindicesresponse.h"
#include "listindicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListIndicesResponse
 * \brief The ListIndicesResponse class provides an interace for Kendra ListIndices responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listIndices
 */

/*!
 * Constructs a ListIndicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListIndicesResponse::ListIndicesResponse(
        const ListIndicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListIndicesResponsePrivate(this), parent)
{
    setRequest(new ListIndicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListIndicesRequest * ListIndicesResponse::request() const
{
    Q_D(const ListIndicesResponse);
    return static_cast<const ListIndicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListIndices \a response.
 */
void ListIndicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListIndicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListIndicesResponsePrivate
 * \brief The ListIndicesResponsePrivate class provides private implementation for ListIndicesResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListIndicesResponsePrivate object with public implementation \a q.
 */
ListIndicesResponsePrivate::ListIndicesResponsePrivate(
    ListIndicesResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListIndices response element from \a xml.
 */
void ListIndicesResponsePrivate::parseListIndicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIndicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
