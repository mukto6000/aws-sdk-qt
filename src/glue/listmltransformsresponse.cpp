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

#include "listmltransformsresponse.h"
#include "listmltransformsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListMLTransformsResponse
 * \brief The ListMLTransformsResponse class provides an interace for Glue ListMLTransforms responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::listMLTransforms
 */

/*!
 * Constructs a ListMLTransformsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMLTransformsResponse::ListMLTransformsResponse(
        const ListMLTransformsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListMLTransformsResponsePrivate(this), parent)
{
    setRequest(new ListMLTransformsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMLTransformsRequest * ListMLTransformsResponse::request() const
{
    Q_D(const ListMLTransformsResponse);
    return static_cast<const ListMLTransformsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListMLTransforms \a response.
 */
void ListMLTransformsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMLTransformsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListMLTransformsResponsePrivate
 * \brief The ListMLTransformsResponsePrivate class provides private implementation for ListMLTransformsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListMLTransformsResponsePrivate object with public implementation \a q.
 */
ListMLTransformsResponsePrivate::ListMLTransformsResponsePrivate(
    ListMLTransformsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListMLTransforms response element from \a xml.
 */
void ListMLTransformsResponsePrivate::parseListMLTransformsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMLTransformsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws