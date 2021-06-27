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

#include "getmltransformresponse.h"
#include "getmltransformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTransformResponse
 * \brief The GetMLTransformResponse class provides an interace for Glue GetMLTransform responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getMLTransform
 */

/*!
 * Constructs a GetMLTransformResponse object for \a reply to \a request, with parent \a parent.
 */
GetMLTransformResponse::GetMLTransformResponse(
        const GetMLTransformRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetMLTransformResponsePrivate(this), parent)
{
    setRequest(new GetMLTransformRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMLTransformRequest * GetMLTransformResponse::request() const
{
    return static_cast<const GetMLTransformRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue GetMLTransform \a response.
 */
void GetMLTransformResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMLTransformResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetMLTransformResponsePrivate
 * \brief The GetMLTransformResponsePrivate class provides private implementation for GetMLTransformResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTransformResponsePrivate object with public implementation \a q.
 */
GetMLTransformResponsePrivate::GetMLTransformResponsePrivate(
    GetMLTransformResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetMLTransform response element from \a xml.
 */
void GetMLTransformResponsePrivate::parseGetMLTransformResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMLTransformResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
