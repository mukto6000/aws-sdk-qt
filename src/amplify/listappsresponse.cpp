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

#include "listappsresponse.h"
#include "listappsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListAppsResponse
 * \brief The ListAppsResponse class provides an interace for Amplify ListApps responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::listApps
 */

/*!
 * Constructs a ListAppsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppsResponse::ListAppsResponse(
        const ListAppsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new ListAppsResponsePrivate(this), parent)
{
    setRequest(new ListAppsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppsRequest * ListAppsResponse::request() const
{
    return static_cast<const ListAppsRequest *>(AmplifyResponse::request());
}

/*!
 * \reimp
 * Parses a successful Amplify ListApps \a response.
 */
void ListAppsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::ListAppsResponsePrivate
 * \brief The ListAppsResponsePrivate class provides private implementation for ListAppsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListAppsResponsePrivate object with public implementation \a q.
 */
ListAppsResponsePrivate::ListAppsResponsePrivate(
    ListAppsResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify ListApps response element from \a xml.
 */
void ListAppsResponsePrivate::parseListAppsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
