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

#include "canceltaskexecutionresponse.h"
#include "canceltaskexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CancelTaskExecutionResponse
 * \brief The CancelTaskExecutionResponse class provides an interace for DataSync CancelTaskExecution responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>AWS DataSync</fullname>
 * 
 *  AWS DataSync is a managed data transfer service that makes it simpler for you to automate moving data between
 *  on-premises storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for AWS DataSync contains documentation for a programming interface that you can use to
 *  manage AWS
 *
 * \sa DataSyncClient::cancelTaskExecution
 */

/*!
 * Constructs a CancelTaskExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
CancelTaskExecutionResponse::CancelTaskExecutionResponse(
        const CancelTaskExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CancelTaskExecutionResponsePrivate(this), parent)
{
    setRequest(new CancelTaskExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelTaskExecutionRequest * CancelTaskExecutionResponse::request() const
{
    Q_D(const CancelTaskExecutionResponse);
    return static_cast<const CancelTaskExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CancelTaskExecution \a response.
 */
void CancelTaskExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelTaskExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CancelTaskExecutionResponsePrivate
 * \brief The CancelTaskExecutionResponsePrivate class provides private implementation for CancelTaskExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CancelTaskExecutionResponsePrivate object with public implementation \a q.
 */
CancelTaskExecutionResponsePrivate::CancelTaskExecutionResponsePrivate(
    CancelTaskExecutionResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CancelTaskExecution response element from \a xml.
 */
void CancelTaskExecutionResponsePrivate::parseCancelTaskExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelTaskExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
