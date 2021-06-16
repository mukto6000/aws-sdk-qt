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

#include "gettemplaterequest.h"
#include "gettemplaterequest_p.h"
#include "gettemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::GetTemplateRequest
 * \brief The GetTemplateRequest class provides an interface for SES GetTemplate requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::getTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetTemplateRequest::GetTemplateRequest(const GetTemplateRequest &other)
    : SesRequest(new GetTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTemplateRequest object.
 */
GetTemplateRequest::GetTemplateRequest()
    : SesRequest(new GetTemplateRequestPrivate(SesRequest::GetTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::SES::GetTemplateRequestPrivate
 * \brief The GetTemplateRequestPrivate class provides private implementation for GetTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a GetTemplateRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetTemplateRequestPrivate::GetTemplateRequestPrivate(
    const SesRequest::Action action, GetTemplateRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTemplateRequest
 * class' copy constructor.
 */
GetTemplateRequestPrivate::GetTemplateRequestPrivate(
    const GetTemplateRequestPrivate &other, GetTemplateRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
