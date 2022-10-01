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

#include "enableapplicationlayerautomaticresponserequest.h"
#include "enableapplicationlayerautomaticresponserequest_p.h"
#include "enableapplicationlayerautomaticresponseresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::EnableApplicationLayerAutomaticResponseRequest
 * \brief The EnableApplicationLayerAutomaticResponseRequest class provides an interface for Shield EnableApplicationLayerAutomaticResponse requests.
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
 * \sa ShieldClient::enableApplicationLayerAutomaticResponse
 */

/*!
 * Constructs a copy of \a other.
 */
EnableApplicationLayerAutomaticResponseRequest::EnableApplicationLayerAutomaticResponseRequest(const EnableApplicationLayerAutomaticResponseRequest &other)
    : ShieldRequest(new EnableApplicationLayerAutomaticResponseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableApplicationLayerAutomaticResponseRequest object.
 */
EnableApplicationLayerAutomaticResponseRequest::EnableApplicationLayerAutomaticResponseRequest()
    : ShieldRequest(new EnableApplicationLayerAutomaticResponseRequestPrivate(ShieldRequest::EnableApplicationLayerAutomaticResponseAction, this))
{

}

/*!
 * \reimp
 */
bool EnableApplicationLayerAutomaticResponseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableApplicationLayerAutomaticResponseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableApplicationLayerAutomaticResponseRequest::response(QNetworkReply * const reply) const
{
    return new EnableApplicationLayerAutomaticResponseResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::EnableApplicationLayerAutomaticResponseRequestPrivate
 * \brief The EnableApplicationLayerAutomaticResponseRequestPrivate class provides private implementation for EnableApplicationLayerAutomaticResponseRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a EnableApplicationLayerAutomaticResponseRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
EnableApplicationLayerAutomaticResponseRequestPrivate::EnableApplicationLayerAutomaticResponseRequestPrivate(
    const ShieldRequest::Action action, EnableApplicationLayerAutomaticResponseRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableApplicationLayerAutomaticResponseRequest
 * class' copy constructor.
 */
EnableApplicationLayerAutomaticResponseRequestPrivate::EnableApplicationLayerAutomaticResponseRequestPrivate(
    const EnableApplicationLayerAutomaticResponseRequestPrivate &other, EnableApplicationLayerAutomaticResponseRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
