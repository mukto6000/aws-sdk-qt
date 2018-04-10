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

#include "describevolumesrequest.h"
#include "describevolumesrequest_p.h"
#include "describevolumesresponse.h"
#include "opsworksrequest_p.h"

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeVolumesRequest
 *
 * @brief  Implements OpsWorks DescribeVolumes requests.
 *
 * @see    OpsWorksClient::describeVolumes
 */

/**
 * @brief  Constructs a new DescribeVolumesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeVolumesRequest::DescribeVolumesRequest(const DescribeVolumesRequest &other)
    : OpsWorksRequest(new DescribeVolumesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeVolumesRequest object.
 */
DescribeVolumesRequest::DescribeVolumesRequest()
    : OpsWorksRequest(new DescribeVolumesRequestPrivate(OpsWorksRequest::DescribeVolumesAction, this))
{

}

bool DescribeVolumesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeVolumesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeVolumesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeVolumesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeVolumesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeVolumesRequestPrivate
 *
 * @brief  Private implementation for DescribeVolumesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVolumesRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public DescribeVolumesRequest instance.
 */
DescribeVolumesRequestPrivate::DescribeVolumesRequestPrivate(
    const OpsWorksRequest::Action action, DescribeVolumesRequest * const q)
    : OpsWorksRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVolumesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeVolumesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeVolumesRequest instance.
 */
DescribeVolumesRequestPrivate::DescribeVolumesRequestPrivate(
    const DescribeVolumesRequestPrivate &other, DescribeVolumesRequest * const q)
    : OpsWorksRequestPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace QtAws