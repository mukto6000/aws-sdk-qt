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

#include "getqueryloggingconfigresponse.h"
#include "getqueryloggingconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetQueryLoggingConfigResponse
 * \brief The GetQueryLoggingConfigResponse class provides an interace for Route53 GetQueryLoggingConfig responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getQueryLoggingConfig
 */

/*!
 * Constructs a GetQueryLoggingConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetQueryLoggingConfigResponse::GetQueryLoggingConfigResponse(
        const GetQueryLoggingConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetQueryLoggingConfigResponsePrivate(this), parent)
{
    setRequest(new GetQueryLoggingConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetQueryLoggingConfigRequest * GetQueryLoggingConfigResponse::request() const
{
    return static_cast<const GetQueryLoggingConfigRequest *>(Route53Response::request());
}

/*!
 * \reimp
 * Parses a successful Route53 GetQueryLoggingConfig \a response.
 */
void GetQueryLoggingConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetQueryLoggingConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetQueryLoggingConfigResponsePrivate
 * \brief The GetQueryLoggingConfigResponsePrivate class provides private implementation for GetQueryLoggingConfigResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetQueryLoggingConfigResponsePrivate object with public implementation \a q.
 */
GetQueryLoggingConfigResponsePrivate::GetQueryLoggingConfigResponsePrivate(
    GetQueryLoggingConfigResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetQueryLoggingConfig response element from \a xml.
 */
void GetQueryLoggingConfigResponsePrivate::parseGetQueryLoggingConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueryLoggingConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
