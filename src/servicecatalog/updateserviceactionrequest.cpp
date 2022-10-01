// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateserviceactionrequest.h"
#include "updateserviceactionrequest_p.h"
#include "updateserviceactionresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateServiceActionRequest
 * \brief The UpdateServiceActionRequest class provides an interface for ServiceCatalog UpdateServiceAction requests.
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
 * \sa ServiceCatalogClient::updateServiceAction
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateServiceActionRequest::UpdateServiceActionRequest(const UpdateServiceActionRequest &other)
    : ServiceCatalogRequest(new UpdateServiceActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateServiceActionRequest object.
 */
UpdateServiceActionRequest::UpdateServiceActionRequest()
    : ServiceCatalogRequest(new UpdateServiceActionRequestPrivate(ServiceCatalogRequest::UpdateServiceActionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServiceActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateServiceActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServiceActionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServiceActionResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::UpdateServiceActionRequestPrivate
 * \brief The UpdateServiceActionRequestPrivate class provides private implementation for UpdateServiceActionRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateServiceActionRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
UpdateServiceActionRequestPrivate::UpdateServiceActionRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateServiceActionRequest
 * class' copy constructor.
 */
UpdateServiceActionRequestPrivate::UpdateServiceActionRequestPrivate(
    const UpdateServiceActionRequestPrivate &other, UpdateServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
