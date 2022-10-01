// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdisassociateserviceactionfromprovisioningartifactresponse.h"
#include "batchdisassociateserviceactionfromprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::BatchDisassociateServiceActionFromProvisioningArtifactResponse
 * \brief The BatchDisassociateServiceActionFromProvisioningArtifactResponse class provides an interace for ServiceCatalog BatchDisassociateServiceActionFromProvisioningArtifact responses.
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
 * \sa ServiceCatalogClient::batchDisassociateServiceActionFromProvisioningArtifact
 */

/*!
 * Constructs a BatchDisassociateServiceActionFromProvisioningArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDisassociateServiceActionFromProvisioningArtifactResponse::BatchDisassociateServiceActionFromProvisioningArtifactResponse(
        const BatchDisassociateServiceActionFromProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new BatchDisassociateServiceActionFromProvisioningArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDisassociateServiceActionFromProvisioningArtifactRequest * BatchDisassociateServiceActionFromProvisioningArtifactResponse::request() const
{
    Q_D(const BatchDisassociateServiceActionFromProvisioningArtifactResponse);
    return static_cast<const BatchDisassociateServiceActionFromProvisioningArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog BatchDisassociateServiceActionFromProvisioningArtifact \a response.
 */
void BatchDisassociateServiceActionFromProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDisassociateServiceActionFromProvisioningArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate
 * \brief The BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate class provides private implementation for BatchDisassociateServiceActionFromProvisioningArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate object with public implementation \a q.
 */
BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate::BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate(
    BatchDisassociateServiceActionFromProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog BatchDisassociateServiceActionFromProvisioningArtifact response element from \a xml.
 */
void BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate::parseBatchDisassociateServiceActionFromProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDisassociateServiceActionFromProvisioningArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
