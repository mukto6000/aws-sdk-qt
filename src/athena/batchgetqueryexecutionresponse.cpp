// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetqueryexecutionresponse.h"
#include "batchgetqueryexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::BatchGetQueryExecutionResponse
 * \brief The BatchGetQueryExecutionResponse class provides an interace for Athena BatchGetQueryExecution responses.
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
 *  For code samples using the Amazon Web Services SDK for Java, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::batchGetQueryExecution
 */

/*!
 * Constructs a BatchGetQueryExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetQueryExecutionResponse::BatchGetQueryExecutionResponse(
        const BatchGetQueryExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new BatchGetQueryExecutionResponsePrivate(this), parent)
{
    setRequest(new BatchGetQueryExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetQueryExecutionRequest * BatchGetQueryExecutionResponse::request() const
{
    Q_D(const BatchGetQueryExecutionResponse);
    return static_cast<const BatchGetQueryExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Athena BatchGetQueryExecution \a response.
 */
void BatchGetQueryExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetQueryExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Athena::BatchGetQueryExecutionResponsePrivate
 * \brief The BatchGetQueryExecutionResponsePrivate class provides private implementation for BatchGetQueryExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a BatchGetQueryExecutionResponsePrivate object with public implementation \a q.
 */
BatchGetQueryExecutionResponsePrivate::BatchGetQueryExecutionResponsePrivate(
    BatchGetQueryExecutionResponse * const q) : AthenaResponsePrivate(q)
{

}

/*!
 * Parses a Athena BatchGetQueryExecution response element from \a xml.
 */
void BatchGetQueryExecutionResponsePrivate::parseBatchGetQueryExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetQueryExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Athena
} // namespace QtAws
