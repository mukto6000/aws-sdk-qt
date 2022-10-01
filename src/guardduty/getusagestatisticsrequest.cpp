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

#include "getusagestatisticsrequest.h"
#include "getusagestatisticsrequest_p.h"
#include "getusagestatisticsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetUsageStatisticsRequest
 * \brief The GetUsageStatisticsRequest class provides an interface for GuardDuty GetUsageStatistics requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *  Amazon GuardDuty is a continuous security monitoring service that analyzes and processes the following data sources: VPC
 *  Flow Logs, AWS CloudTrail management event logs, CloudTrail S3 data event logs, EKS audit logs, and DNS logs. It uses
 *  threat intelligence feeds (such as lists of malicious IPs and domains) and machine learning to identify unexpected,
 *  potentially unauthorized, and malicious activity within your Amazon Web Services environment. This can include issues
 *  like escalations of privileges, uses of exposed credentials, or communication with malicious IPs, URLs, or domains. For
 *  example, GuardDuty can detect compromised EC2 instances that serve malware or mine bitcoin.
 * 
 *  </p
 * 
 *  GuardDuty also monitors Amazon Web Services account access behavior for signs of compromise. Some examples of this are
 *  unauthorized infrastructure deployments such as EC2 instances deployed in a Region that has never been used, or unusual
 *  API calls like a password policy change to reduce password strength.
 * 
 *  </p
 * 
 *  GuardDuty informs you of the status of your Amazon Web Services environment by producing security findings that you can
 *  view in the GuardDuty console or through Amazon CloudWatch events. For more information, see the <i> <a
 *  href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html">Amazon GuardDuty User Guide</a> </i>.
 *
 * \sa GuardDutyClient::getUsageStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsageStatisticsRequest::GetUsageStatisticsRequest(const GetUsageStatisticsRequest &other)
    : GuardDutyRequest(new GetUsageStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsageStatisticsRequest object.
 */
GetUsageStatisticsRequest::GetUsageStatisticsRequest()
    : GuardDutyRequest(new GetUsageStatisticsRequestPrivate(GuardDutyRequest::GetUsageStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsageStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsageStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsageStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new GetUsageStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::GetUsageStatisticsRequestPrivate
 * \brief The GetUsageStatisticsRequestPrivate class provides private implementation for GetUsageStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetUsageStatisticsRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
GetUsageStatisticsRequestPrivate::GetUsageStatisticsRequestPrivate(
    const GuardDutyRequest::Action action, GetUsageStatisticsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsageStatisticsRequest
 * class' copy constructor.
 */
GetUsageStatisticsRequestPrivate::GetUsageStatisticsRequestPrivate(
    const GetUsageStatisticsRequestPrivate &other, GetUsageStatisticsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
