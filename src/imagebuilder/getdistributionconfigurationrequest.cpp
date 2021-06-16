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

#include "getdistributionconfigurationrequest.h"
#include "getdistributionconfigurationrequest_p.h"
#include "getdistributionconfigurationresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetDistributionConfigurationRequest
 * \brief The GetDistributionConfigurationRequest class provides an interface for imagebuilder GetDistributionConfiguration requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getDistributionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetDistributionConfigurationRequest::GetDistributionConfigurationRequest(const GetDistributionConfigurationRequest &other)
    : imagebuilderRequest(new GetDistributionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDistributionConfigurationRequest object.
 */
GetDistributionConfigurationRequest::GetDistributionConfigurationRequest()
    : imagebuilderRequest(new GetDistributionConfigurationRequestPrivate(imagebuilderRequest::GetDistributionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetDistributionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDistributionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDistributionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetDistributionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::GetDistributionConfigurationRequestPrivate
 * \brief The GetDistributionConfigurationRequestPrivate class provides private implementation for GetDistributionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetDistributionConfigurationRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
GetDistributionConfigurationRequestPrivate::GetDistributionConfigurationRequestPrivate(
    const imagebuilderRequest::Action action, GetDistributionConfigurationRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDistributionConfigurationRequest
 * class' copy constructor.
 */
GetDistributionConfigurationRequestPrivate::GetDistributionConfigurationRequestPrivate(
    const GetDistributionConfigurationRequestPrivate &other, GetDistributionConfigurationRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
