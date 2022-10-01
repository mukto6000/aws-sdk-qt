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

#include "startengagementrequest.h"
#include "startengagementrequest_p.h"
#include "startengagementresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::StartEngagementRequest
 * \brief The StartEngagementRequest class provides an interface for SsmContacts StartEngagement requests.
 *
 * \inmodule QtAwsSsmContacts
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
 * \sa SsmContactsClient::startEngagement
 */

/*!
 * Constructs a copy of \a other.
 */
StartEngagementRequest::StartEngagementRequest(const StartEngagementRequest &other)
    : SsmContactsRequest(new StartEngagementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartEngagementRequest object.
 */
StartEngagementRequest::StartEngagementRequest()
    : SsmContactsRequest(new StartEngagementRequestPrivate(SsmContactsRequest::StartEngagementAction, this))
{

}

/*!
 * \reimp
 */
bool StartEngagementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartEngagementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartEngagementRequest::response(QNetworkReply * const reply) const
{
    return new StartEngagementResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::StartEngagementRequestPrivate
 * \brief The StartEngagementRequestPrivate class provides private implementation for StartEngagementRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a StartEngagementRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
StartEngagementRequestPrivate::StartEngagementRequestPrivate(
    const SsmContactsRequest::Action action, StartEngagementRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartEngagementRequest
 * class' copy constructor.
 */
StartEngagementRequestPrivate::StartEngagementRequestPrivate(
    const StartEngagementRequestPrivate &other, StartEngagementRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
