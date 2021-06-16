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

#include "listlabelingjobsforworkteamrequest.h"
#include "listlabelingjobsforworkteamrequest_p.h"
#include "listlabelingjobsforworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListLabelingJobsForWorkteamRequest
 * \brief The ListLabelingJobsForWorkteamRequest class provides an interface for SageMaker ListLabelingJobsForWorkteam requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::listLabelingJobsForWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
ListLabelingJobsForWorkteamRequest::ListLabelingJobsForWorkteamRequest(const ListLabelingJobsForWorkteamRequest &other)
    : SageMakerRequest(new ListLabelingJobsForWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLabelingJobsForWorkteamRequest object.
 */
ListLabelingJobsForWorkteamRequest::ListLabelingJobsForWorkteamRequest()
    : SageMakerRequest(new ListLabelingJobsForWorkteamRequestPrivate(SageMakerRequest::ListLabelingJobsForWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool ListLabelingJobsForWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLabelingJobsForWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLabelingJobsForWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new ListLabelingJobsForWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListLabelingJobsForWorkteamRequestPrivate
 * \brief The ListLabelingJobsForWorkteamRequestPrivate class provides private implementation for ListLabelingJobsForWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListLabelingJobsForWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListLabelingJobsForWorkteamRequestPrivate::ListLabelingJobsForWorkteamRequestPrivate(
    const SageMakerRequest::Action action, ListLabelingJobsForWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLabelingJobsForWorkteamRequest
 * class' copy constructor.
 */
ListLabelingJobsForWorkteamRequestPrivate::ListLabelingJobsForWorkteamRequestPrivate(
    const ListLabelingJobsForWorkteamRequestPrivate &other, ListLabelingJobsForWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
