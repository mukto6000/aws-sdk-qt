// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreplicationrunsrequest.h"
#include "getreplicationrunsrequest_p.h"
#include "getreplicationrunsresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GetReplicationRunsRequest
 * \brief The GetReplicationRunsRequest class provides an interface for Sms GetReplicationRuns requests.
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
 * \sa SmsClient::getReplicationRuns
 */

/*!
 * Constructs a copy of \a other.
 */
GetReplicationRunsRequest::GetReplicationRunsRequest(const GetReplicationRunsRequest &other)
    : SmsRequest(new GetReplicationRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReplicationRunsRequest object.
 */
GetReplicationRunsRequest::GetReplicationRunsRequest()
    : SmsRequest(new GetReplicationRunsRequestPrivate(SmsRequest::GetReplicationRunsAction, this))
{

}

/*!
 * \reimp
 */
bool GetReplicationRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReplicationRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReplicationRunsRequest::response(QNetworkReply * const reply) const
{
    return new GetReplicationRunsResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::GetReplicationRunsRequestPrivate
 * \brief The GetReplicationRunsRequestPrivate class provides private implementation for GetReplicationRunsRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GetReplicationRunsRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
GetReplicationRunsRequestPrivate::GetReplicationRunsRequestPrivate(
    const SmsRequest::Action action, GetReplicationRunsRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReplicationRunsRequest
 * class' copy constructor.
 */
GetReplicationRunsRequestPrivate::GetReplicationRunsRequestPrivate(
    const GetReplicationRunsRequestPrivate &other, GetReplicationRunsRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
