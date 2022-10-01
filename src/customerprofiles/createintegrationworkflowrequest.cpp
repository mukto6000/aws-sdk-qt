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

#include "createintegrationworkflowrequest.h"
#include "createintegrationworkflowrequest_p.h"
#include "createintegrationworkflowresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::CreateIntegrationWorkflowRequest
 * \brief The CreateIntegrationWorkflowRequest class provides an interface for CustomerProfiles CreateIntegrationWorkflow requests.
 *
 * \inmodule QtAwsCustomerProfiles
 *
 *  <fullname>Amazon Connect Customer Profiles</fullname>
 * 
 *  Welcome to the Amazon Connect Customer Profiles API Reference. This guide provides information about the Amazon Connect
 *  Customer Profiles API, including supported operations, data types, parameters, and
 * 
 *  schemas>
 * 
 *  Amazon Connect Customer Profiles is a unified customer profile for your contact center that has pre-built connectors
 *  powered by AppFlow that make it easy to combine customer information from third party applications, such as Salesforce
 *  (CRM), ServiceNow (ITSM), and your enterprise resource planning (ERP), with contact history from your Amazon Connect
 *  contact
 * 
 *  center>
 * 
 *  If you're new to Amazon Connect , you might find it helpful to also review the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/what-is-amazon-connect.html">Amazon Connect Administrator
 *
 * \sa CustomerProfilesClient::createIntegrationWorkflow
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIntegrationWorkflowRequest::CreateIntegrationWorkflowRequest(const CreateIntegrationWorkflowRequest &other)
    : CustomerProfilesRequest(new CreateIntegrationWorkflowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIntegrationWorkflowRequest object.
 */
CreateIntegrationWorkflowRequest::CreateIntegrationWorkflowRequest()
    : CustomerProfilesRequest(new CreateIntegrationWorkflowRequestPrivate(CustomerProfilesRequest::CreateIntegrationWorkflowAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIntegrationWorkflowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIntegrationWorkflowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIntegrationWorkflowRequest::response(QNetworkReply * const reply) const
{
    return new CreateIntegrationWorkflowResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::CreateIntegrationWorkflowRequestPrivate
 * \brief The CreateIntegrationWorkflowRequestPrivate class provides private implementation for CreateIntegrationWorkflowRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a CreateIntegrationWorkflowRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
CreateIntegrationWorkflowRequestPrivate::CreateIntegrationWorkflowRequestPrivate(
    const CustomerProfilesRequest::Action action, CreateIntegrationWorkflowRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIntegrationWorkflowRequest
 * class' copy constructor.
 */
CreateIntegrationWorkflowRequestPrivate::CreateIntegrationWorkflowRequestPrivate(
    const CreateIntegrationWorkflowRequestPrivate &other, CreateIntegrationWorkflowRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
