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

#include "deleteconstraintrequest.h"
#include "deleteconstraintrequest_p.h"
#include "deleteconstraintresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeleteConstraintRequest
 * \brief The DeleteConstraintRequest class provides an interface for ServiceCatalog DeleteConstraint requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
 *
 * \sa ServiceCatalogClient::deleteConstraint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConstraintRequest::DeleteConstraintRequest(const DeleteConstraintRequest &other)
    : ServiceCatalogRequest(new DeleteConstraintRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConstraintRequest object.
 */
DeleteConstraintRequest::DeleteConstraintRequest()
    : ServiceCatalogRequest(new DeleteConstraintRequestPrivate(ServiceCatalogRequest::DeleteConstraintAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConstraintRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConstraintResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConstraintRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConstraintResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DeleteConstraintRequestPrivate
 * \brief The DeleteConstraintRequestPrivate class provides private implementation for DeleteConstraintRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeleteConstraintRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DeleteConstraintRequestPrivate::DeleteConstraintRequestPrivate(
    const ServiceCatalogRequest::Action action, DeleteConstraintRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConstraintRequest
 * class' copy constructor.
 */
DeleteConstraintRequestPrivate::DeleteConstraintRequestPrivate(
    const DeleteConstraintRequestPrivate &other, DeleteConstraintRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
