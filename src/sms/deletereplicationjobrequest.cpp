// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationjobrequest.h"
#include "deletereplicationjobrequest_p.h"
#include "deletereplicationjobresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::DeleteReplicationJobRequest
 * \brief The DeleteReplicationJobRequest class provides an interface for Sms DeleteReplicationJob requests.
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
 * \sa SmsClient::deleteReplicationJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationJobRequest::DeleteReplicationJobRequest(const DeleteReplicationJobRequest &other)
    : SmsRequest(new DeleteReplicationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationJobRequest object.
 */
DeleteReplicationJobRequest::DeleteReplicationJobRequest()
    : SmsRequest(new DeleteReplicationJobRequestPrivate(SmsRequest::DeleteReplicationJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReplicationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReplicationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationJobResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::DeleteReplicationJobRequestPrivate
 * \brief The DeleteReplicationJobRequestPrivate class provides private implementation for DeleteReplicationJobRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a DeleteReplicationJobRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
DeleteReplicationJobRequestPrivate::DeleteReplicationJobRequestPrivate(
    const SmsRequest::Action action, DeleteReplicationJobRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationJobRequest
 * class' copy constructor.
 */
DeleteReplicationJobRequestPrivate::DeleteReplicationJobRequestPrivate(
    const DeleteReplicationJobRequestPrivate &other, DeleteReplicationJobRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
