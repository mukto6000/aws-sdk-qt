/*
    Copyright 2013-2020 Paul Colby

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

#include "deletesecurityconfigurationrequest.h"
#include "deletesecurityconfigurationrequest_p.h"
#include "deletesecurityconfigurationresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DeleteSecurityConfigurationRequest
 * \brief The DeleteSecurityConfigurationRequest class provides an interface for EMR DeleteSecurityConfiguration requests.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::deleteSecurityConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSecurityConfigurationRequest::DeleteSecurityConfigurationRequest(const DeleteSecurityConfigurationRequest &other)
    : EmrRequest(new DeleteSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSecurityConfigurationRequest object.
 */
DeleteSecurityConfigurationRequest::DeleteSecurityConfigurationRequest()
    : EmrRequest(new DeleteSecurityConfigurationRequestPrivate(EmrRequest::DeleteSecurityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSecurityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSecurityConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSecurityConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::EMR::DeleteSecurityConfigurationRequestPrivate
 * \brief The DeleteSecurityConfigurationRequestPrivate class provides private implementation for DeleteSecurityConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a DeleteSecurityConfigurationRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DeleteSecurityConfigurationRequestPrivate::DeleteSecurityConfigurationRequestPrivate(
    const EmrRequest::Action action, DeleteSecurityConfigurationRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSecurityConfigurationRequest
 * class' copy constructor.
 */
DeleteSecurityConfigurationRequestPrivate::DeleteSecurityConfigurationRequestPrivate(
    const DeleteSecurityConfigurationRequestPrivate &other, DeleteSecurityConfigurationRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
