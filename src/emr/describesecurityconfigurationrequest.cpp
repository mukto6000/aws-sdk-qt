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

#include "describesecurityconfigurationrequest.h"
#include "describesecurityconfigurationrequest_p.h"
#include "describesecurityconfigurationresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DescribeSecurityConfigurationRequest
 * \brief The DescribeSecurityConfigurationRequest class provides an interface for EMR DescribeSecurityConfiguration requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::describeSecurityConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSecurityConfigurationRequest::DescribeSecurityConfigurationRequest(const DescribeSecurityConfigurationRequest &other)
    : EmrRequest(new DescribeSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSecurityConfigurationRequest object.
 */
DescribeSecurityConfigurationRequest::DescribeSecurityConfigurationRequest()
    : EmrRequest(new DescribeSecurityConfigurationRequestPrivate(EmrRequest::DescribeSecurityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSecurityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSecurityConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSecurityConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::DescribeSecurityConfigurationRequestPrivate
 * \brief The DescribeSecurityConfigurationRequestPrivate class provides private implementation for DescribeSecurityConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a DescribeSecurityConfigurationRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DescribeSecurityConfigurationRequestPrivate::DescribeSecurityConfigurationRequestPrivate(
    const EmrRequest::Action action, DescribeSecurityConfigurationRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSecurityConfigurationRequest
 * class' copy constructor.
 */
DescribeSecurityConfigurationRequestPrivate::DescribeSecurityConfigurationRequestPrivate(
    const DescribeSecurityConfigurationRequestPrivate &other, DescribeSecurityConfigurationRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
