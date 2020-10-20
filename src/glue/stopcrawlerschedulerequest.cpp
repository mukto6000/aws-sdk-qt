/*
    Copyright 2013-2020 Paul Colby

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

#include "stopcrawlerschedulerequest.h"
#include "stopcrawlerschedulerequest_p.h"
#include "stopcrawlerscheduleresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopCrawlerScheduleRequest
 * \brief The StopCrawlerScheduleRequest class provides an interface for Glue StopCrawlerSchedule requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::stopCrawlerSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
StopCrawlerScheduleRequest::StopCrawlerScheduleRequest(const StopCrawlerScheduleRequest &other)
    : GlueRequest(new StopCrawlerScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopCrawlerScheduleRequest object.
 */
StopCrawlerScheduleRequest::StopCrawlerScheduleRequest()
    : GlueRequest(new StopCrawlerScheduleRequestPrivate(GlueRequest::StopCrawlerScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool StopCrawlerScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopCrawlerScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopCrawlerScheduleRequest::response(QNetworkReply * const reply) const
{
    return new StopCrawlerScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StopCrawlerScheduleRequestPrivate
 * \brief The StopCrawlerScheduleRequestPrivate class provides private implementation for StopCrawlerScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopCrawlerScheduleRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StopCrawlerScheduleRequestPrivate::StopCrawlerScheduleRequestPrivate(
    const GlueRequest::Action action, StopCrawlerScheduleRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopCrawlerScheduleRequest
 * class' copy constructor.
 */
StopCrawlerScheduleRequestPrivate::StopCrawlerScheduleRequestPrivate(
    const StopCrawlerScheduleRequestPrivate &other, StopCrawlerScheduleRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
