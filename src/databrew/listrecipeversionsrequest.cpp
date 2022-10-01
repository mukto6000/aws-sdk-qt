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

#include "listrecipeversionsrequest.h"
#include "listrecipeversionsrequest_p.h"
#include "listrecipeversionsresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListRecipeVersionsRequest
 * \brief The ListRecipeVersionsRequest class provides an interface for DataBrew ListRecipeVersions requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listRecipeVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecipeVersionsRequest::ListRecipeVersionsRequest(const ListRecipeVersionsRequest &other)
    : DataBrewRequest(new ListRecipeVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecipeVersionsRequest object.
 */
ListRecipeVersionsRequest::ListRecipeVersionsRequest()
    : DataBrewRequest(new ListRecipeVersionsRequestPrivate(DataBrewRequest::ListRecipeVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecipeVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecipeVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecipeVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListRecipeVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::ListRecipeVersionsRequestPrivate
 * \brief The ListRecipeVersionsRequestPrivate class provides private implementation for ListRecipeVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListRecipeVersionsRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
ListRecipeVersionsRequestPrivate::ListRecipeVersionsRequestPrivate(
    const DataBrewRequest::Action action, ListRecipeVersionsRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecipeVersionsRequest
 * class' copy constructor.
 */
ListRecipeVersionsRequestPrivate::ListRecipeVersionsRequestPrivate(
    const ListRecipeVersionsRequestPrivate &other, ListRecipeVersionsRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
