// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustomverificationemailtemplaterequest.h"
#include "deletecustomverificationemailtemplaterequest_p.h"
#include "deletecustomverificationemailtemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteCustomVerificationEmailTemplateRequest
 * \brief The DeleteCustomVerificationEmailTemplateRequest class provides an interface for Ses DeleteCustomVerificationEmailTemplate requests.
 *
 * \inmodule QtAwsSes
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
 * \sa SesClient::deleteCustomVerificationEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCustomVerificationEmailTemplateRequest::DeleteCustomVerificationEmailTemplateRequest(const DeleteCustomVerificationEmailTemplateRequest &other)
    : SesRequest(new DeleteCustomVerificationEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCustomVerificationEmailTemplateRequest object.
 */
DeleteCustomVerificationEmailTemplateRequest::DeleteCustomVerificationEmailTemplateRequest()
    : SesRequest(new DeleteCustomVerificationEmailTemplateRequestPrivate(SesRequest::DeleteCustomVerificationEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCustomVerificationEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCustomVerificationEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCustomVerificationEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCustomVerificationEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DeleteCustomVerificationEmailTemplateRequestPrivate
 * \brief The DeleteCustomVerificationEmailTemplateRequestPrivate class provides private implementation for DeleteCustomVerificationEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteCustomVerificationEmailTemplateRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteCustomVerificationEmailTemplateRequestPrivate::DeleteCustomVerificationEmailTemplateRequestPrivate(
    const SesRequest::Action action, DeleteCustomVerificationEmailTemplateRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCustomVerificationEmailTemplateRequest
 * class' copy constructor.
 */
DeleteCustomVerificationEmailTemplateRequestPrivate::DeleteCustomVerificationEmailTemplateRequestPrivate(
    const DeleteCustomVerificationEmailTemplateRequestPrivate &other, DeleteCustomVerificationEmailTemplateRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
