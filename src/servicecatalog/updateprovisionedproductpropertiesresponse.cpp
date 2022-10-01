// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprovisionedproductpropertiesresponse.h"
#include "updateprovisionedproductpropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateProvisionedProductPropertiesResponse
 * \brief The UpdateProvisionedProductPropertiesResponse class provides an interace for ServiceCatalog UpdateProvisionedProductProperties responses.
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
 * \sa ServiceCatalogClient::updateProvisionedProductProperties
 */

/*!
 * Constructs a UpdateProvisionedProductPropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateProvisionedProductPropertiesResponse::UpdateProvisionedProductPropertiesResponse(
        const UpdateProvisionedProductPropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdateProvisionedProductPropertiesResponsePrivate(this), parent)
{
    setRequest(new UpdateProvisionedProductPropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateProvisionedProductPropertiesRequest * UpdateProvisionedProductPropertiesResponse::request() const
{
    Q_D(const UpdateProvisionedProductPropertiesResponse);
    return static_cast<const UpdateProvisionedProductPropertiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog UpdateProvisionedProductProperties \a response.
 */
void UpdateProvisionedProductPropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateProvisionedProductPropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::UpdateProvisionedProductPropertiesResponsePrivate
 * \brief The UpdateProvisionedProductPropertiesResponsePrivate class provides private implementation for UpdateProvisionedProductPropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateProvisionedProductPropertiesResponsePrivate object with public implementation \a q.
 */
UpdateProvisionedProductPropertiesResponsePrivate::UpdateProvisionedProductPropertiesResponsePrivate(
    UpdateProvisionedProductPropertiesResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog UpdateProvisionedProductProperties response element from \a xml.
 */
void UpdateProvisionedProductPropertiesResponsePrivate::parseUpdateProvisionedProductPropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProvisionedProductPropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
