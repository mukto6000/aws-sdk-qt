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

#include "getexportrequest.h"
#include "getexportrequest_p.h"
#include "getexportresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetExportRequest
 *
 * @brief  Implements LexModelBuildingService GetExport requests.
 *
 * @see    LexModelBuildingServiceClient::getExport
 */

/**
 * @brief  Constructs a new GetExportRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetExportRequest::GetExportRequest(const GetExportRequest &other)
    : LexModelBuildingServiceRequest(new GetExportRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetExportRequest object.
 */
GetExportRequest::GetExportRequest()
    : LexModelBuildingServiceRequest(new GetExportRequestPrivate(LexModelBuildingServiceRequest::GetExportAction, this))
{

}

bool GetExportRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetExportResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetExportResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExportRequest::response(QNetworkReply * const reply) const
{
    return new GetExportResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetExportRequestPrivate
 *
 * @brief  Private implementation for GetExportRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetExportRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetExportRequest instance.
 */
GetExportRequestPrivate::GetExportRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetExportRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetExportRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetExportRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetExportRequest instance.
 */
GetExportRequestPrivate::GetExportRequestPrivate(
    const GetExportRequestPrivate &other, GetExportRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws