// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "mergeprofilesrequest.h"
#include "mergeprofilesrequest_p.h"
#include "mergeprofilesresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::MergeProfilesRequest
 * \brief The MergeProfilesRequest class provides an interface for CustomerProfiles MergeProfiles requests.
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
 * \sa CustomerProfilesClient::mergeProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
MergeProfilesRequest::MergeProfilesRequest(const MergeProfilesRequest &other)
    : CustomerProfilesRequest(new MergeProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a MergeProfilesRequest object.
 */
MergeProfilesRequest::MergeProfilesRequest()
    : CustomerProfilesRequest(new MergeProfilesRequestPrivate(CustomerProfilesRequest::MergeProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool MergeProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a MergeProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * MergeProfilesRequest::response(QNetworkReply * const reply) const
{
    return new MergeProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::MergeProfilesRequestPrivate
 * \brief The MergeProfilesRequestPrivate class provides private implementation for MergeProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a MergeProfilesRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
MergeProfilesRequestPrivate::MergeProfilesRequestPrivate(
    const CustomerProfilesRequest::Action action, MergeProfilesRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the MergeProfilesRequest
 * class' copy constructor.
 */
MergeProfilesRequestPrivate::MergeProfilesRequestPrivate(
    const MergeProfilesRequestPrivate &other, MergeProfilesRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
