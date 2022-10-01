// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkflowrequest.h"
#include "deleteworkflowrequest_p.h"
#include "deleteworkflowresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::DeleteWorkflowRequest
 * \brief The DeleteWorkflowRequest class provides an interface for CustomerProfiles DeleteWorkflow requests.
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
 * \sa CustomerProfilesClient::deleteWorkflow
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkflowRequest::DeleteWorkflowRequest(const DeleteWorkflowRequest &other)
    : CustomerProfilesRequest(new DeleteWorkflowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkflowRequest object.
 */
DeleteWorkflowRequest::DeleteWorkflowRequest()
    : CustomerProfilesRequest(new DeleteWorkflowRequestPrivate(CustomerProfilesRequest::DeleteWorkflowAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkflowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkflowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkflowRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkflowResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::DeleteWorkflowRequestPrivate
 * \brief The DeleteWorkflowRequestPrivate class provides private implementation for DeleteWorkflowRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a DeleteWorkflowRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
DeleteWorkflowRequestPrivate::DeleteWorkflowRequestPrivate(
    const CustomerProfilesRequest::Action action, DeleteWorkflowRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkflowRequest
 * class' copy constructor.
 */
DeleteWorkflowRequestPrivate::DeleteWorkflowRequestPrivate(
    const DeleteWorkflowRequestPrivate &other, DeleteWorkflowRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
