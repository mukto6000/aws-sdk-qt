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

#include "describeconfigurationrevisionrequest.h"
#include "describeconfigurationrevisionrequest_p.h"
#include "describeconfigurationrevisionresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DescribeConfigurationRevisionRequest
 *
 * \brief The DescribeConfigurationRevisionRequest class encapsulates MQ DescribeConfigurationRevision requests.
 *
 * \ingroup MQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MQClient::describeConfigurationRevision
 */

/*!
 * @brief  Constructs a new DescribeConfigurationRevisionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeConfigurationRevisionRequest::DescribeConfigurationRevisionRequest(const DescribeConfigurationRevisionRequest &other)
    : MQRequest(new DescribeConfigurationRevisionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeConfigurationRevisionRequest object.
 */
DescribeConfigurationRevisionRequest::DescribeConfigurationRevisionRequest()
    : MQRequest(new DescribeConfigurationRevisionRequestPrivate(MQRequest::DescribeConfigurationRevisionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConfigurationRevisionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeConfigurationRevisionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeConfigurationRevisionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MQClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConfigurationRevisionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConfigurationRevisionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeConfigurationRevisionRequestPrivate
 *
 * @brief  Private implementation for DescribeConfigurationRevisionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationRevisionRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public DescribeConfigurationRevisionRequest instance.
 */
DescribeConfigurationRevisionRequestPrivate::DescribeConfigurationRevisionRequestPrivate(
    const MQRequest::Action action, DescribeConfigurationRevisionRequest * const q)
    : MQRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationRevisionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeConfigurationRevisionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeConfigurationRevisionRequest instance.
 */
DescribeConfigurationRevisionRequestPrivate::DescribeConfigurationRevisionRequestPrivate(
    const DescribeConfigurationRevisionRequestPrivate &other, DescribeConfigurationRevisionRequest * const q)
    : MQRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
