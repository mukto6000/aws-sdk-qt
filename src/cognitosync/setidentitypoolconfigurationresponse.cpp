// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setidentitypoolconfigurationresponse.h"
#include "setidentitypoolconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/*!
 * \class QtAws::CognitoSync::SetIdentityPoolConfigurationResponse
 * \brief The SetIdentityPoolConfigurationResponse class provides an interace for CognitoSync SetIdentityPoolConfiguration responses.
 *
 * \inmodule QtAwsCognitoSync
 *
 *  <fullname>Amazon Cognito Sync</fullname>
 * 
 *  Amazon Cognito Sync provides an AWS service and client library that enable cross-device syncing of application-related
 *  user data. High-level client libraries are available for both iOS and Android. You can use these libraries to persist
 *  data locally so that it's available even if the device is offline. Developer credentials don't need to be stored on the
 *  mobile device to access the service. You can use Amazon Cognito to obtain a normalized user ID and credentials. User
 *  data is persisted in a dataset that can store up to 1 MB of key-value pairs, and you can have up to 20 datasets per user
 * 
 *  identity>
 * 
 *  With Amazon Cognito Sync, the data stored for each identity is accessible only to credentials assigned to that identity.
 *  In order to use the Cognito Sync service, you need to make API calls using credentials retrieved with <a
 *  href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/Welcome.html">Amazon Cognito Identity
 * 
 *  service</a>>
 * 
 *  If you want to use Cognito Sync in an Android or iOS application, you will probably want to make API calls via the AWS
 *  Mobile SDK. To learn more, see the <a
 *  href="http://docs.aws.amazon.com/mobile/sdkforandroid/developerguide/cognito-sync.html">Developer Guide for Android</a>
 *  and the <a href="http://docs.aws.amazon.com/mobile/sdkforios/developerguide/cognito-sync.html">Developer Guide for
 *
 * \sa CognitoSyncClient::setIdentityPoolConfiguration
 */

/*!
 * Constructs a SetIdentityPoolConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
SetIdentityPoolConfigurationResponse::SetIdentityPoolConfigurationResponse(
        const SetIdentityPoolConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new SetIdentityPoolConfigurationResponsePrivate(this), parent)
{
    setRequest(new SetIdentityPoolConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetIdentityPoolConfigurationRequest * SetIdentityPoolConfigurationResponse::request() const
{
    Q_D(const SetIdentityPoolConfigurationResponse);
    return static_cast<const SetIdentityPoolConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoSync SetIdentityPoolConfiguration \a response.
 */
void SetIdentityPoolConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetIdentityPoolConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoSync::SetIdentityPoolConfigurationResponsePrivate
 * \brief The SetIdentityPoolConfigurationResponsePrivate class provides private implementation for SetIdentityPoolConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoSync
 */

/*!
 * Constructs a SetIdentityPoolConfigurationResponsePrivate object with public implementation \a q.
 */
SetIdentityPoolConfigurationResponsePrivate::SetIdentityPoolConfigurationResponsePrivate(
    SetIdentityPoolConfigurationResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/*!
 * Parses a CognitoSync SetIdentityPoolConfiguration response element from \a xml.
 */
void SetIdentityPoolConfigurationResponsePrivate::parseSetIdentityPoolConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityPoolConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CognitoSync
} // namespace QtAws
