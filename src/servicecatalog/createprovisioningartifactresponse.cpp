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

#include "createprovisioningartifactresponse.h"
#include "createprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreateProvisioningArtifactResponse
 * \brief The CreateProvisioningArtifactResponse class provides an interace for ServiceCatalog CreateProvisioningArtifact responses.
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
 * \sa ServiceCatalogClient::createProvisioningArtifact
 */

/*!
 * Constructs a CreateProvisioningArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProvisioningArtifactResponse::CreateProvisioningArtifactResponse(
        const CreateProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreateProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new CreateProvisioningArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProvisioningArtifactRequest * CreateProvisioningArtifactResponse::request() const
{
    Q_D(const CreateProvisioningArtifactResponse);
    return static_cast<const CreateProvisioningArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog CreateProvisioningArtifact \a response.
 */
void CreateProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProvisioningArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::CreateProvisioningArtifactResponsePrivate
 * \brief The CreateProvisioningArtifactResponsePrivate class provides private implementation for CreateProvisioningArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreateProvisioningArtifactResponsePrivate object with public implementation \a q.
 */
CreateProvisioningArtifactResponsePrivate::CreateProvisioningArtifactResponsePrivate(
    CreateProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog CreateProvisioningArtifact response element from \a xml.
 */
void CreateProvisioningArtifactResponsePrivate::parseCreateProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProvisioningArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
