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

#include "admindisableuserresponse.h"
#include "admindisableuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableUserResponse
 * \brief The AdminDisableUserResponse class provides an interace for CognitoIdentityProvider AdminDisableUser responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminDisableUser
 */

/*!
 * Constructs a AdminDisableUserResponse object for \a reply to \a request, with parent \a parent.
 */
AdminDisableUserResponse::AdminDisableUserResponse(
        const AdminDisableUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminDisableUserResponsePrivate(this), parent)
{
    setRequest(new AdminDisableUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminDisableUserRequest * AdminDisableUserResponse::request() const
{
    Q_D(const AdminDisableUserResponse);
    return static_cast<const AdminDisableUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminDisableUser \a response.
 */
void AdminDisableUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminDisableUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminDisableUserResponsePrivate
 * \brief The AdminDisableUserResponsePrivate class provides private implementation for AdminDisableUserResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminDisableUserResponsePrivate object with public implementation \a q.
 */
AdminDisableUserResponsePrivate::AdminDisableUserResponsePrivate(
    AdminDisableUserResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminDisableUser response element from \a xml.
 */
void AdminDisableUserResponsePrivate::parseAdminDisableUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminDisableUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
