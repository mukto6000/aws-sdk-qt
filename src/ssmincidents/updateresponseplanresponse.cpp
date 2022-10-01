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

#include "updateresponseplanresponse.h"
#include "updateresponseplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::UpdateResponsePlanResponse
 * \brief The UpdateResponsePlanResponse class provides an interace for SsmIncidents UpdateResponsePlan responses.
 *
 * \inmodule QtAwsSsmIncidents
 *
 *  Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their Amazon Web Services-hosted applications. An incident is any unplanned interruption or
 *  reduction in quality of services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 *
 * \sa SsmIncidentsClient::updateResponsePlan
 */

/*!
 * Constructs a UpdateResponsePlanResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResponsePlanResponse::UpdateResponsePlanResponse(
        const UpdateResponsePlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmIncidentsResponse(new UpdateResponsePlanResponsePrivate(this), parent)
{
    setRequest(new UpdateResponsePlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResponsePlanRequest * UpdateResponsePlanResponse::request() const
{
    Q_D(const UpdateResponsePlanResponse);
    return static_cast<const UpdateResponsePlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SsmIncidents UpdateResponsePlan \a response.
 */
void UpdateResponsePlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResponsePlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SsmIncidents::UpdateResponsePlanResponsePrivate
 * \brief The UpdateResponsePlanResponsePrivate class provides private implementation for UpdateResponsePlanResponse.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a UpdateResponsePlanResponsePrivate object with public implementation \a q.
 */
UpdateResponsePlanResponsePrivate::UpdateResponsePlanResponsePrivate(
    UpdateResponsePlanResponse * const q) : SsmIncidentsResponsePrivate(q)
{

}

/*!
 * Parses a SsmIncidents UpdateResponsePlan response element from \a xml.
 */
void UpdateResponsePlanResponsePrivate::parseUpdateResponsePlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResponsePlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SsmIncidents
} // namespace QtAws
