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

#include "stopimagebuilderrequest.h"
#include "stopimagebuilderrequest_p.h"
#include "stopimagebuilderresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::StopImageBuilderRequest
 * \brief The StopImageBuilderRequest class provides an interface for AppStream StopImageBuilder requests.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on demand.
 * 
 *  </p <note>
 * 
 *  You can call the AppStream 2.0 API operations by using an interface VPC endpoint (interface endpoint). For more
 *  information, see <a
 *  href="https://docs.aws.amazon.com/appstream2/latest/developerguide/access-api-cli-through-interface-vpc-endpoint.html">Access
 *  AppStream 2.0 API Operations and CLI Commands Through an Interface VPC Endpoint</a> in the <i>Amazon AppStream 2.0
 *  Administration
 * 
 *  Guide</i>> </note>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 *
 * \sa AppStreamClient::stopImageBuilder
 */

/*!
 * Constructs a copy of \a other.
 */
StopImageBuilderRequest::StopImageBuilderRequest(const StopImageBuilderRequest &other)
    : AppStreamRequest(new StopImageBuilderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopImageBuilderRequest object.
 */
StopImageBuilderRequest::StopImageBuilderRequest()
    : AppStreamRequest(new StopImageBuilderRequestPrivate(AppStreamRequest::StopImageBuilderAction, this))
{

}

/*!
 * \reimp
 */
bool StopImageBuilderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopImageBuilderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopImageBuilderRequest::response(QNetworkReply * const reply) const
{
    return new StopImageBuilderResponse(*this, reply);
}

/*!
 * \class QtAws::AppStream::StopImageBuilderRequestPrivate
 * \brief The StopImageBuilderRequestPrivate class provides private implementation for StopImageBuilderRequest.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a StopImageBuilderRequestPrivate object for AppStream \a action,
 * with public implementation \a q.
 */
StopImageBuilderRequestPrivate::StopImageBuilderRequestPrivate(
    const AppStreamRequest::Action action, StopImageBuilderRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopImageBuilderRequest
 * class' copy constructor.
 */
StopImageBuilderRequestPrivate::StopImageBuilderRequestPrivate(
    const StopImageBuilderRequestPrivate &other, StopImageBuilderRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
