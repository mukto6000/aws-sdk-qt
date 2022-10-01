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

#include "describedatasetrequest.h"
#include "describedatasetrequest_p.h"
#include "describedatasetresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeDatasetRequest
 * \brief The DescribeDatasetRequest class provides an interface for Forecast DescribeDataset requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeDataset
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatasetRequest::DescribeDatasetRequest(const DescribeDatasetRequest &other)
    : ForecastRequest(new DescribeDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatasetRequest object.
 */
DescribeDatasetRequest::DescribeDatasetRequest()
    : ForecastRequest(new DescribeDatasetRequestPrivate(ForecastRequest::DescribeDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatasetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeDatasetRequestPrivate
 * \brief The DescribeDatasetRequestPrivate class provides private implementation for DescribeDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeDatasetRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeDatasetRequestPrivate::DescribeDatasetRequestPrivate(
    const ForecastRequest::Action action, DescribeDatasetRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatasetRequest
 * class' copy constructor.
 */
DescribeDatasetRequestPrivate::DescribeDatasetRequestPrivate(
    const DescribeDatasetRequestPrivate &other, DescribeDatasetRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
