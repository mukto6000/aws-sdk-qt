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

#include "deletelicenseresponse.h"
#include "deletelicenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteLicenseResponse
 * \brief The DeleteLicenseResponse class provides an interace for LicenseManager DeleteLicense responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::deleteLicense
 */

/*!
 * Constructs a DeleteLicenseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLicenseResponse::DeleteLicenseResponse(
        const DeleteLicenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new DeleteLicenseResponsePrivate(this), parent)
{
    setRequest(new DeleteLicenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLicenseRequest * DeleteLicenseResponse::request() const
{
    Q_D(const DeleteLicenseResponse);
    return static_cast<const DeleteLicenseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager DeleteLicense \a response.
 */
void DeleteLicenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLicenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::DeleteLicenseResponsePrivate
 * \brief The DeleteLicenseResponsePrivate class provides private implementation for DeleteLicenseResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteLicenseResponsePrivate object with public implementation \a q.
 */
DeleteLicenseResponsePrivate::DeleteLicenseResponsePrivate(
    DeleteLicenseResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager DeleteLicense response element from \a xml.
 */
void DeleteLicenseResponsePrivate::parseDeleteLicenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLicenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
