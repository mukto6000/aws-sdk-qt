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

#include "deleteresponseplanrequest.h"
#include "deleteresponseplanrequest_p.h"
#include "deleteresponseplanresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SSMIncidents {

/*!
 * \class QtAws::SSMIncidents::DeleteResponsePlanRequest
 * \brief The DeleteResponsePlanRequest class provides an interface for SSMIncidents DeleteResponsePlan requests.
 *
 * \inmodule QtAwsSSMIncidents
 *
 *  AWS Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their AWS-hosted applications. An incident is any unplanned interruption or reduction in quality of
 *  services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 *
 * \sa SSMIncidentsClient::deleteResponsePlan
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResponsePlanRequest::DeleteResponsePlanRequest(const DeleteResponsePlanRequest &other)
    : SSMIncidentsRequest(new DeleteResponsePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResponsePlanRequest object.
 */
DeleteResponsePlanRequest::DeleteResponsePlanRequest()
    : SSMIncidentsRequest(new DeleteResponsePlanRequestPrivate(SSMIncidentsRequest::DeleteResponsePlanAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResponsePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResponsePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResponsePlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResponsePlanResponse(*this, reply);
}

/*!
 * \class QtAws::SSMIncidents::DeleteResponsePlanRequestPrivate
 * \brief The DeleteResponsePlanRequestPrivate class provides private implementation for DeleteResponsePlanRequest.
 * \internal
 *
 * \inmodule QtAwsSSMIncidents
 */

/*!
 * Constructs a DeleteResponsePlanRequestPrivate object for SSMIncidents \a action,
 * with public implementation \a q.
 */
DeleteResponsePlanRequestPrivate::DeleteResponsePlanRequestPrivate(
    const SSMIncidentsRequest::Action action, DeleteResponsePlanRequest * const q)
    : SSMIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResponsePlanRequest
 * class' copy constructor.
 */
DeleteResponsePlanRequestPrivate::DeleteResponsePlanRequestPrivate(
    const DeleteResponsePlanRequestPrivate &other, DeleteResponsePlanRequest * const q)
    : SSMIncidentsRequestPrivate(other, q)
{

}

} // namespace SSMIncidents
} // namespace QtAws
