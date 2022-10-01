// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprovisioningartifactsforserviceactionrequest.h"
#include "listprovisioningartifactsforserviceactionrequest_p.h"
#include "listprovisioningartifactsforserviceactionresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListProvisioningArtifactsForServiceActionRequest
 * \brief The ListProvisioningArtifactsForServiceActionRequest class provides an interface for ServiceCatalog ListProvisioningArtifactsForServiceAction requests.
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
 * \sa ServiceCatalogClient::listProvisioningArtifactsForServiceAction
 */

/*!
 * Constructs a copy of \a other.
 */
ListProvisioningArtifactsForServiceActionRequest::ListProvisioningArtifactsForServiceActionRequest(const ListProvisioningArtifactsForServiceActionRequest &other)
    : ServiceCatalogRequest(new ListProvisioningArtifactsForServiceActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProvisioningArtifactsForServiceActionRequest object.
 */
ListProvisioningArtifactsForServiceActionRequest::ListProvisioningArtifactsForServiceActionRequest()
    : ServiceCatalogRequest(new ListProvisioningArtifactsForServiceActionRequestPrivate(ServiceCatalogRequest::ListProvisioningArtifactsForServiceActionAction, this))
{

}

/*!
 * \reimp
 */
bool ListProvisioningArtifactsForServiceActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProvisioningArtifactsForServiceActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProvisioningArtifactsForServiceActionRequest::response(QNetworkReply * const reply) const
{
    return new ListProvisioningArtifactsForServiceActionResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListProvisioningArtifactsForServiceActionRequestPrivate
 * \brief The ListProvisioningArtifactsForServiceActionRequestPrivate class provides private implementation for ListProvisioningArtifactsForServiceActionRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListProvisioningArtifactsForServiceActionRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListProvisioningArtifactsForServiceActionRequestPrivate::ListProvisioningArtifactsForServiceActionRequestPrivate(
    const ServiceCatalogRequest::Action action, ListProvisioningArtifactsForServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProvisioningArtifactsForServiceActionRequest
 * class' copy constructor.
 */
ListProvisioningArtifactsForServiceActionRequestPrivate::ListProvisioningArtifactsForServiceActionRequestPrivate(
    const ListProvisioningArtifactsForServiceActionRequestPrivate &other, ListProvisioningArtifactsForServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
