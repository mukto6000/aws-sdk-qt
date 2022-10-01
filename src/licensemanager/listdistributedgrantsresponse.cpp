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

#include "listdistributedgrantsresponse.h"
#include "listdistributedgrantsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListDistributedGrantsResponse
 * \brief The ListDistributedGrantsResponse class provides an interace for LicenseManager ListDistributedGrants responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listDistributedGrants
 */

/*!
 * Constructs a ListDistributedGrantsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributedGrantsResponse::ListDistributedGrantsResponse(
        const ListDistributedGrantsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListDistributedGrantsResponsePrivate(this), parent)
{
    setRequest(new ListDistributedGrantsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributedGrantsRequest * ListDistributedGrantsResponse::request() const
{
    Q_D(const ListDistributedGrantsResponse);
    return static_cast<const ListDistributedGrantsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListDistributedGrants \a response.
 */
void ListDistributedGrantsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributedGrantsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListDistributedGrantsResponsePrivate
 * \brief The ListDistributedGrantsResponsePrivate class provides private implementation for ListDistributedGrantsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListDistributedGrantsResponsePrivate object with public implementation \a q.
 */
ListDistributedGrantsResponsePrivate::ListDistributedGrantsResponsePrivate(
    ListDistributedGrantsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListDistributedGrants response element from \a xml.
 */
void ListDistributedGrantsResponsePrivate::parseListDistributedGrantsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributedGrantsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
