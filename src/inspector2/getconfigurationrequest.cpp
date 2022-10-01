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

#include "getconfigurationrequest.h"
#include "getconfigurationrequest_p.h"
#include "getconfigurationresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::GetConfigurationRequest
 * \brief The GetConfigurationRequest class provides an interface for Inspector2 GetConfiguration requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::getConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetConfigurationRequest::GetConfigurationRequest(const GetConfigurationRequest &other)
    : Inspector2Request(new GetConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConfigurationRequest object.
 */
GetConfigurationRequest::GetConfigurationRequest()
    : Inspector2Request(new GetConfigurationRequestPrivate(Inspector2Request::GetConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::GetConfigurationRequestPrivate
 * \brief The GetConfigurationRequestPrivate class provides private implementation for GetConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a GetConfigurationRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
GetConfigurationRequestPrivate::GetConfigurationRequestPrivate(
    const Inspector2Request::Action action, GetConfigurationRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConfigurationRequest
 * class' copy constructor.
 */
GetConfigurationRequestPrivate::GetConfigurationRequestPrivate(
    const GetConfigurationRequestPrivate &other, GetConfigurationRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
