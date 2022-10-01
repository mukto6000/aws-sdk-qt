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

#include "disableproactiveengagementrequest.h"
#include "disableproactiveengagementrequest_p.h"
#include "disableproactiveengagementresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisableProactiveEngagementRequest
 * \brief The DisableProactiveEngagementRequest class provides an interface for Shield DisableProactiveEngagement requests.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::disableProactiveEngagement
 */

/*!
 * Constructs a copy of \a other.
 */
DisableProactiveEngagementRequest::DisableProactiveEngagementRequest(const DisableProactiveEngagementRequest &other)
    : ShieldRequest(new DisableProactiveEngagementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableProactiveEngagementRequest object.
 */
DisableProactiveEngagementRequest::DisableProactiveEngagementRequest()
    : ShieldRequest(new DisableProactiveEngagementRequestPrivate(ShieldRequest::DisableProactiveEngagementAction, this))
{

}

/*!
 * \reimp
 */
bool DisableProactiveEngagementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableProactiveEngagementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableProactiveEngagementRequest::response(QNetworkReply * const reply) const
{
    return new DisableProactiveEngagementResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DisableProactiveEngagementRequestPrivate
 * \brief The DisableProactiveEngagementRequestPrivate class provides private implementation for DisableProactiveEngagementRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisableProactiveEngagementRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DisableProactiveEngagementRequestPrivate::DisableProactiveEngagementRequestPrivate(
    const ShieldRequest::Action action, DisableProactiveEngagementRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableProactiveEngagementRequest
 * class' copy constructor.
 */
DisableProactiveEngagementRequestPrivate::DisableProactiveEngagementRequestPrivate(
    const DisableProactiveEngagementRequestPrivate &other, DisableProactiveEngagementRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
