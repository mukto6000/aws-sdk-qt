// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsigningcertificateresponse.h"
#include "getsigningcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::GetSigningCertificateResponse
 * \brief The GetSigningCertificateResponse class provides an interace for CognitoIdentityProvider GetSigningCertificate responses.
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
 * \sa CognitoIdentityProviderClient::getSigningCertificate
 */

/*!
 * Constructs a GetSigningCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
GetSigningCertificateResponse::GetSigningCertificateResponse(
        const GetSigningCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new GetSigningCertificateResponsePrivate(this), parent)
{
    setRequest(new GetSigningCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSigningCertificateRequest * GetSigningCertificateResponse::request() const
{
    Q_D(const GetSigningCertificateResponse);
    return static_cast<const GetSigningCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider GetSigningCertificate \a response.
 */
void GetSigningCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSigningCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::GetSigningCertificateResponsePrivate
 * \brief The GetSigningCertificateResponsePrivate class provides private implementation for GetSigningCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a GetSigningCertificateResponsePrivate object with public implementation \a q.
 */
GetSigningCertificateResponsePrivate::GetSigningCertificateResponsePrivate(
    GetSigningCertificateResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider GetSigningCertificate response element from \a xml.
 */
void GetSigningCertificateResponsePrivate::parseGetSigningCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSigningCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
