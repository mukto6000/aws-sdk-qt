// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeproductasadminresponse.h"
#include "describeproductasadminresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProductAsAdminResponse
 * \brief The DescribeProductAsAdminResponse class provides an interace for ServiceCatalog DescribeProductAsAdmin responses.
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
 * \sa ServiceCatalogClient::describeProductAsAdmin
 */

/*!
 * Constructs a DescribeProductAsAdminResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProductAsAdminResponse::DescribeProductAsAdminResponse(
        const DescribeProductAsAdminRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProductAsAdminResponsePrivate(this), parent)
{
    setRequest(new DescribeProductAsAdminRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProductAsAdminRequest * DescribeProductAsAdminResponse::request() const
{
    Q_D(const DescribeProductAsAdminResponse);
    return static_cast<const DescribeProductAsAdminRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribeProductAsAdmin \a response.
 */
void DescribeProductAsAdminResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProductAsAdminResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProductAsAdminResponsePrivate
 * \brief The DescribeProductAsAdminResponsePrivate class provides private implementation for DescribeProductAsAdminResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProductAsAdminResponsePrivate object with public implementation \a q.
 */
DescribeProductAsAdminResponsePrivate::DescribeProductAsAdminResponsePrivate(
    DescribeProductAsAdminResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribeProductAsAdmin response element from \a xml.
 */
void DescribeProductAsAdminResponsePrivate::parseDescribeProductAsAdminResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProductAsAdminResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
