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

#include "describedirectoryconfigsrequest.h"
#include "describedirectoryconfigsrequest_p.h"
#include "describedirectoryconfigsresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::DescribeDirectoryConfigsRequest
 *
 * \brief The DescribeDirectoryConfigsRequest class encapsulates AppStream DescribeDirectoryConfigs requests.
 *
 * \ingroup AppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::describeDirectoryConfigs
 */

/*!
 * @brief  Constructs a new DescribeDirectoryConfigsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDirectoryConfigsRequest::DescribeDirectoryConfigsRequest(const DescribeDirectoryConfigsRequest &other)
    : AppStreamRequest(new DescribeDirectoryConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeDirectoryConfigsRequest object.
 */
DescribeDirectoryConfigsRequest::DescribeDirectoryConfigsRequest()
    : AppStreamRequest(new DescribeDirectoryConfigsRequestPrivate(AppStreamRequest::DescribeDirectoryConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDirectoryConfigsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeDirectoryConfigsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDirectoryConfigsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDirectoryConfigsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDirectoryConfigsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeDirectoryConfigsRequestPrivate
 *
 * @brief  Private implementation for DescribeDirectoryConfigsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeDirectoryConfigsRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DescribeDirectoryConfigsRequest instance.
 */
DescribeDirectoryConfigsRequestPrivate::DescribeDirectoryConfigsRequestPrivate(
    const AppStreamRequest::Action action, DescribeDirectoryConfigsRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeDirectoryConfigsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDirectoryConfigsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDirectoryConfigsRequest instance.
 */
DescribeDirectoryConfigsRequestPrivate::DescribeDirectoryConfigsRequestPrivate(
    const DescribeDirectoryConfigsRequestPrivate &other, DescribeDirectoryConfigsRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
