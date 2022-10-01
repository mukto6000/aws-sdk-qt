// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
