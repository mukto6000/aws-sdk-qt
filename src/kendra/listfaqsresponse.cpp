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

#include "listfaqsresponse.h"
#include "listfaqsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListFaqsResponse
 * \brief The ListFaqsResponse class provides an interace for Kendra ListFaqs responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listFaqs
 */

/*!
 * Constructs a ListFaqsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFaqsResponse::ListFaqsResponse(
        const ListFaqsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListFaqsResponsePrivate(this), parent)
{
    setRequest(new ListFaqsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFaqsRequest * ListFaqsResponse::request() const
{
    Q_D(const ListFaqsResponse);
    return static_cast<const ListFaqsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListFaqs \a response.
 */
void ListFaqsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFaqsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListFaqsResponsePrivate
 * \brief The ListFaqsResponsePrivate class provides private implementation for ListFaqsResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListFaqsResponsePrivate object with public implementation \a q.
 */
ListFaqsResponsePrivate::ListFaqsResponsePrivate(
    ListFaqsResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListFaqs response element from \a xml.
 */
void ListFaqsResponsePrivate::parseListFaqsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFaqsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
