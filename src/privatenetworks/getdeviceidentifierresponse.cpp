// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeviceidentifierresponse.h"
#include "getdeviceidentifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::GetDeviceIdentifierResponse
 * \brief The GetDeviceIdentifierResponse class provides an interace for PrivateNetworks GetDeviceIdentifier responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::getDeviceIdentifier
 */

/*!
 * Constructs a GetDeviceIdentifierResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceIdentifierResponse::GetDeviceIdentifierResponse(
        const GetDeviceIdentifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new GetDeviceIdentifierResponsePrivate(this), parent)
{
    setRequest(new GetDeviceIdentifierRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceIdentifierRequest * GetDeviceIdentifierResponse::request() const
{
    Q_D(const GetDeviceIdentifierResponse);
    return static_cast<const GetDeviceIdentifierRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks GetDeviceIdentifier \a response.
 */
void GetDeviceIdentifierResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceIdentifierResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::GetDeviceIdentifierResponsePrivate
 * \brief The GetDeviceIdentifierResponsePrivate class provides private implementation for GetDeviceIdentifierResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a GetDeviceIdentifierResponsePrivate object with public implementation \a q.
 */
GetDeviceIdentifierResponsePrivate::GetDeviceIdentifierResponsePrivate(
    GetDeviceIdentifierResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks GetDeviceIdentifier response element from \a xml.
 */
void GetDeviceIdentifierResponsePrivate::parseGetDeviceIdentifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceIdentifierResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
