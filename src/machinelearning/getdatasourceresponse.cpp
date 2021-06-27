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

#include "getdatasourceresponse.h"
#include "getdatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::GetDataSourceResponse
 * \brief The GetDataSourceResponse class provides an interace for MachineLearning GetDataSource responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::getDataSource
 */

/*!
 * Constructs a GetDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataSourceResponse::GetDataSourceResponse(
        const GetDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new GetDataSourceResponsePrivate(this), parent)
{
    setRequest(new GetDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataSourceRequest * GetDataSourceResponse::request() const
{
    return static_cast<const GetDataSourceRequest *>(MachineLearningResponse::request());
}

/*!
 * \reimp
 * Parses a successful MachineLearning GetDataSource \a response.
 */
void GetDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::GetDataSourceResponsePrivate
 * \brief The GetDataSourceResponsePrivate class provides private implementation for GetDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a GetDataSourceResponsePrivate object with public implementation \a q.
 */
GetDataSourceResponsePrivate::GetDataSourceResponsePrivate(
    GetDataSourceResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning GetDataSource response element from \a xml.
 */
void GetDataSourceResponsePrivate::parseGetDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
