// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addprofilekeyrequest.h"
#include "addprofilekeyrequest_p.h"
#include "addprofilekeyresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::AddProfileKeyRequest
 * \brief The AddProfileKeyRequest class provides an interface for CustomerProfiles AddProfileKey requests.
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
 * \sa CustomerProfilesClient::addProfileKey
 */

/*!
 * Constructs a copy of \a other.
 */
AddProfileKeyRequest::AddProfileKeyRequest(const AddProfileKeyRequest &other)
    : CustomerProfilesRequest(new AddProfileKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddProfileKeyRequest object.
 */
AddProfileKeyRequest::AddProfileKeyRequest()
    : CustomerProfilesRequest(new AddProfileKeyRequestPrivate(CustomerProfilesRequest::AddProfileKeyAction, this))
{

}

/*!
 * \reimp
 */
bool AddProfileKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddProfileKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddProfileKeyRequest::response(QNetworkReply * const reply) const
{
    return new AddProfileKeyResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::AddProfileKeyRequestPrivate
 * \brief The AddProfileKeyRequestPrivate class provides private implementation for AddProfileKeyRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a AddProfileKeyRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
AddProfileKeyRequestPrivate::AddProfileKeyRequestPrivate(
    const CustomerProfilesRequest::Action action, AddProfileKeyRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddProfileKeyRequest
 * class' copy constructor.
 */
AddProfileKeyRequestPrivate::AddProfileKeyRequestPrivate(
    const AddProfileKeyRequestPrivate &other, AddProfileKeyRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
