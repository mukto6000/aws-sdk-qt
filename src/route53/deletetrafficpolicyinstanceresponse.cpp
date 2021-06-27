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

#include "deletetrafficpolicyinstanceresponse.h"
#include "deletetrafficpolicyinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteTrafficPolicyInstanceResponse
 * \brief The DeleteTrafficPolicyInstanceResponse class provides an interace for Route53 DeleteTrafficPolicyInstance responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteTrafficPolicyInstance
 */

/*!
 * Constructs a DeleteTrafficPolicyInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTrafficPolicyInstanceResponse::DeleteTrafficPolicyInstanceResponse(
        const DeleteTrafficPolicyInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteTrafficPolicyInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteTrafficPolicyInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTrafficPolicyInstanceRequest * DeleteTrafficPolicyInstanceResponse::request() const
{
    return static_cast<const DeleteTrafficPolicyInstanceRequest *>(Route53Response::request());
}

/*!
 * \reimp
 * Parses a successful Route53 DeleteTrafficPolicyInstance \a response.
 */
void DeleteTrafficPolicyInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTrafficPolicyInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DeleteTrafficPolicyInstanceResponsePrivate
 * \brief The DeleteTrafficPolicyInstanceResponsePrivate class provides private implementation for DeleteTrafficPolicyInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteTrafficPolicyInstanceResponsePrivate object with public implementation \a q.
 */
DeleteTrafficPolicyInstanceResponsePrivate::DeleteTrafficPolicyInstanceResponsePrivate(
    DeleteTrafficPolicyInstanceResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DeleteTrafficPolicyInstance response element from \a xml.
 */
void DeleteTrafficPolicyInstanceResponsePrivate::parseDeleteTrafficPolicyInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrafficPolicyInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
