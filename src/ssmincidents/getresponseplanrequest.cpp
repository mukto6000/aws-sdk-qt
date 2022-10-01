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

#include "getresponseplanrequest.h"
#include "getresponseplanrequest_p.h"
#include "getresponseplanresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::GetResponsePlanRequest
 * \brief The GetResponsePlanRequest class provides an interface for SsmIncidents GetResponsePlan requests.
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
 * \sa SsmIncidentsClient::getResponsePlan
 */

/*!
 * Constructs a copy of \a other.
 */
GetResponsePlanRequest::GetResponsePlanRequest(const GetResponsePlanRequest &other)
    : SsmIncidentsRequest(new GetResponsePlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResponsePlanRequest object.
 */
GetResponsePlanRequest::GetResponsePlanRequest()
    : SsmIncidentsRequest(new GetResponsePlanRequestPrivate(SsmIncidentsRequest::GetResponsePlanAction, this))
{

}

/*!
 * \reimp
 */
bool GetResponsePlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResponsePlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResponsePlanRequest::response(QNetworkReply * const reply) const
{
    return new GetResponsePlanResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::GetResponsePlanRequestPrivate
 * \brief The GetResponsePlanRequestPrivate class provides private implementation for GetResponsePlanRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a GetResponsePlanRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
GetResponsePlanRequestPrivate::GetResponsePlanRequestPrivate(
    const SsmIncidentsRequest::Action action, GetResponsePlanRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResponsePlanRequest
 * class' copy constructor.
 */
GetResponsePlanRequestPrivate::GetResponsePlanRequestPrivate(
    const GetResponsePlanRequestPrivate &other, GetResponsePlanRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
