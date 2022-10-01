// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateserviceactionresponse.h"
#include "updateserviceactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateServiceActionResponse
 * \brief The UpdateServiceActionResponse class provides an interace for ServiceCatalog UpdateServiceAction responses.
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
 * Constructs a UpdateServiceActionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServiceActionResponse::UpdateServiceActionResponse(
        const UpdateServiceActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdateServiceActionResponsePrivate(this), parent)
{
    setRequest(new UpdateServiceActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServiceActionRequest * UpdateServiceActionResponse::request() const
{
    Q_D(const UpdateServiceActionResponse);
    return static_cast<const UpdateServiceActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog UpdateServiceAction \a response.
 */
void UpdateServiceActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServiceActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::UpdateServiceActionResponsePrivate
 * \brief The UpdateServiceActionResponsePrivate class provides private implementation for UpdateServiceActionResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateServiceActionResponsePrivate object with public implementation \a q.
 */
UpdateServiceActionResponsePrivate::UpdateServiceActionResponsePrivate(
    UpdateServiceActionResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog UpdateServiceAction response element from \a xml.
 */
void UpdateServiceActionResponsePrivate::parseUpdateServiceActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServiceActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
