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

#include "describereservationresponse.h"
#include "describereservationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::DescribeReservationResponse
 * \brief The DescribeReservationResponse class provides an interace for MediaConnect DescribeReservation responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::describeReservation
 */

/*!
 * Constructs a DescribeReservationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservationResponse::DescribeReservationResponse(
        const DescribeReservationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new DescribeReservationResponsePrivate(this), parent)
{
    setRequest(new DescribeReservationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReservationRequest * DescribeReservationResponse::request() const
{
    Q_D(const DescribeReservationResponse);
    return static_cast<const DescribeReservationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect DescribeReservation \a response.
 */
void DescribeReservationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReservationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::DescribeReservationResponsePrivate
 * \brief The DescribeReservationResponsePrivate class provides private implementation for DescribeReservationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a DescribeReservationResponsePrivate object with public implementation \a q.
 */
DescribeReservationResponsePrivate::DescribeReservationResponsePrivate(
    DescribeReservationResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect DescribeReservation response element from \a xml.
 */
void DescribeReservationResponsePrivate::parseDescribeReservationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
