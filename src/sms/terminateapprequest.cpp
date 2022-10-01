// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminateapprequest.h"
#include "terminateapprequest_p.h"
#include "terminateappresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::TerminateAppRequest
 * \brief The TerminateAppRequest class provides an interface for Sms TerminateApp requests.
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
 * \sa SmsClient::terminateApp
 */

/*!
 * Constructs a copy of \a other.
 */
TerminateAppRequest::TerminateAppRequest(const TerminateAppRequest &other)
    : SmsRequest(new TerminateAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TerminateAppRequest object.
 */
TerminateAppRequest::TerminateAppRequest()
    : SmsRequest(new TerminateAppRequestPrivate(SmsRequest::TerminateAppAction, this))
{

}

/*!
 * \reimp
 */
bool TerminateAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TerminateAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateAppRequest::response(QNetworkReply * const reply) const
{
    return new TerminateAppResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::TerminateAppRequestPrivate
 * \brief The TerminateAppRequestPrivate class provides private implementation for TerminateAppRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a TerminateAppRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
TerminateAppRequestPrivate::TerminateAppRequestPrivate(
    const SmsRequest::Action action, TerminateAppRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TerminateAppRequest
 * class' copy constructor.
 */
TerminateAppRequestPrivate::TerminateAppRequestPrivate(
    const TerminateAppRequestPrivate &other, TerminateAppRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
