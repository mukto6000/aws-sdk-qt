/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatedomaincontactprivacyrequest.h"
#include "updatedomaincontactprivacyrequest_p.h"
#include "updatedomaincontactprivacyresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/**
 * @class  UpdateDomainContactPrivacyRequest
 *
 * @brief  Implements Route53Domains UpdateDomainContactPrivacy requests.
 *
 * @see    Route53DomainsClient::updateDomainContactPrivacy
 */

/**
 * @brief  Constructs a new UpdateDomainContactPrivacyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDomainContactPrivacyRequest::UpdateDomainContactPrivacyRequest(const UpdateDomainContactPrivacyRequest &other)
    : Route53DomainsRequest(new UpdateDomainContactPrivacyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDomainContactPrivacyRequest object.
 */
UpdateDomainContactPrivacyRequest::UpdateDomainContactPrivacyRequest()
    : Route53DomainsRequest(new UpdateDomainContactPrivacyRequestPrivate(Route53DomainsRequest::UpdateDomainContactPrivacyAction, this))
{

}

bool UpdateDomainContactPrivacyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDomainContactPrivacyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDomainContactPrivacyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainContactPrivacyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainContactPrivacyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDomainContactPrivacyRequestPrivate
 *
 * @brief  Private implementation for UpdateDomainContactPrivacyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainContactPrivacyRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public UpdateDomainContactPrivacyRequest instance.
 */
UpdateDomainContactPrivacyRequestPrivate::UpdateDomainContactPrivacyRequestPrivate(
    const Route53DomainsRequest::Action action, UpdateDomainContactPrivacyRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainContactPrivacyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainContactPrivacyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDomainContactPrivacyRequest instance.
 */
UpdateDomainContactPrivacyRequestPrivate::UpdateDomainContactPrivacyRequestPrivate(
    const UpdateDomainContactPrivacyRequestPrivate &other, UpdateDomainContactPrivacyRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws