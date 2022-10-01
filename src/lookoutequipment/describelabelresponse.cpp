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

#include "describelabelresponse.h"
#include "describelabelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeLabelResponse
 * \brief The DescribeLabelResponse class provides an interace for LookoutEquipment DescribeLabel responses.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeLabel
 */

/*!
 * Constructs a DescribeLabelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLabelResponse::DescribeLabelResponse(
        const DescribeLabelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutEquipmentResponse(new DescribeLabelResponsePrivate(this), parent)
{
    setRequest(new DescribeLabelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLabelRequest * DescribeLabelResponse::request() const
{
    Q_D(const DescribeLabelResponse);
    return static_cast<const DescribeLabelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutEquipment DescribeLabel \a response.
 */
void DescribeLabelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLabelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutEquipment::DescribeLabelResponsePrivate
 * \brief The DescribeLabelResponsePrivate class provides private implementation for DescribeLabelResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeLabelResponsePrivate object with public implementation \a q.
 */
DescribeLabelResponsePrivate::DescribeLabelResponsePrivate(
    DescribeLabelResponse * const q) : LookoutEquipmentResponsePrivate(q)
{

}

/*!
 * Parses a LookoutEquipment DescribeLabel response element from \a xml.
 */
void DescribeLabelResponsePrivate::parseDescribeLabelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLabelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutEquipment
} // namespace QtAws
