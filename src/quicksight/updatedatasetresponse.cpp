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

#include "updatedatasetresponse.h"
#include "updatedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDataSetResponse
 * \brief The UpdateDataSetResponse class provides an interace for QuickSight UpdateDataSet responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDataSet
 */

/*!
 * Constructs a UpdateDataSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDataSetResponse::UpdateDataSetResponse(
        const UpdateDataSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateDataSetResponsePrivate(this), parent)
{
    setRequest(new UpdateDataSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDataSetRequest * UpdateDataSetResponse::request() const
{
    Q_D(const UpdateDataSetResponse);
    return static_cast<const UpdateDataSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateDataSet \a response.
 */
void UpdateDataSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDataSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateDataSetResponsePrivate
 * \brief The UpdateDataSetResponsePrivate class provides private implementation for UpdateDataSetResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDataSetResponsePrivate object with public implementation \a q.
 */
UpdateDataSetResponsePrivate::UpdateDataSetResponsePrivate(
    UpdateDataSetResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateDataSet response element from \a xml.
 */
void UpdateDataSetResponsePrivate::parseUpdateDataSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws