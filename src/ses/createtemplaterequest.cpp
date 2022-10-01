// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtemplaterequest.h"
#include "createtemplaterequest_p.h"
#include "createtemplateresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateTemplateRequest
 * \brief The CreateTemplateRequest class provides an interface for Ses CreateTemplate requests.
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
 * \sa SesClient::createTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTemplateRequest::CreateTemplateRequest(const CreateTemplateRequest &other)
    : SesRequest(new CreateTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTemplateRequest object.
 */
CreateTemplateRequest::CreateTemplateRequest()
    : SesRequest(new CreateTemplateRequestPrivate(SesRequest::CreateTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::CreateTemplateRequestPrivate
 * \brief The CreateTemplateRequestPrivate class provides private implementation for CreateTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateTemplateRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
CreateTemplateRequestPrivate::CreateTemplateRequestPrivate(
    const SesRequest::Action action, CreateTemplateRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTemplateRequest
 * class' copy constructor.
 */
CreateTemplateRequestPrivate::CreateTemplateRequestPrivate(
    const CreateTemplateRequestPrivate &other, CreateTemplateRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
