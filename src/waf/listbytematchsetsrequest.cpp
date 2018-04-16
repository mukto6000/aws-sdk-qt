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

#include "listbytematchsetsrequest.h"
#include "listbytematchsetsrequest_p.h"
#include "listbytematchsetsresponse.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace WAF {

/*!
 * \class QtAws::WAF::ListByteMatchSetsRequest
 *
 * \brief The ListByteMatchSetsRequest class encapsulates WAF ListByteMatchSets requests.
 *
 * \ingroup WAF
 *
 *  This is the <i>AWS WAF API Reference</i> for using AWS WAF with Amazon CloudFront. The AWS WAF actions and data types
 *  listed in the reference are available for protecting Amazon CloudFront distributions. You can use these actions and data
 *  types via the endpoint <i>waf.amazonaws.com</i>. This guide is for developers who need detailed information about the
 *  AWS WAF API actions, data types, and errors. For detailed information about AWS WAF features and an overview of how to
 *  use the AWS WAF API, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF Developer
 *
 * \sa WAFClient::listByteMatchSets
 */

/*!
 * @brief  Constructs a new ListByteMatchSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListByteMatchSetsRequest::ListByteMatchSetsRequest(const ListByteMatchSetsRequest &other)
    : WAFRequest(new ListByteMatchSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListByteMatchSetsRequest object.
 */
ListByteMatchSetsRequest::ListByteMatchSetsRequest()
    : WAFRequest(new ListByteMatchSetsRequestPrivate(WAFRequest::ListByteMatchSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListByteMatchSetsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListByteMatchSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListByteMatchSetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WAFClient::send
 */
QtAws::Core::AwsAbstractResponse * ListByteMatchSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListByteMatchSetsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListByteMatchSetsRequestPrivate
 *
 * @brief  Private implementation for ListByteMatchSetsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListByteMatchSetsRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public ListByteMatchSetsRequest instance.
 */
ListByteMatchSetsRequestPrivate::ListByteMatchSetsRequestPrivate(
    const WAFRequest::Action action, ListByteMatchSetsRequest * const q)
    : WAFRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListByteMatchSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListByteMatchSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListByteMatchSetsRequest instance.
 */
ListByteMatchSetsRequestPrivate::ListByteMatchSetsRequestPrivate(
    const ListByteMatchSetsRequestPrivate &other, ListByteMatchSetsRequest * const q)
    : WAFRequestPrivate(other, q)
{

}

} // namespace WAF
} // namespace QtAws
