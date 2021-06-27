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

#include "listqueryexecutionsresponse.h"
#include "listqueryexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::ListQueryExecutionsResponse
 * \brief The ListQueryExecutionsResponse class provides an interace for Athena ListQueryExecutions responses.
 *
 * \inmodule QtAwsAthena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  If you connect to Athena using the JDBC driver, use version 1.1.0 of the driver or later with the Amazon Athena API.
 *  Earlier version drivers do not support the API. For more information and to download the driver, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/connect-with-jdbc.html">Accessing Amazon Athena with
 * 
 *  JDBC</a>>
 * 
 *  For code samples using the AWS SDK for Java, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::listQueryExecutions
 */

/*!
 * Constructs a ListQueryExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListQueryExecutionsResponse::ListQueryExecutionsResponse(
        const ListQueryExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new ListQueryExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListQueryExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListQueryExecutionsRequest * ListQueryExecutionsResponse::request() const
{
    return static_cast<const ListQueryExecutionsRequest *>(AthenaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Athena ListQueryExecutions \a response.
 */
void ListQueryExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListQueryExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Athena::ListQueryExecutionsResponsePrivate
 * \brief The ListQueryExecutionsResponsePrivate class provides private implementation for ListQueryExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a ListQueryExecutionsResponsePrivate object with public implementation \a q.
 */
ListQueryExecutionsResponsePrivate::ListQueryExecutionsResponsePrivate(
    ListQueryExecutionsResponse * const q) : AthenaResponsePrivate(q)
{

}

/*!
 * Parses a Athena ListQueryExecutions response element from \a xml.
 */
void ListQueryExecutionsResponsePrivate::parseListQueryExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQueryExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Athena
} // namespace QtAws
