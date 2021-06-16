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

#include "deletesqlinjectionmatchsetrequest.h"
#include "deletesqlinjectionmatchsetrequest_p.h"
#include "deletesqlinjectionmatchsetresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::DeleteSqlInjectionMatchSetRequest
 * \brief The DeleteSqlInjectionMatchSetRequest class provides an interface for WAF DeleteSqlInjectionMatchSet requests.
 *
 * \inmodule QtAwsWAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WafClient::deleteSqlInjectionMatchSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSqlInjectionMatchSetRequest::DeleteSqlInjectionMatchSetRequest(const DeleteSqlInjectionMatchSetRequest &other)
    : WafRequest(new DeleteSqlInjectionMatchSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSqlInjectionMatchSetRequest object.
 */
DeleteSqlInjectionMatchSetRequest::DeleteSqlInjectionMatchSetRequest()
    : WafRequest(new DeleteSqlInjectionMatchSetRequestPrivate(WafRequest::DeleteSqlInjectionMatchSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSqlInjectionMatchSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSqlInjectionMatchSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSqlInjectionMatchSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSqlInjectionMatchSetResponse(*this, reply);
}

/*!
 * \class QtAws::WAF::DeleteSqlInjectionMatchSetRequestPrivate
 * \brief The DeleteSqlInjectionMatchSetRequestPrivate class provides private implementation for DeleteSqlInjectionMatchSetRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a DeleteSqlInjectionMatchSetRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
DeleteSqlInjectionMatchSetRequestPrivate::DeleteSqlInjectionMatchSetRequestPrivate(
    const WafRequest::Action action, DeleteSqlInjectionMatchSetRequest * const q)
    : WafRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSqlInjectionMatchSetRequest
 * class' copy constructor.
 */
DeleteSqlInjectionMatchSetRequestPrivate::DeleteSqlInjectionMatchSetRequestPrivate(
    const DeleteSqlInjectionMatchSetRequestPrivate &other, DeleteSqlInjectionMatchSetRequest * const q)
    : WafRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
