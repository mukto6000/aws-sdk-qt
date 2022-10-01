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

#include "enableuserresponse.h"
#include "enableuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::EnableUserResponse
 * \brief The EnableUserResponse class provides an interace for FinspaceData EnableUser responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::enableUser
 */

/*!
 * Constructs a EnableUserResponse object for \a reply to \a request, with parent \a parent.
 */
EnableUserResponse::EnableUserResponse(
        const EnableUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new EnableUserResponsePrivate(this), parent)
{
    setRequest(new EnableUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableUserRequest * EnableUserResponse::request() const
{
    Q_D(const EnableUserResponse);
    return static_cast<const EnableUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData EnableUser \a response.
 */
void EnableUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::EnableUserResponsePrivate
 * \brief The EnableUserResponsePrivate class provides private implementation for EnableUserResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a EnableUserResponsePrivate object with public implementation \a q.
 */
EnableUserResponsePrivate::EnableUserResponsePrivate(
    EnableUserResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData EnableUser response element from \a xml.
 */
void EnableUserResponsePrivate::parseEnableUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
