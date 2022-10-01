// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testrenderemailtemplaterequest.h"
#include "testrenderemailtemplaterequest_p.h"
#include "testrenderemailtemplateresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::TestRenderEmailTemplateRequest
 * \brief The TestRenderEmailTemplateRequest class provides an interface for SESv2 TestRenderEmailTemplate requests.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::testRenderEmailTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
TestRenderEmailTemplateRequest::TestRenderEmailTemplateRequest(const TestRenderEmailTemplateRequest &other)
    : SESv2Request(new TestRenderEmailTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TestRenderEmailTemplateRequest object.
 */
TestRenderEmailTemplateRequest::TestRenderEmailTemplateRequest()
    : SESv2Request(new TestRenderEmailTemplateRequestPrivate(SESv2Request::TestRenderEmailTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool TestRenderEmailTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TestRenderEmailTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TestRenderEmailTemplateRequest::response(QNetworkReply * const reply) const
{
    return new TestRenderEmailTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::TestRenderEmailTemplateRequestPrivate
 * \brief The TestRenderEmailTemplateRequestPrivate class provides private implementation for TestRenderEmailTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a TestRenderEmailTemplateRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
TestRenderEmailTemplateRequestPrivate::TestRenderEmailTemplateRequestPrivate(
    const SESv2Request::Action action, TestRenderEmailTemplateRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TestRenderEmailTemplateRequest
 * class' copy constructor.
 */
TestRenderEmailTemplateRequestPrivate::TestRenderEmailTemplateRequestPrivate(
    const TestRenderEmailTemplateRequestPrivate &other, TestRenderEmailTemplateRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
