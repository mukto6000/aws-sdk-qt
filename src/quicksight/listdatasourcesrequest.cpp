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

#include "listdatasourcesrequest.h"
#include "listdatasourcesrequest_p.h"
#include "listdatasourcesresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::ListDataSourcesRequest
 * \brief The ListDataSourcesRequest class provides an interface for QuickSight ListDataSources requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::listDataSources
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataSourcesRequest::ListDataSourcesRequest(const ListDataSourcesRequest &other)
    : QuickSightRequest(new ListDataSourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataSourcesRequest object.
 */
ListDataSourcesRequest::ListDataSourcesRequest()
    : QuickSightRequest(new ListDataSourcesRequestPrivate(QuickSightRequest::ListDataSourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataSourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataSourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataSourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListDataSourcesResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::ListDataSourcesRequestPrivate
 * \brief The ListDataSourcesRequestPrivate class provides private implementation for ListDataSourcesRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a ListDataSourcesRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const QuickSightRequest::Action action, ListDataSourcesRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataSourcesRequest
 * class' copy constructor.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const ListDataSourcesRequestPrivate &other, ListDataSourcesRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
