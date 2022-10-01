// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateserviceactionfromprovisioningartifactresponse.h"
#include "disassociateserviceactionfromprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisassociateServiceActionFromProvisioningArtifactResponse
 * \brief The DisassociateServiceActionFromProvisioningArtifactResponse class provides an interace for ServiceCatalog DisassociateServiceActionFromProvisioningArtifact responses.
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
 * \sa ServiceCatalogClient::disassociateServiceActionFromProvisioningArtifact
 */

/*!
 * Constructs a DisassociateServiceActionFromProvisioningArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateServiceActionFromProvisioningArtifactResponse::DisassociateServiceActionFromProvisioningArtifactResponse(
        const DisassociateServiceActionFromProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DisassociateServiceActionFromProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new DisassociateServiceActionFromProvisioningArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateServiceActionFromProvisioningArtifactRequest * DisassociateServiceActionFromProvisioningArtifactResponse::request() const
{
    Q_D(const DisassociateServiceActionFromProvisioningArtifactResponse);
    return static_cast<const DisassociateServiceActionFromProvisioningArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DisassociateServiceActionFromProvisioningArtifact \a response.
 */
void DisassociateServiceActionFromProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateServiceActionFromProvisioningArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DisassociateServiceActionFromProvisioningArtifactResponsePrivate
 * \brief The DisassociateServiceActionFromProvisioningArtifactResponsePrivate class provides private implementation for DisassociateServiceActionFromProvisioningArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisassociateServiceActionFromProvisioningArtifactResponsePrivate object with public implementation \a q.
 */
DisassociateServiceActionFromProvisioningArtifactResponsePrivate::DisassociateServiceActionFromProvisioningArtifactResponsePrivate(
    DisassociateServiceActionFromProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DisassociateServiceActionFromProvisioningArtifact response element from \a xml.
 */
void DisassociateServiceActionFromProvisioningArtifactResponsePrivate::parseDisassociateServiceActionFromProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateServiceActionFromProvisioningArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
