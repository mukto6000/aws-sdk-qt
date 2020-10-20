/*
    Copyright 2013-2020 Paul Colby

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

#include "getreusabledelegationsetresponse.h"
#include "getreusabledelegationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetReusableDelegationSetResponse
 * \brief The GetReusableDelegationSetResponse class provides an interace for Route53 GetReusableDelegationSet responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getReusableDelegationSet
 */

/*!
 * Constructs a GetReusableDelegationSetResponse object for \a reply to \a request, with parent \a parent.
 */
GetReusableDelegationSetResponse::GetReusableDelegationSetResponse(
        const GetReusableDelegationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetReusableDelegationSetResponsePrivate(this), parent)
{
    setRequest(new GetReusableDelegationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReusableDelegationSetRequest * GetReusableDelegationSetResponse::request() const
{
    Q_D(const GetReusableDelegationSetResponse);
    return static_cast<const GetReusableDelegationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 GetReusableDelegationSet \a response.
 */
void GetReusableDelegationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReusableDelegationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::GetReusableDelegationSetResponsePrivate
 * \brief The GetReusableDelegationSetResponsePrivate class provides private implementation for GetReusableDelegationSetResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetReusableDelegationSetResponsePrivate object with public implementation \a q.
 */
GetReusableDelegationSetResponsePrivate::GetReusableDelegationSetResponsePrivate(
    GetReusableDelegationSetResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 GetReusableDelegationSet response element from \a xml.
 */
void GetReusableDelegationSetResponsePrivate::parseGetReusableDelegationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReusableDelegationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
