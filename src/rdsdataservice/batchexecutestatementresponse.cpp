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

#include "batchexecutestatementresponse.h"
#include "batchexecutestatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDSDataService {

/*!
 * \class QtAws::RDSDataService::BatchExecuteStatementResponse
 * \brief The BatchExecuteStatementResponse class provides an interace for RDSDataService BatchExecuteStatement responses.
 *
 * \inmodule QtAwsRDSDataService
 *
 *  <fullname>Amazon RDS Data Service</fullname>
 * 
 *  Amazon RDS provides an HTTP endpoint to run SQL statements on an Amazon Aurora Serverless DB cluster. To run these
 *  statements, you work with the Data Service
 * 
 *  API>
 * 
 *  For more information about the Data Service API, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using the Data API for Aurora
 *  Serverless</a> in the <i>Amazon Aurora User
 *
 * \sa RDSDataServiceClient::batchExecuteStatement
 */

/*!
 * Constructs a BatchExecuteStatementResponse object for \a reply to \a request, with parent \a parent.
 */
BatchExecuteStatementResponse::BatchExecuteStatementResponse(
        const BatchExecuteStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSDataServiceResponse(new BatchExecuteStatementResponsePrivate(this), parent)
{
    setRequest(new BatchExecuteStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchExecuteStatementRequest * BatchExecuteStatementResponse::request() const
{
    Q_D(const BatchExecuteStatementResponse);
    return static_cast<const BatchExecuteStatementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RDSDataService BatchExecuteStatement \a response.
 */
void BatchExecuteStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchExecuteStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RDSDataService::BatchExecuteStatementResponsePrivate
 * \brief The BatchExecuteStatementResponsePrivate class provides private implementation for BatchExecuteStatementResponse.
 * \internal
 *
 * \inmodule QtAwsRDSDataService
 */

/*!
 * Constructs a BatchExecuteStatementResponsePrivate object with public implementation \a q.
 */
BatchExecuteStatementResponsePrivate::BatchExecuteStatementResponsePrivate(
    BatchExecuteStatementResponse * const q) : RDSDataServiceResponsePrivate(q)
{

}

/*!
 * Parses a RDSDataService BatchExecuteStatement response element from \a xml.
 */
void BatchExecuteStatementResponsePrivate::parseBatchExecuteStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchExecuteStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RDSDataService
} // namespace QtAws
