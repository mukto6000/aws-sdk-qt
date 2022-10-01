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

#include "startondemandreplicationrunresponse.h"
#include "startondemandreplicationrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::StartOnDemandReplicationRunResponse
 * \brief The StartOnDemandReplicationRunResponse class provides an interace for Sms StartOnDemandReplicationRun responses.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::startOnDemandReplicationRun
 */

/*!
 * Constructs a StartOnDemandReplicationRunResponse object for \a reply to \a request, with parent \a parent.
 */
StartOnDemandReplicationRunResponse::StartOnDemandReplicationRunResponse(
        const StartOnDemandReplicationRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new StartOnDemandReplicationRunResponsePrivate(this), parent)
{
    setRequest(new StartOnDemandReplicationRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartOnDemandReplicationRunRequest * StartOnDemandReplicationRunResponse::request() const
{
    Q_D(const StartOnDemandReplicationRunResponse);
    return static_cast<const StartOnDemandReplicationRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms StartOnDemandReplicationRun \a response.
 */
void StartOnDemandReplicationRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartOnDemandReplicationRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::StartOnDemandReplicationRunResponsePrivate
 * \brief The StartOnDemandReplicationRunResponsePrivate class provides private implementation for StartOnDemandReplicationRunResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a StartOnDemandReplicationRunResponsePrivate object with public implementation \a q.
 */
StartOnDemandReplicationRunResponsePrivate::StartOnDemandReplicationRunResponsePrivate(
    StartOnDemandReplicationRunResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms StartOnDemandReplicationRun response element from \a xml.
 */
void StartOnDemandReplicationRunResponsePrivate::parseStartOnDemandReplicationRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartOnDemandReplicationRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
