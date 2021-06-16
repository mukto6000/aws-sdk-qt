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

#include "updateconnectorprofilerequest.h"
#include "updateconnectorprofilerequest_p.h"
#include "updateconnectorprofileresponse.h"
#include "appflowrequest_p.h"

namespace QtAws {
namespace Appflow {

/*!
 * \class QtAws::Appflow::UpdateConnectorProfileRequest
 * \brief The UpdateConnectorProfileRequest class provides an interface for Appflow UpdateConnectorProfile requests.
 *
 * \inmodule QtAwsAppflow
 *
 *  Welcome to the Amazon AppFlow API reference. This guide is for developers who need detailed information about the Amazon
 *  AppFlow API operations, data types, and errors.
 * 
 *  </p
 * 
 *  Amazon AppFlow is a fully managed integration service that enables you to securely transfer data between software as a
 *  service (SaaS) applications like Salesforce, Marketo, Slack, and ServiceNow, and AWS services like Amazon S3 and Amazon
 *  Redshift.
 * 
 *  </p
 * 
 *  Use the following links to get started on the Amazon AppFlow
 * 
 *  API> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/API_Operations.html">Actions</a>: An alphabetical list of
 *  all Amazon AppFlow API
 * 
 *  operations> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/API_Types.html">Data types</a>: An alphabetical list of
 *  all Amazon AppFlow data
 * 
 *  types> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/CommonParameters.html">Common parameters</a>: Parameters
 *  that all Query operations can
 * 
 *  use> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/appflow/1.0/APIReference/CommonErrors.html">Common errors</a>: Client and server
 *  errors that all operations can
 * 
 *  return> </li> </ul>
 * 
 *  If you're new to Amazon AppFlow, we recommend that you review the <a
 *  href="https://docs.aws.amazon.com/appflow/latest/userguide/what-is-appflow.html">Amazon AppFlow User
 * 
 *  Guide</a>>
 * 
 *  Amazon AppFlow API users can use vendor-specific mechanisms for OAuth, and include applicable OAuth attributes (such as
 *  <code>auth-code</code> and <code>redirecturi</code>) with the connector-specific <code>ConnectorProfileProperties</code>
 *  when creating a new connector profile using Amazon AppFlow API operations. For example, Salesforce users can refer to
 *  the <a href="https://help.salesforce.com/articleView?id=remoteaccess_authenticate.htm"> <i>Authorize Apps with OAuth</i>
 *  </a>
 *
 * \sa AppflowClient::updateConnectorProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConnectorProfileRequest::UpdateConnectorProfileRequest(const UpdateConnectorProfileRequest &other)
    : AppflowRequest(new UpdateConnectorProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConnectorProfileRequest object.
 */
UpdateConnectorProfileRequest::UpdateConnectorProfileRequest()
    : AppflowRequest(new UpdateConnectorProfileRequestPrivate(AppflowRequest::UpdateConnectorProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConnectorProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConnectorProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConnectorProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConnectorProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Appflow::UpdateConnectorProfileRequestPrivate
 * \brief The UpdateConnectorProfileRequestPrivate class provides private implementation for UpdateConnectorProfileRequest.
 * \internal
 *
 * \inmodule QtAwsAppflow
 */

/*!
 * Constructs a UpdateConnectorProfileRequestPrivate object for Appflow \a action,
 * with public implementation \a q.
 */
UpdateConnectorProfileRequestPrivate::UpdateConnectorProfileRequestPrivate(
    const AppflowRequest::Action action, UpdateConnectorProfileRequest * const q)
    : AppflowRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConnectorProfileRequest
 * class' copy constructor.
 */
UpdateConnectorProfileRequestPrivate::UpdateConnectorProfileRequestPrivate(
    const UpdateConnectorProfileRequestPrivate &other, UpdateConnectorProfileRequest * const q)
    : AppflowRequestPrivate(other, q)
{

}

} // namespace Appflow
} // namespace QtAws
