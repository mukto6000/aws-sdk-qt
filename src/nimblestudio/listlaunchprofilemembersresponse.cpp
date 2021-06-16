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

#include "listlaunchprofilemembersresponse.h"
#include "listlaunchprofilemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListLaunchProfileMembersResponse
 * \brief The ListLaunchProfileMembersResponse class provides an interace for NimbleStudio ListLaunchProfileMembers responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listLaunchProfileMembers
 */

/*!
 * Constructs a ListLaunchProfileMembersResponse object for \a reply to \a request, with parent \a parent.
 */
ListLaunchProfileMembersResponse::ListLaunchProfileMembersResponse(
        const ListLaunchProfileMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new ListLaunchProfileMembersResponsePrivate(this), parent)
{
    setRequest(new ListLaunchProfileMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLaunchProfileMembersRequest * ListLaunchProfileMembersResponse::request() const
{
    Q_D(const ListLaunchProfileMembersResponse);
    return static_cast<const ListLaunchProfileMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio ListLaunchProfileMembers \a response.
 */
void ListLaunchProfileMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLaunchProfileMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::ListLaunchProfileMembersResponsePrivate
 * \brief The ListLaunchProfileMembersResponsePrivate class provides private implementation for ListLaunchProfileMembersResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListLaunchProfileMembersResponsePrivate object with public implementation \a q.
 */
ListLaunchProfileMembersResponsePrivate::ListLaunchProfileMembersResponsePrivate(
    ListLaunchProfileMembersResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio ListLaunchProfileMembers response element from \a xml.
 */
void ListLaunchProfileMembersResponsePrivate::parseListLaunchProfileMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLaunchProfileMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
