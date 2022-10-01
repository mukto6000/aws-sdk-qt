// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "admininitiateauthresponse.h"
#include "admininitiateauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminInitiateAuthResponse
 * \brief The AdminInitiateAuthResponse class provides an interace for CognitoIdentityProvider AdminInitiateAuth responses.
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
 * \sa CognitoIdentityProviderClient::adminInitiateAuth
 */

/*!
 * Constructs a AdminInitiateAuthResponse object for \a reply to \a request, with parent \a parent.
 */
AdminInitiateAuthResponse::AdminInitiateAuthResponse(
        const AdminInitiateAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminInitiateAuthResponsePrivate(this), parent)
{
    setRequest(new AdminInitiateAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminInitiateAuthRequest * AdminInitiateAuthResponse::request() const
{
    Q_D(const AdminInitiateAuthResponse);
    return static_cast<const AdminInitiateAuthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminInitiateAuth \a response.
 */
void AdminInitiateAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminInitiateAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminInitiateAuthResponsePrivate
 * \brief The AdminInitiateAuthResponsePrivate class provides private implementation for AdminInitiateAuthResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminInitiateAuthResponsePrivate object with public implementation \a q.
 */
AdminInitiateAuthResponsePrivate::AdminInitiateAuthResponsePrivate(
    AdminInitiateAuthResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminInitiateAuth response element from \a xml.
 */
void AdminInitiateAuthResponsePrivate::parseAdminInitiateAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminInitiateAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
