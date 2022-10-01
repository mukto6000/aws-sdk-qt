// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprovisioningartifactresponse.h"
#include "updateprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateProvisioningArtifactResponse
 * \brief The UpdateProvisioningArtifactResponse class provides an interace for ServiceCatalog UpdateProvisioningArtifact responses.
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
 * \sa ServiceCatalogClient::updateProvisioningArtifact
 */

/*!
 * Constructs a UpdateProvisioningArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateProvisioningArtifactResponse::UpdateProvisioningArtifactResponse(
        const UpdateProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdateProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new UpdateProvisioningArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateProvisioningArtifactRequest * UpdateProvisioningArtifactResponse::request() const
{
    Q_D(const UpdateProvisioningArtifactResponse);
    return static_cast<const UpdateProvisioningArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog UpdateProvisioningArtifact \a response.
 */
void UpdateProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateProvisioningArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::UpdateProvisioningArtifactResponsePrivate
 * \brief The UpdateProvisioningArtifactResponsePrivate class provides private implementation for UpdateProvisioningArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateProvisioningArtifactResponsePrivate object with public implementation \a q.
 */
UpdateProvisioningArtifactResponsePrivate::UpdateProvisioningArtifactResponsePrivate(
    UpdateProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog UpdateProvisioningArtifact response element from \a xml.
 */
void UpdateProvisioningArtifactResponsePrivate::parseUpdateProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProvisioningArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
