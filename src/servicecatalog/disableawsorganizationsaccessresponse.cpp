// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disableawsorganizationsaccessresponse.h"
#include "disableawsorganizationsaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisableAWSOrganizationsAccessResponse
 * \brief The DisableAWSOrganizationsAccessResponse class provides an interace for ServiceCatalog DisableAWSOrganizationsAccess responses.
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
 * \sa ServiceCatalogClient::disableAWSOrganizationsAccess
 */

/*!
 * Constructs a DisableAWSOrganizationsAccessResponse object for \a reply to \a request, with parent \a parent.
 */
DisableAWSOrganizationsAccessResponse::DisableAWSOrganizationsAccessResponse(
        const DisableAWSOrganizationsAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DisableAWSOrganizationsAccessResponsePrivate(this), parent)
{
    setRequest(new DisableAWSOrganizationsAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableAWSOrganizationsAccessRequest * DisableAWSOrganizationsAccessResponse::request() const
{
    Q_D(const DisableAWSOrganizationsAccessResponse);
    return static_cast<const DisableAWSOrganizationsAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DisableAWSOrganizationsAccess \a response.
 */
void DisableAWSOrganizationsAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableAWSOrganizationsAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DisableAWSOrganizationsAccessResponsePrivate
 * \brief The DisableAWSOrganizationsAccessResponsePrivate class provides private implementation for DisableAWSOrganizationsAccessResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisableAWSOrganizationsAccessResponsePrivate object with public implementation \a q.
 */
DisableAWSOrganizationsAccessResponsePrivate::DisableAWSOrganizationsAccessResponsePrivate(
    DisableAWSOrganizationsAccessResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DisableAWSOrganizationsAccess response element from \a xml.
 */
void DisableAWSOrganizationsAccessResponsePrivate::parseDisableAWSOrganizationsAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableAWSOrganizationsAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
