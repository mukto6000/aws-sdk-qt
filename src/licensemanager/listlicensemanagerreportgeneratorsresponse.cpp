// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlicensemanagerreportgeneratorsresponse.h"
#include "listlicensemanagerreportgeneratorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseManagerReportGeneratorsResponse
 * \brief The ListLicenseManagerReportGeneratorsResponse class provides an interace for LicenseManager ListLicenseManagerReportGenerators responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listLicenseManagerReportGenerators
 */

/*!
 * Constructs a ListLicenseManagerReportGeneratorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLicenseManagerReportGeneratorsResponse::ListLicenseManagerReportGeneratorsResponse(
        const ListLicenseManagerReportGeneratorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListLicenseManagerReportGeneratorsResponsePrivate(this), parent)
{
    setRequest(new ListLicenseManagerReportGeneratorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLicenseManagerReportGeneratorsRequest * ListLicenseManagerReportGeneratorsResponse::request() const
{
    Q_D(const ListLicenseManagerReportGeneratorsResponse);
    return static_cast<const ListLicenseManagerReportGeneratorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListLicenseManagerReportGenerators \a response.
 */
void ListLicenseManagerReportGeneratorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLicenseManagerReportGeneratorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListLicenseManagerReportGeneratorsResponsePrivate
 * \brief The ListLicenseManagerReportGeneratorsResponsePrivate class provides private implementation for ListLicenseManagerReportGeneratorsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseManagerReportGeneratorsResponsePrivate object with public implementation \a q.
 */
ListLicenseManagerReportGeneratorsResponsePrivate::ListLicenseManagerReportGeneratorsResponsePrivate(
    ListLicenseManagerReportGeneratorsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListLicenseManagerReportGenerators response element from \a xml.
 */
void ListLicenseManagerReportGeneratorsResponsePrivate::parseListLicenseManagerReportGeneratorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLicenseManagerReportGeneratorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
