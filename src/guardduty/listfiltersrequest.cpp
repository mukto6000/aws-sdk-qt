// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfiltersrequest.h"
#include "listfiltersrequest_p.h"
#include "listfiltersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::ListFiltersRequest
 * \brief The ListFiltersRequest class provides an interface for GuardDuty ListFilters requests.
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
 * \sa GuardDutyClient::listFilters
 */

/*!
 * Constructs a copy of \a other.
 */
ListFiltersRequest::ListFiltersRequest(const ListFiltersRequest &other)
    : GuardDutyRequest(new ListFiltersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFiltersRequest object.
 */
ListFiltersRequest::ListFiltersRequest()
    : GuardDutyRequest(new ListFiltersRequestPrivate(GuardDutyRequest::ListFiltersAction, this))
{

}

/*!
 * \reimp
 */
bool ListFiltersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFiltersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFiltersRequest::response(QNetworkReply * const reply) const
{
    return new ListFiltersResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::ListFiltersRequestPrivate
 * \brief The ListFiltersRequestPrivate class provides private implementation for ListFiltersRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a ListFiltersRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
ListFiltersRequestPrivate::ListFiltersRequestPrivate(
    const GuardDutyRequest::Action action, ListFiltersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFiltersRequest
 * class' copy constructor.
 */
ListFiltersRequestPrivate::ListFiltersRequestPrivate(
    const ListFiltersRequestPrivate &other, ListFiltersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
