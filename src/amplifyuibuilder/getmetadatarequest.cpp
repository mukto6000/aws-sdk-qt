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

#include "getmetadatarequest.h"
#include "getmetadatarequest_p.h"
#include "getmetadataresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::GetMetadataRequest
 * \brief The GetMetadataRequest class provides an interface for AmplifyUIBuilder GetMetadata requests.
 *
 * \inmodule QtAwsAmplifyUIBuilder
 *
 *  The Amplify UI Builder API provides a programmatic interface for creating and configuring user interface (UI) component
 *  libraries and themes for use in your Amplify applications. You can then connect these UI components to an application's
 *  backend Amazon Web Services
 * 
 *  resources>
 * 
 *  You can also use the Amplify Studio visual designer to create UI components and model data for an app. For more
 *  information, see <a href="https://docs.amplify.aws/console/adminui/intro">Introduction</a> in the <i>Amplify
 * 
 *  Docs</i>>
 * 
 *  The Amplify Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development.
 *  For more information, see the <a href="https://docs.amplify.aws/">Amplify Framework</a>. For more information about
 *  deploying an Amplify application to Amazon Web Services, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify User
 *
 * \sa AmplifyUIBuilderClient::getMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
GetMetadataRequest::GetMetadataRequest(const GetMetadataRequest &other)
    : AmplifyUIBuilderRequest(new GetMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMetadataRequest object.
 */
GetMetadataRequest::GetMetadataRequest()
    : AmplifyUIBuilderRequest(new GetMetadataRequestPrivate(AmplifyUIBuilderRequest::GetMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool GetMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMetadataRequest::response(QNetworkReply * const reply) const
{
    return new GetMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::GetMetadataRequestPrivate
 * \brief The GetMetadataRequestPrivate class provides private implementation for GetMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a GetMetadataRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
GetMetadataRequestPrivate::GetMetadataRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, GetMetadataRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMetadataRequest
 * class' copy constructor.
 */
GetMetadataRequestPrivate::GetMetadataRequestPrivate(
    const GetMetadataRequestPrivate &other, GetMetadataRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws
