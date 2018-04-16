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

#include "deletereportdefinitionrequest.h"
#include "deletereportdefinitionrequest_p.h"
#include "deletereportdefinitionresponse.h"
#include "costandusagereportservicerequest_p.h"

namespace QtAws {
namespace CostandUsageReportService {

/*!
 * \class QtAws::CostandUsageReportService::DeleteReportDefinitionRequest
 *
 * \brief The DeleteReportDefinitionRequest class encapsulates CostandUsageReportService DeleteReportDefinition requests.
 *
 * \ingroup CostandUsageReportService
 *
 *
 * \sa CostandUsageReportServiceClient::deleteReportDefinition
 */

/*!
 * @brief  Constructs a new DeleteReportDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReportDefinitionRequest::DeleteReportDefinitionRequest(const DeleteReportDefinitionRequest &other)
    : CostandUsageReportServiceRequest(new DeleteReportDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteReportDefinitionRequest object.
 */
DeleteReportDefinitionRequest::DeleteReportDefinitionRequest()
    : CostandUsageReportServiceRequest(new DeleteReportDefinitionRequestPrivate(CostandUsageReportServiceRequest::DeleteReportDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReportDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteReportDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReportDefinitionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CostandUsageReportServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReportDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReportDefinitionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteReportDefinitionRequestPrivate
 *
 * @brief  Private implementation for DeleteReportDefinitionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteReportDefinitionRequestPrivate object.
 *
 * @param  action  CostandUsageReportService action being performed.
 * @param  q       Pointer to this object's public DeleteReportDefinitionRequest instance.
 */
DeleteReportDefinitionRequestPrivate::DeleteReportDefinitionRequestPrivate(
    const CostandUsageReportServiceRequest::Action action, DeleteReportDefinitionRequest * const q)
    : CostandUsageReportServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteReportDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReportDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReportDefinitionRequest instance.
 */
DeleteReportDefinitionRequestPrivate::DeleteReportDefinitionRequestPrivate(
    const DeleteReportDefinitionRequestPrivate &other, DeleteReportDefinitionRequest * const q)
    : CostandUsageReportServiceRequestPrivate(other, q)
{

}

} // namespace CostandUsageReportService
} // namespace QtAws
