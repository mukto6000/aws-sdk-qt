// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtablestorageoptimizersrequest.h"
#include "listtablestorageoptimizersrequest_p.h"
#include "listtablestorageoptimizersresponse.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListTableStorageOptimizersRequest
 * \brief The ListTableStorageOptimizersRequest class provides an interface for LakeFormation ListTableStorageOptimizers requests.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listTableStorageOptimizers
 */

/*!
 * Constructs a copy of \a other.
 */
ListTableStorageOptimizersRequest::ListTableStorageOptimizersRequest(const ListTableStorageOptimizersRequest &other)
    : LakeFormationRequest(new ListTableStorageOptimizersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTableStorageOptimizersRequest object.
 */
ListTableStorageOptimizersRequest::ListTableStorageOptimizersRequest()
    : LakeFormationRequest(new ListTableStorageOptimizersRequestPrivate(LakeFormationRequest::ListTableStorageOptimizersAction, this))
{

}

/*!
 * \reimp
 */
bool ListTableStorageOptimizersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTableStorageOptimizersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTableStorageOptimizersRequest::response(QNetworkReply * const reply) const
{
    return new ListTableStorageOptimizersResponse(*this, reply);
}

/*!
 * \class QtAws::LakeFormation::ListTableStorageOptimizersRequestPrivate
 * \brief The ListTableStorageOptimizersRequestPrivate class provides private implementation for ListTableStorageOptimizersRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListTableStorageOptimizersRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
ListTableStorageOptimizersRequestPrivate::ListTableStorageOptimizersRequestPrivate(
    const LakeFormationRequest::Action action, ListTableStorageOptimizersRequest * const q)
    : LakeFormationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTableStorageOptimizersRequest
 * class' copy constructor.
 */
ListTableStorageOptimizersRequestPrivate::ListTableStorageOptimizersRequestPrivate(
    const ListTableStorageOptimizersRequestPrivate &other, ListTableStorageOptimizersRequest * const q)
    : LakeFormationRequestPrivate(other, q)
{

}

} // namespace LakeFormation
} // namespace QtAws
