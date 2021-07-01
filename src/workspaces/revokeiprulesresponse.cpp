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

#include "revokeiprulesresponse.h"
#include "revokeiprulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::RevokeIpRulesResponse
 * \brief The RevokeIpRulesResponse class provides an interace for WorkSpaces RevokeIpRules responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::revokeIpRules
 */

/*!
 * Constructs a RevokeIpRulesResponse object for \a reply to \a request, with parent \a parent.
 */
RevokeIpRulesResponse::RevokeIpRulesResponse(
        const RevokeIpRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new RevokeIpRulesResponsePrivate(this), parent)
{
    setRequest(new RevokeIpRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RevokeIpRulesRequest * RevokeIpRulesResponse::request() const
{
    Q_D(const RevokeIpRulesResponse);
    return static_cast<const RevokeIpRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces RevokeIpRules \a response.
 */
void RevokeIpRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RevokeIpRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::RevokeIpRulesResponsePrivate
 * \brief The RevokeIpRulesResponsePrivate class provides private implementation for RevokeIpRulesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a RevokeIpRulesResponsePrivate object with public implementation \a q.
 */
RevokeIpRulesResponsePrivate::RevokeIpRulesResponsePrivate(
    RevokeIpRulesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces RevokeIpRules response element from \a xml.
 */
void RevokeIpRulesResponsePrivate::parseRevokeIpRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeIpRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
