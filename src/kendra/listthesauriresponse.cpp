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

#include "listthesauriresponse.h"
#include "listthesauriresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListThesauriResponse
 * \brief The ListThesauriResponse class provides an interace for Kendra ListThesauri responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listThesauri
 */

/*!
 * Constructs a ListThesauriResponse object for \a reply to \a request, with parent \a parent.
 */
ListThesauriResponse::ListThesauriResponse(
        const ListThesauriRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListThesauriResponsePrivate(this), parent)
{
    setRequest(new ListThesauriRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListThesauriRequest * ListThesauriResponse::request() const
{
    Q_D(const ListThesauriResponse);
    return static_cast<const ListThesauriRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListThesauri \a response.
 */
void ListThesauriResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListThesauriResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListThesauriResponsePrivate
 * \brief The ListThesauriResponsePrivate class provides private implementation for ListThesauriResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListThesauriResponsePrivate object with public implementation \a q.
 */
ListThesauriResponsePrivate::ListThesauriResponsePrivate(
    ListThesauriResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListThesauri response element from \a xml.
 */
void ListThesauriResponsePrivate::parseListThesauriResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListThesauriResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
