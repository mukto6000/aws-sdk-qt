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

#include "describeindexresponse.h"
#include "describeindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::DescribeIndexResponse
 * \brief The DescribeIndexResponse class provides an interace for kendra DescribeIndex responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::describeIndex
 */

/*!
 * Constructs a DescribeIndexResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIndexResponse::DescribeIndexResponse(
        const DescribeIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new DescribeIndexResponsePrivate(this), parent)
{
    setRequest(new DescribeIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIndexRequest * DescribeIndexResponse::request() const
{
    Q_D(const DescribeIndexResponse);
    return static_cast<const DescribeIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful kendra DescribeIndex \a response.
 */
void DescribeIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::DescribeIndexResponsePrivate
 * \brief The DescribeIndexResponsePrivate class provides private implementation for DescribeIndexResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a DescribeIndexResponsePrivate object with public implementation \a q.
 */
DescribeIndexResponsePrivate::DescribeIndexResponsePrivate(
    DescribeIndexResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra DescribeIndex response element from \a xml.
 */
void DescribeIndexResponsePrivate::parseDescribeIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
