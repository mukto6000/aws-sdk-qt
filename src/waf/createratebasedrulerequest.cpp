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

#include "createratebasedrulerequest.h"
#include "createratebasedrulerequest_p.h"
#include "createratebasedruleresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::CreateRateBasedRuleRequest
 * \brief The CreateRateBasedRuleRequest class provides an interface for WAF CreateRateBasedRule requests.
 *
 * \inmodule QtAwsWAF
 *
 *  <note>
 * 
 *  This is <b>AWS WAF Classic</b> documentation. For more information, see <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 * 
 *  guide>
 * 
 *  <b>For the latest version of AWS WAF</b>, use the AWS WAFV2 API and see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS WAF Developer Guide</a>. With the
 *  latest version, AWS WAF has a single set of endpoints for regional and global use.
 * 
 *  </p </note>
 * 
 *  This is the <i>AWS WAF Classic API Reference</i> for using AWS WAF Classic with Amazon CloudFront. The AWS WAF Classic
 *  actions and data types listed in the reference are available for protecting Amazon CloudFront distributions. You can use
 *  these actions and data types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed
 *  information about the AWS WAF Classic API actions, data types, and errors. For detailed information about AWS WAF
 *  Classic features and an overview of how to use the AWS WAF Classic API, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS WAF Classic</a> in the
 *  developer
 *
 * \sa WafClient::createRateBasedRule
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRateBasedRuleRequest::CreateRateBasedRuleRequest(const CreateRateBasedRuleRequest &other)
    : WafRequest(new CreateRateBasedRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRateBasedRuleRequest object.
 */
CreateRateBasedRuleRequest::CreateRateBasedRuleRequest()
    : WafRequest(new CreateRateBasedRuleRequestPrivate(WafRequest::CreateRateBasedRuleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRateBasedRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRateBasedRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRateBasedRuleRequest::response(QNetworkReply * const reply) const
{
    return new CreateRateBasedRuleResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::CreateRateBasedRuleRequestPrivate
 * \brief The CreateRateBasedRuleRequestPrivate class provides private implementation for CreateRateBasedRuleRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a CreateRateBasedRuleRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
CreateRateBasedRuleRequestPrivate::CreateRateBasedRuleRequestPrivate(
    const WafRequest::Action action, CreateRateBasedRuleRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRateBasedRuleRequest
 * class' copy constructor.
 */
CreateRateBasedRuleRequestPrivate::CreateRateBasedRuleRequestPrivate(
    const CreateRateBasedRuleRequestPrivate &other, CreateRateBasedRuleRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
