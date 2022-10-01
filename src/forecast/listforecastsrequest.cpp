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

#include "listforecastsrequest.h"
#include "listforecastsrequest_p.h"
#include "listforecastsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListForecastsRequest
 * \brief The ListForecastsRequest class provides an interface for Forecast ListForecasts requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listForecasts
 */

/*!
 * Constructs a copy of \a other.
 */
ListForecastsRequest::ListForecastsRequest(const ListForecastsRequest &other)
    : ForecastRequest(new ListForecastsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListForecastsRequest object.
 */
ListForecastsRequest::ListForecastsRequest()
    : ForecastRequest(new ListForecastsRequestPrivate(ForecastRequest::ListForecastsAction, this))
{

}

/*!
 * \reimp
 */
bool ListForecastsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListForecastsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListForecastsRequest::response(QNetworkReply * const reply) const
{
    return new ListForecastsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListForecastsRequestPrivate
 * \brief The ListForecastsRequestPrivate class provides private implementation for ListForecastsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListForecastsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListForecastsRequestPrivate::ListForecastsRequestPrivate(
    const ForecastRequest::Action action, ListForecastsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListForecastsRequest
 * class' copy constructor.
 */
ListForecastsRequestPrivate::ListForecastsRequestPrivate(
    const ListForecastsRequestPrivate &other, ListForecastsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
