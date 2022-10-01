// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createplaceindexrequest.h"
#include "createplaceindexrequest_p.h"
#include "createplaceindexresponse.h"
#include "locationrequest_p.h"

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::CreatePlaceIndexRequest
 * \brief The CreatePlaceIndexRequest class provides an interface for Location CreatePlaceIndex requests.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::createPlaceIndex
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePlaceIndexRequest::CreatePlaceIndexRequest(const CreatePlaceIndexRequest &other)
    : LocationRequest(new CreatePlaceIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePlaceIndexRequest object.
 */
CreatePlaceIndexRequest::CreatePlaceIndexRequest()
    : LocationRequest(new CreatePlaceIndexRequestPrivate(LocationRequest::CreatePlaceIndexAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePlaceIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePlaceIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePlaceIndexRequest::response(QNetworkReply * const reply) const
{
    return new CreatePlaceIndexResponse(*this, reply);
}

/*!
 * \class QtAws::Location::CreatePlaceIndexRequestPrivate
 * \brief The CreatePlaceIndexRequestPrivate class provides private implementation for CreatePlaceIndexRequest.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a CreatePlaceIndexRequestPrivate object for Location \a action,
 * with public implementation \a q.
 */
CreatePlaceIndexRequestPrivate::CreatePlaceIndexRequestPrivate(
    const LocationRequest::Action action, CreatePlaceIndexRequest * const q)
    : LocationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePlaceIndexRequest
 * class' copy constructor.
 */
CreatePlaceIndexRequestPrivate::CreatePlaceIndexRequestPrivate(
    const CreatePlaceIndexRequestPrivate &other, CreatePlaceIndexRequest * const q)
    : LocationRequestPrivate(other, q)
{

}

} // namespace Location
} // namespace QtAws
