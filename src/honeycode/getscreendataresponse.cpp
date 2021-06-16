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

#include "getscreendataresponse.h"
#include "getscreendataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::GetScreenDataResponse
 * \brief The GetScreenDataResponse class provides an interace for Honeycode GetScreenData responses.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::getScreenData
 */

/*!
 * Constructs a GetScreenDataResponse object for \a reply to \a request, with parent \a parent.
 */
GetScreenDataResponse::GetScreenDataResponse(
        const GetScreenDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HoneycodeResponse(new GetScreenDataResponsePrivate(this), parent)
{
    setRequest(new GetScreenDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetScreenDataRequest * GetScreenDataResponse::request() const
{
    Q_D(const GetScreenDataResponse);
    return static_cast<const GetScreenDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Honeycode GetScreenData \a response.
 */
void GetScreenDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetScreenDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Honeycode::GetScreenDataResponsePrivate
 * \brief The GetScreenDataResponsePrivate class provides private implementation for GetScreenDataResponse.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a GetScreenDataResponsePrivate object with public implementation \a q.
 */
GetScreenDataResponsePrivate::GetScreenDataResponsePrivate(
    GetScreenDataResponse * const q) : HoneycodeResponsePrivate(q)
{

}

/*!
 * Parses a Honeycode GetScreenData response element from \a xml.
 */
void GetScreenDataResponsePrivate::parseGetScreenDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetScreenDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Honeycode
} // namespace QtAws
