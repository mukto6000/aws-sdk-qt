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

#include "activatedeviceidentifierresponse.h"
#include "activatedeviceidentifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ActivateDeviceIdentifierResponse
 * \brief The ActivateDeviceIdentifierResponse class provides an interace for PrivateNetworks ActivateDeviceIdentifier responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::activateDeviceIdentifier
 */

/*!
 * Constructs a ActivateDeviceIdentifierResponse object for \a reply to \a request, with parent \a parent.
 */
ActivateDeviceIdentifierResponse::ActivateDeviceIdentifierResponse(
        const ActivateDeviceIdentifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new ActivateDeviceIdentifierResponsePrivate(this), parent)
{
    setRequest(new ActivateDeviceIdentifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ActivateDeviceIdentifierRequest * ActivateDeviceIdentifierResponse::request() const
{
    Q_D(const ActivateDeviceIdentifierResponse);
    return static_cast<const ActivateDeviceIdentifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks ActivateDeviceIdentifier \a response.
 */
void ActivateDeviceIdentifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ActivateDeviceIdentifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::ActivateDeviceIdentifierResponsePrivate
 * \brief The ActivateDeviceIdentifierResponsePrivate class provides private implementation for ActivateDeviceIdentifierResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ActivateDeviceIdentifierResponsePrivate object with public implementation \a q.
 */
ActivateDeviceIdentifierResponsePrivate::ActivateDeviceIdentifierResponsePrivate(
    ActivateDeviceIdentifierResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks ActivateDeviceIdentifier response element from \a xml.
 */
void ActivateDeviceIdentifierResponsePrivate::parseActivateDeviceIdentifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivateDeviceIdentifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
