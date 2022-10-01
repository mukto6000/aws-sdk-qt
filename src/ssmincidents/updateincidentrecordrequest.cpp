// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateincidentrecordrequest.h"
#include "updateincidentrecordrequest_p.h"
#include "updateincidentrecordresponse.h"
#include "ssmincidentsrequest_p.h"

namespace QtAws {
namespace SsmIncidents {

/*!
 * \class QtAws::SsmIncidents::UpdateIncidentRecordRequest
 * \brief The UpdateIncidentRecordRequest class provides an interface for SsmIncidents UpdateIncidentRecord requests.
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
 * \sa SsmIncidentsClient::updateIncidentRecord
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateIncidentRecordRequest::UpdateIncidentRecordRequest(const UpdateIncidentRecordRequest &other)
    : SsmIncidentsRequest(new UpdateIncidentRecordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateIncidentRecordRequest object.
 */
UpdateIncidentRecordRequest::UpdateIncidentRecordRequest()
    : SsmIncidentsRequest(new UpdateIncidentRecordRequestPrivate(SsmIncidentsRequest::UpdateIncidentRecordAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateIncidentRecordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateIncidentRecordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateIncidentRecordRequest::response(QNetworkReply * const reply) const
{
    return new UpdateIncidentRecordResponse(*this, reply);
}

/*!
 * \class QtAws::SsmIncidents::UpdateIncidentRecordRequestPrivate
 * \brief The UpdateIncidentRecordRequestPrivate class provides private implementation for UpdateIncidentRecordRequest.
 * \internal
 *
 * \inmodule QtAwsSsmIncidents
 */

/*!
 * Constructs a UpdateIncidentRecordRequestPrivate object for SsmIncidents \a action,
 * with public implementation \a q.
 */
UpdateIncidentRecordRequestPrivate::UpdateIncidentRecordRequestPrivate(
    const SsmIncidentsRequest::Action action, UpdateIncidentRecordRequest * const q)
    : SsmIncidentsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateIncidentRecordRequest
 * class' copy constructor.
 */
UpdateIncidentRecordRequestPrivate::UpdateIncidentRecordRequestPrivate(
    const UpdateIncidentRecordRequestPrivate &other, UpdateIncidentRecordRequest * const q)
    : SsmIncidentsRequestPrivate(other, q)
{

}

} // namespace SsmIncidents
} // namespace QtAws
