/*
    Copyright 2013-2020 Paul Colby

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

#include "getconnectivityinforesponse.h"
#include "getconnectivityinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetConnectivityInfoResponse
 * \brief The GetConnectivityInfoResponse class provides an interace for Greengrass GetConnectivityInfo responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getConnectivityInfo
 */

/*!
 * Constructs a GetConnectivityInfoResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectivityInfoResponse::GetConnectivityInfoResponse(
        const GetConnectivityInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetConnectivityInfoResponsePrivate(this), parent)
{
    setRequest(new GetConnectivityInfoRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectivityInfoRequest * GetConnectivityInfoResponse::request() const
{
    Q_D(const GetConnectivityInfoResponse);
    return static_cast<const GetConnectivityInfoRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetConnectivityInfo \a response.
 */
void GetConnectivityInfoResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectivityInfoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetConnectivityInfoResponsePrivate
 * \brief The GetConnectivityInfoResponsePrivate class provides private implementation for GetConnectivityInfoResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetConnectivityInfoResponsePrivate object with public implementation \a q.
 */
GetConnectivityInfoResponsePrivate::GetConnectivityInfoResponsePrivate(
    GetConnectivityInfoResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetConnectivityInfo response element from \a xml.
 */
void GetConnectivityInfoResponsePrivate::parseGetConnectivityInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectivityInfoResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
