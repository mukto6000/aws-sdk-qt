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

#include "getgrantresponse.h"
#include "getgrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetGrantResponse
 * \brief The GetGrantResponse class provides an interace for LicenseManager GetGrant responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::getGrant
 */

/*!
 * Constructs a GetGrantResponse object for \a reply to \a request, with parent \a parent.
 */
GetGrantResponse::GetGrantResponse(
        const GetGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetGrantResponsePrivate(this), parent)
{
    setRequest(new GetGrantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGrantRequest * GetGrantResponse::request() const
{
    return static_cast<const GetGrantRequest *>(LicenseManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetGrant \a response.
 */
void GetGrantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetGrantResponsePrivate
 * \brief The GetGrantResponsePrivate class provides private implementation for GetGrantResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetGrantResponsePrivate object with public implementation \a q.
 */
GetGrantResponsePrivate::GetGrantResponsePrivate(
    GetGrantResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetGrant response element from \a xml.
 */
void GetGrantResponsePrivate::parseGetGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGrantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
