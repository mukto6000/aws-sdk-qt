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

#include "deletetagoptionrequest.h"
#include "deletetagoptionrequest_p.h"
#include "deletetagoptionresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeleteTagOptionRequest
 * \brief The DeleteTagOptionRequest class provides an interface for ServiceCatalog DeleteTagOption requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::deleteTagOption
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTagOptionRequest::DeleteTagOptionRequest(const DeleteTagOptionRequest &other)
    : ServiceCatalogRequest(new DeleteTagOptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTagOptionRequest object.
 */
DeleteTagOptionRequest::DeleteTagOptionRequest()
    : ServiceCatalogRequest(new DeleteTagOptionRequestPrivate(ServiceCatalogRequest::DeleteTagOptionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTagOptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTagOptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTagOptionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTagOptionResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DeleteTagOptionRequestPrivate
 * \brief The DeleteTagOptionRequestPrivate class provides private implementation for DeleteTagOptionRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeleteTagOptionRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DeleteTagOptionRequestPrivate::DeleteTagOptionRequestPrivate(
    const ServiceCatalogRequest::Action action, DeleteTagOptionRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTagOptionRequest
 * class' copy constructor.
 */
DeleteTagOptionRequestPrivate::DeleteTagOptionRequestPrivate(
    const DeleteTagOptionRequestPrivate &other, DeleteTagOptionRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
