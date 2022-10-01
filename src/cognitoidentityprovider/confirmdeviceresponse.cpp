// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "confirmdeviceresponse.h"
#include "confirmdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmDeviceResponse
 * \brief The ConfirmDeviceResponse class provides an interace for CognitoIdentityProvider ConfirmDevice responses.
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
 * \sa CognitoIdentityProviderClient::confirmDevice
 */

/*!
 * Constructs a ConfirmDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
ConfirmDeviceResponse::ConfirmDeviceResponse(
        const ConfirmDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ConfirmDeviceResponsePrivate(this), parent)
{
    setRequest(new ConfirmDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfirmDeviceRequest * ConfirmDeviceResponse::request() const
{
    Q_D(const ConfirmDeviceResponse);
    return static_cast<const ConfirmDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider ConfirmDevice \a response.
 */
void ConfirmDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfirmDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::ConfirmDeviceResponsePrivate
 * \brief The ConfirmDeviceResponsePrivate class provides private implementation for ConfirmDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a ConfirmDeviceResponsePrivate object with public implementation \a q.
 */
ConfirmDeviceResponsePrivate::ConfirmDeviceResponsePrivate(
    ConfirmDeviceResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider ConfirmDevice response element from \a xml.
 */
void ConfirmDeviceResponsePrivate::parseConfirmDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfirmDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
