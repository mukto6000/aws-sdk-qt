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

#include "getprofileobjecttypetemplaterequest.h"
#include "getprofileobjecttypetemplaterequest_p.h"
#include "getprofileobjecttypetemplateresponse.h"
#include "customerprofilesrequest_p.h"

namespace QtAws {
namespace CustomerProfiles {

/*!
 * \class QtAws::CustomerProfiles::GetProfileObjectTypeTemplateRequest
 * \brief The GetProfileObjectTypeTemplateRequest class provides an interface for CustomerProfiles GetProfileObjectTypeTemplate requests.
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
 * \sa CustomerProfilesClient::getProfileObjectTypeTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetProfileObjectTypeTemplateRequest::GetProfileObjectTypeTemplateRequest(const GetProfileObjectTypeTemplateRequest &other)
    : CustomerProfilesRequest(new GetProfileObjectTypeTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProfileObjectTypeTemplateRequest object.
 */
GetProfileObjectTypeTemplateRequest::GetProfileObjectTypeTemplateRequest()
    : CustomerProfilesRequest(new GetProfileObjectTypeTemplateRequestPrivate(CustomerProfilesRequest::GetProfileObjectTypeTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetProfileObjectTypeTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProfileObjectTypeTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProfileObjectTypeTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetProfileObjectTypeTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::CustomerProfiles::GetProfileObjectTypeTemplateRequestPrivate
 * \brief The GetProfileObjectTypeTemplateRequestPrivate class provides private implementation for GetProfileObjectTypeTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsCustomerProfiles
 */

/*!
 * Constructs a GetProfileObjectTypeTemplateRequestPrivate object for CustomerProfiles \a action,
 * with public implementation \a q.
 */
GetProfileObjectTypeTemplateRequestPrivate::GetProfileObjectTypeTemplateRequestPrivate(
    const CustomerProfilesRequest::Action action, GetProfileObjectTypeTemplateRequest * const q)
    : CustomerProfilesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProfileObjectTypeTemplateRequest
 * class' copy constructor.
 */
GetProfileObjectTypeTemplateRequestPrivate::GetProfileObjectTypeTemplateRequestPrivate(
    const GetProfileObjectTypeTemplateRequestPrivate &other, GetProfileObjectTypeTemplateRequest * const q)
    : CustomerProfilesRequestPrivate(other, q)
{

}

} // namespace CustomerProfiles
} // namespace QtAws
