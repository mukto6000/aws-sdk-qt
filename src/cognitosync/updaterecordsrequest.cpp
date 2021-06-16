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

#include "updaterecordsrequest.h"
#include "updaterecordsrequest_p.h"
#include "updaterecordsresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/*!
 * \class QtAws::CognitoSync::UpdateRecordsRequest
 * \brief The UpdateRecordsRequest class provides an interface for CognitoSync UpdateRecords requests.
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
 * \sa CognitoSyncClient::updateRecords
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRecordsRequest::UpdateRecordsRequest(const UpdateRecordsRequest &other)
    : CognitoSyncRequest(new UpdateRecordsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRecordsRequest object.
 */
UpdateRecordsRequest::UpdateRecordsRequest()
    : CognitoSyncRequest(new UpdateRecordsRequestPrivate(CognitoSyncRequest::UpdateRecordsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRecordsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRecordsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRecordsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRecordsResponse(*this, reply);
}

/*!
 * \class QtAws::CognitoSync::UpdateRecordsRequestPrivate
 * \brief The UpdateRecordsRequestPrivate class provides private implementation for UpdateRecordsRequest.
 * \internal
 *
 * \inmodule QtAwsCognitoSync
 */

/*!
 * Constructs a UpdateRecordsRequestPrivate object for CognitoSync \a action,
 * with public implementation \a q.
 */
UpdateRecordsRequestPrivate::UpdateRecordsRequestPrivate(
    const CognitoSyncRequest::Action action, UpdateRecordsRequest * const q)
    : CognitoSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRecordsRequest
 * class' copy constructor.
 */
UpdateRecordsRequestPrivate::UpdateRecordsRequestPrivate(
    const UpdateRecordsRequestPrivate &other, UpdateRecordsRequest * const q)
    : CognitoSyncRequestPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws
