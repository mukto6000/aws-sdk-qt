/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletedatasetgrouprequest.h"
#include "deletedatasetgrouprequest_p.h"
#include "deletedatasetgroupresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteDatasetGroupRequest
 * \brief The DeleteDatasetGroupRequest class provides an interface for Forecast DeleteDatasetGroup requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteDatasetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatasetGroupRequest::DeleteDatasetGroupRequest(const DeleteDatasetGroupRequest &other)
    : ForecastRequest(new DeleteDatasetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatasetGroupRequest object.
 */
DeleteDatasetGroupRequest::DeleteDatasetGroupRequest()
    : ForecastRequest(new DeleteDatasetGroupRequestPrivate(ForecastRequest::DeleteDatasetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatasetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatasetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteDatasetGroupRequestPrivate
 * \brief The DeleteDatasetGroupRequestPrivate class provides private implementation for DeleteDatasetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteDatasetGroupRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteDatasetGroupRequestPrivate::DeleteDatasetGroupRequestPrivate(
    const ForecastRequest::Action action, DeleteDatasetGroupRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetGroupRequest
 * class' copy constructor.
 */
DeleteDatasetGroupRequestPrivate::DeleteDatasetGroupRequestPrivate(
    const DeleteDatasetGroupRequestPrivate &other, DeleteDatasetGroupRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
