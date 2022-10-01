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

#include "rollbacktransactionresponse.h"
#include "rollbacktransactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RdsData {

/*!
 * \class QtAws::RdsData::RollbackTransactionResponse
 * \brief The RollbackTransactionResponse class provides an interace for RdsData RollbackTransaction responses.
 *
 * \inmodule QtAwsRdsData
 *
 *  <fullname>Amazon RDS Data Service</fullname>
 * 
 *  Amazon RDS provides an HTTP endpoint to run SQL statements on an Amazon Aurora Serverless v1 DB cluster. To run these
 *  statements, you work with the Data Service
 * 
 *  API> <note>
 * 
 *  The Data Service API isn't supported on Amazon Aurora Serverless v2 DB
 * 
 *  clusters> </note>
 * 
 *  For more information about the Data Service API, see <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using the Data API</a> in the
 *  <i>Amazon Aurora User
 *
 * \sa RdsDataClient::rollbackTransaction
 */

/*!
 * Constructs a RollbackTransactionResponse object for \a reply to \a request, with parent \a parent.
 */
RollbackTransactionResponse::RollbackTransactionResponse(
        const RollbackTransactionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RdsDataResponse(new RollbackTransactionResponsePrivate(this), parent)
{
    setRequest(new RollbackTransactionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RollbackTransactionRequest * RollbackTransactionResponse::request() const
{
    Q_D(const RollbackTransactionResponse);
    return static_cast<const RollbackTransactionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RdsData RollbackTransaction \a response.
 */
void RollbackTransactionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RollbackTransactionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RdsData::RollbackTransactionResponsePrivate
 * \brief The RollbackTransactionResponsePrivate class provides private implementation for RollbackTransactionResponse.
 * \internal
 *
 * \inmodule QtAwsRdsData
 */

/*!
 * Constructs a RollbackTransactionResponsePrivate object with public implementation \a q.
 */
RollbackTransactionResponsePrivate::RollbackTransactionResponsePrivate(
    RollbackTransactionResponse * const q) : RdsDataResponsePrivate(q)
{

}

/*!
 * Parses a RdsData RollbackTransaction response element from \a xml.
 */
void RollbackTransactionResponsePrivate::parseRollbackTransactionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RollbackTransactionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RdsData
} // namespace QtAws
