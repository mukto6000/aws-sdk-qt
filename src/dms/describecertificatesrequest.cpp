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

#include "describecertificatesrequest.h"
#include "describecertificatesrequest_p.h"
#include "describecertificatesresponse.h"
#include "databasemigrationservicerequest_p.h"

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeCertificatesRequest
 *
 * @brief  Implements DatabaseMigrationService DescribeCertificates requests.
 *
 * @see    DatabaseMigrationServiceClient::describeCertificates
 */

/**
 * @brief  Constructs a new DescribeCertificatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCertificatesRequest::DescribeCertificatesRequest(const DescribeCertificatesRequest &other)
    : DatabaseMigrationServiceRequest(new DescribeCertificatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCertificatesRequest object.
 */
DescribeCertificatesRequest::DescribeCertificatesRequest()
    : DatabaseMigrationServiceRequest(new DescribeCertificatesRequestPrivate(DatabaseMigrationServiceRequest::DescribeCertificatesAction, this))
{

}

bool DescribeCertificatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCertificatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCertificatesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DatabaseMigrationServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCertificatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCertificatesRequestPrivate
 *
 * @brief  Private implementation for DescribeCertificatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificatesRequestPrivate object.
 *
 * @param  action  DatabaseMigrationService action being performed.
 * @param  q       Pointer to this object's public DescribeCertificatesRequest instance.
 */
DescribeCertificatesRequestPrivate::DescribeCertificatesRequestPrivate(
    const DatabaseMigrationServiceRequest::Action action, DescribeCertificatesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCertificatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCertificatesRequest instance.
 */
DescribeCertificatesRequestPrivate::DescribeCertificatesRequestPrivate(
    const DescribeCertificatesRequestPrivate &other, DescribeCertificatesRequest * const q)
    : DatabaseMigrationServiceRequestPrivate(other, q)
{

}

} // namespace DatabaseMigrationService
} // namespace QtAws