// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "adminupdatedevicestatusresponse.h"
#include "adminupdatedevicestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateDeviceStatusResponse
 * \brief The AdminUpdateDeviceStatusResponse class provides an interace for CognitoIdentityProvider AdminUpdateDeviceStatus responses.
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
 * \sa CognitoIdentityProviderClient::adminUpdateDeviceStatus
 */

/*!
 * Constructs a AdminUpdateDeviceStatusResponse object for \a reply to \a request, with parent \a parent.
 */
AdminUpdateDeviceStatusResponse::AdminUpdateDeviceStatusResponse(
        const AdminUpdateDeviceStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new AdminUpdateDeviceStatusResponsePrivate(this), parent)
{
    setRequest(new AdminUpdateDeviceStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AdminUpdateDeviceStatusRequest * AdminUpdateDeviceStatusResponse::request() const
{
    Q_D(const AdminUpdateDeviceStatusResponse);
    return static_cast<const AdminUpdateDeviceStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider AdminUpdateDeviceStatus \a response.
 */
void AdminUpdateDeviceStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AdminUpdateDeviceStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::AdminUpdateDeviceStatusResponsePrivate
 * \brief The AdminUpdateDeviceStatusResponsePrivate class provides private implementation for AdminUpdateDeviceStatusResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a AdminUpdateDeviceStatusResponsePrivate object with public implementation \a q.
 */
AdminUpdateDeviceStatusResponsePrivate::AdminUpdateDeviceStatusResponsePrivate(
    AdminUpdateDeviceStatusResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider AdminUpdateDeviceStatus response element from \a xml.
 */
void AdminUpdateDeviceStatusResponsePrivate::parseAdminUpdateDeviceStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AdminUpdateDeviceStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
