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

#include "purchaseofferingresponse.h"
#include "purchaseofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::PurchaseOfferingResponse
 * \brief The PurchaseOfferingResponse class provides an interace for MediaLive PurchaseOffering responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::purchaseOffering
 */

/*!
 * Constructs a PurchaseOfferingResponse object for \a reply to \a request, with parent \a parent.
 */
PurchaseOfferingResponse::PurchaseOfferingResponse(
        const PurchaseOfferingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new PurchaseOfferingResponsePrivate(this), parent)
{
    setRequest(new PurchaseOfferingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PurchaseOfferingRequest * PurchaseOfferingResponse::request() const
{
    Q_D(const PurchaseOfferingResponse);
    return static_cast<const PurchaseOfferingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive PurchaseOffering \a response.
 */
void PurchaseOfferingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PurchaseOfferingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::PurchaseOfferingResponsePrivate
 * \brief The PurchaseOfferingResponsePrivate class provides private implementation for PurchaseOfferingResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a PurchaseOfferingResponsePrivate object with public implementation \a q.
 */
PurchaseOfferingResponsePrivate::PurchaseOfferingResponsePrivate(
    PurchaseOfferingResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive PurchaseOffering response element from \a xml.
 */
void PurchaseOfferingResponsePrivate::parsePurchaseOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseOfferingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
