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

#include "listapplicationstatesresponse.h"
#include "listapplicationstatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListApplicationStatesResponse
 * \brief The ListApplicationStatesResponse class provides an interace for MigrationHub ListApplicationStates responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
 *
 * \sa MigrationHubClient::listApplicationStates
 */

/*!
 * Constructs a ListApplicationStatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListApplicationStatesResponse::ListApplicationStatesResponse(
        const ListApplicationStatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new ListApplicationStatesResponsePrivate(this), parent)
{
    setRequest(new ListApplicationStatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApplicationStatesRequest * ListApplicationStatesResponse::request() const
{
    Q_D(const ListApplicationStatesResponse);
    return static_cast<const ListApplicationStatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub ListApplicationStates \a response.
 */
void ListApplicationStatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApplicationStatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::ListApplicationStatesResponsePrivate
 * \brief The ListApplicationStatesResponsePrivate class provides private implementation for ListApplicationStatesResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ListApplicationStatesResponsePrivate object with public implementation \a q.
 */
ListApplicationStatesResponsePrivate::ListApplicationStatesResponsePrivate(
    ListApplicationStatesResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub ListApplicationStates response element from \a xml.
 */
void ListApplicationStatesResponsePrivate::parseListApplicationStatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationStatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
