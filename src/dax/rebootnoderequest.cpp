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

#include "rebootnoderequest.h"
#include "rebootnoderequest_p.h"
#include "rebootnoderesponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::RebootNodeRequest
 *
 * \brief The RebootNodeRequest class encapsulates DAX RebootNode requests.
 *
 * \ingroup DAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DAXClient::rebootNode
 */

/*!
 * @brief  Constructs a new RebootNodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebootNodeRequest::RebootNodeRequest(const RebootNodeRequest &other)
    : DAXRequest(new RebootNodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RebootNodeRequest object.
 */
RebootNodeRequest::RebootNodeRequest()
    : DAXRequest(new RebootNodeRequestPrivate(DAXRequest::RebootNodeAction, this))
{

}

/*!
 * \reimp
 */
bool RebootNodeRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RebootNodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebootNodeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DAXClient::send
 */
QtAws::Core::AwsAbstractResponse * RebootNodeRequest::response(QNetworkReply * const reply) const
{
    return new RebootNodeResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RebootNodeRequestPrivate
 *
 * @brief  Private implementation for RebootNodeRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RebootNodeRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public RebootNodeRequest instance.
 */
RebootNodeRequestPrivate::RebootNodeRequestPrivate(
    const DAXRequest::Action action, RebootNodeRequest * const q)
    : DAXRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RebootNodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebootNodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebootNodeRequest instance.
 */
RebootNodeRequestPrivate::RebootNodeRequestPrivate(
    const RebootNodeRequestPrivate &other, RebootNodeRequest * const q)
    : DAXRequestPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
