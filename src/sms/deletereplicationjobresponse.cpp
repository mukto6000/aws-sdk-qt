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

#include "deletereplicationjobresponse.h"
#include "deletereplicationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::DeleteReplicationJobResponse
 * \brief The DeleteReplicationJobResponse class provides an interace for SMS DeleteReplicationJob responses.
 *
 * \inmodule QtAwsSMS
 *
 *  <fullname>AWS Server Migration Service</fullname>
 * 
 *  AWS Server Migration Service (AWS SMS) makes it easier and faster for you to migrate your on-premises workloads to AWS.
 *  To learn more about AWS SMS, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">AWS Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">AWS Server Migration Service User
 *  Guide</a>
 *
 * \sa SmsClient::deleteReplicationJob
 */

/*!
 * Constructs a DeleteReplicationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationJobResponse::DeleteReplicationJobResponse(
        const DeleteReplicationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new DeleteReplicationJobResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationJobRequest * DeleteReplicationJobResponse::request() const
{
    Q_D(const DeleteReplicationJobResponse);
    return static_cast<const DeleteReplicationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS DeleteReplicationJob \a response.
 */
void DeleteReplicationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReplicationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::DeleteReplicationJobResponsePrivate
 * \brief The DeleteReplicationJobResponsePrivate class provides private implementation for DeleteReplicationJobResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a DeleteReplicationJobResponsePrivate object with public implementation \a q.
 */
DeleteReplicationJobResponsePrivate::DeleteReplicationJobResponsePrivate(
    DeleteReplicationJobResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS DeleteReplicationJob response element from \a xml.
 */
void DeleteReplicationJobResponsePrivate::parseDeleteReplicationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
