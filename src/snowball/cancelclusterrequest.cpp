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

#include "cancelclusterrequest.h"
#include "cancelclusterrequest_p.h"
#include "cancelclusterresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::CancelClusterRequest
 *
 * \brief The CancelClusterRequest class encapsulates Snowball CancelCluster requests.
 *
 * \ingroup Snowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure appliances to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 *  here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 *  you to create and manage jobs for Snowball. To transfer data locally with a Snowball appliance, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 *  href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::cancelCluster
 */

/*!
 * @brief  Constructs a new CancelClusterRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CancelClusterRequest::CancelClusterRequest(const CancelClusterRequest &other)
    : SnowballRequest(new CancelClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CancelClusterRequest object.
 */
CancelClusterRequest::CancelClusterRequest()
    : SnowballRequest(new CancelClusterRequestPrivate(SnowballRequest::CancelClusterAction, this))
{

}

/*!
 * \reimp
 */
bool CancelClusterRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CancelClusterResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CancelClusterResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SnowballClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelClusterRequest::response(QNetworkReply * const reply) const
{
    return new CancelClusterResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CancelClusterRequestPrivate
 *
 * @brief  Private implementation for CancelClusterRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CancelClusterRequestPrivate object.
 *
 * @param  action  Snowball action being performed.
 * @param  q       Pointer to this object's public CancelClusterRequest instance.
 */
CancelClusterRequestPrivate::CancelClusterRequestPrivate(
    const SnowballRequest::Action action, CancelClusterRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CancelClusterRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CancelClusterRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CancelClusterRequest instance.
 */
CancelClusterRequestPrivate::CancelClusterRequestPrivate(
    const CancelClusterRequestPrivate &other, CancelClusterRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
