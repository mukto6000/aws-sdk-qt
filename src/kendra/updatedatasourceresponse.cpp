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

#include "updatedatasourceresponse.h"
#include "updatedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateDataSourceResponse
 * \brief The UpdateDataSourceResponse class provides an interace for Kendra UpdateDataSource responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateDataSource
 */

/*!
 * Constructs a UpdateDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDataSourceResponse::UpdateDataSourceResponse(
        const UpdateDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new UpdateDataSourceResponsePrivate(this), parent)
{
    setRequest(new UpdateDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDataSourceRequest * UpdateDataSourceResponse::request() const
{
    Q_D(const UpdateDataSourceResponse);
    return static_cast<const UpdateDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra UpdateDataSource \a response.
 */
void UpdateDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::UpdateDataSourceResponsePrivate
 * \brief The UpdateDataSourceResponsePrivate class provides private implementation for UpdateDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateDataSourceResponsePrivate object with public implementation \a q.
 */
UpdateDataSourceResponsePrivate::UpdateDataSourceResponsePrivate(
    UpdateDataSourceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra UpdateDataSource response element from \a xml.
 */
void UpdateDataSourceResponsePrivate::parseUpdateDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
