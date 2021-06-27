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

#include "gettableversionsresponse.h"
#include "gettableversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableVersionsResponse
 * \brief The GetTableVersionsResponse class provides an interace for Glue GetTableVersions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTableVersions
 */

/*!
 * Constructs a GetTableVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTableVersionsResponse::GetTableVersionsResponse(
        const GetTableVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTableVersionsResponsePrivate(this), parent)
{
    setRequest(new GetTableVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTableVersionsRequest * GetTableVersionsResponse::request() const
{
    return static_cast<const GetTableVersionsRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue GetTableVersions \a response.
 */
void GetTableVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTableVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTableVersionsResponsePrivate
 * \brief The GetTableVersionsResponsePrivate class provides private implementation for GetTableVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTableVersionsResponsePrivate object with public implementation \a q.
 */
GetTableVersionsResponsePrivate::GetTableVersionsResponsePrivate(
    GetTableVersionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTableVersions response element from \a xml.
 */
void GetTableVersionsResponsePrivate::parseGetTableVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTableVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
