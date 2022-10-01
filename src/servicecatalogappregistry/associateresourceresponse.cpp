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

#include "associateresourceresponse.h"
#include "associateresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalogAppRegistry {

/*!
 * \class QtAws::ServiceCatalogAppRegistry::AssociateResourceResponse
 * \brief The AssociateResourceResponse class provides an interace for ServiceCatalogAppRegistry AssociateResource responses.
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 *
 *  Amazon Web Services Service Catalog AppRegistry enables organizations to understand the application context of their
 *  Amazon Web Services resources. AppRegistry provides a repository of your applications, their resources, and the
 *  application metadata that you use within your
 *
 * \sa ServiceCatalogAppRegistryClient::associateResource
 */

/*!
 * Constructs a AssociateResourceResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateResourceResponse::AssociateResourceResponse(
        const AssociateResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogAppRegistryResponse(new AssociateResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateResourceRequest * AssociateResourceResponse::request() const
{
    Q_D(const AssociateResourceResponse);
    return static_cast<const AssociateResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalogAppRegistry AssociateResource \a response.
 */
void AssociateResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalogAppRegistry::AssociateResourceResponsePrivate
 * \brief The AssociateResourceResponsePrivate class provides private implementation for AssociateResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalogAppRegistry
 */

/*!
 * Constructs a AssociateResourceResponsePrivate object with public implementation \a q.
 */
AssociateResourceResponsePrivate::AssociateResourceResponsePrivate(
    AssociateResourceResponse * const q) : ServiceCatalogAppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalogAppRegistry AssociateResource response element from \a xml.
 */
void AssociateResourceResponsePrivate::parseAssociateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws
