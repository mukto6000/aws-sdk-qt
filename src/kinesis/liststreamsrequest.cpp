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

#include "liststreamsrequest.h"
#include "liststreamsrequest_p.h"
#include "liststreamsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListStreamsRequest
 *
 * \brief The ListStreamsRequest class encapsulates Kinesis ListStreams requests.
 *
 * \ingroup Kinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listStreams
 */

/*!
 * @brief  Constructs a new ListStreamsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListStreamsRequest::ListStreamsRequest(const ListStreamsRequest &other)
    : KinesisRequest(new ListStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListStreamsRequest object.
 */
ListStreamsRequest::ListStreamsRequest()
    : KinesisRequest(new ListStreamsRequestPrivate(KinesisRequest::ListStreamsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListStreamsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListStreamsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamsRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListStreamsRequestPrivate
 *
 * @brief  Private implementation for ListStreamsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListStreamsRequestPrivate object.
 *
 * @param  action  Kinesis action being performed.
 * @param  q       Pointer to this object's public ListStreamsRequest instance.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const KinesisRequest::Action action, ListStreamsRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListStreamsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListStreamsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListStreamsRequest instance.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const ListStreamsRequestPrivate &other, ListStreamsRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
