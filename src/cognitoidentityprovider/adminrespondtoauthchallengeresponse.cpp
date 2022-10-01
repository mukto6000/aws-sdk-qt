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

#include "adminrespondtoauthchallengeresponse.h"
#include "adminrespondtoauthchallengeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRespondToAuthChallengeResponse
 * \brief The AdminRespondToAuthChallengeResponse class provides an interace for CognitoIdentityProvider AdminRespondToAuthChallenge responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito user pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito user
 * 
 *  pools>
 * 
 *  For more information, see the <a
 *  href="https://docs.aws.amazon.com/cognito/latest/developerguide/what-is-amazon-cognito.html">Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::adminRespondToAuthChallenge
 */

/*!
 * Constructs a AdminRespondToAuthChallengeResponse object for \a reply to \a request, with parent \a parent.
 */
AdminRespondToAuthChallengeResponse::AdminRespondToAuthChallengeResponse(
        const AdminRespondToAuthChallengeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminRespondToAuthChallengeResponsePrivate(this), parent)
{
    setRequest(new AdminRespondToAuthChallengeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminRespondToAuthChallengeRequest * AdminRespondToAuthChallengeResponse::request() const
{
    Q_D(const AdminRespondToAuthChallengeResponse);
    return static_cast<const AdminRespondToAuthChallengeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminRespondToAuthChallenge \a response.
 */
void AdminRespondToAuthChallengeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminRespondToAuthChallengeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminRespondToAuthChallengeResponsePrivate
 * \brief The AdminRespondToAuthChallengeResponsePrivate class provides private implementation for AdminRespondToAuthChallengeResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminRespondToAuthChallengeResponsePrivate object with public implementation \a q.
 */
AdminRespondToAuthChallengeResponsePrivate::AdminRespondToAuthChallengeResponsePrivate(
    AdminRespondToAuthChallengeResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminRespondToAuthChallenge response element from \a xml.
 */
void AdminRespondToAuthChallengeResponsePrivate::parseAdminRespondToAuthChallengeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminRespondToAuthChallengeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
