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

#include "deletedatasetresponse.h"
#include "deletedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteDataSetResponse
 * \brief The DeleteDataSetResponse class provides an interace for QuickSight DeleteDataSet responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteDataSet
 */

/*!
 * Constructs a DeleteDataSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataSetResponse::DeleteDataSetResponse(
        const DeleteDataSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteDataSetResponsePrivate(this), parent)
{
    setRequest(new DeleteDataSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataSetRequest * DeleteDataSetResponse::request() const
{
    return static_cast<const DeleteDataSetRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteDataSet \a response.
 */
void DeleteDataSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteDataSetResponsePrivate
 * \brief The DeleteDataSetResponsePrivate class provides private implementation for DeleteDataSetResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteDataSetResponsePrivate object with public implementation \a q.
 */
DeleteDataSetResponsePrivate::DeleteDataSetResponsePrivate(
    DeleteDataSetResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteDataSet response element from \a xml.
 */
void DeleteDataSetResponsePrivate::parseDeleteDataSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
