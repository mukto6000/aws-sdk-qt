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

#include "updateprofilejobrequest.h"
#include "updateprofilejobrequest_p.h"
#include "updateprofilejobresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::UpdateProfileJobRequest
 * \brief The UpdateProfileJobRequest class provides an interface for DataBrew UpdateProfileJob requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::updateProfileJob
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProfileJobRequest::UpdateProfileJobRequest(const UpdateProfileJobRequest &other)
    : DataBrewRequest(new UpdateProfileJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProfileJobRequest object.
 */
UpdateProfileJobRequest::UpdateProfileJobRequest()
    : DataBrewRequest(new UpdateProfileJobRequestPrivate(DataBrewRequest::UpdateProfileJobAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateProfileJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateProfileJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProfileJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProfileJobResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::UpdateProfileJobRequestPrivate
 * \brief The UpdateProfileJobRequestPrivate class provides private implementation for UpdateProfileJobRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a UpdateProfileJobRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
UpdateProfileJobRequestPrivate::UpdateProfileJobRequestPrivate(
    const DataBrewRequest::Action action, UpdateProfileJobRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateProfileJobRequest
 * class' copy constructor.
 */
UpdateProfileJobRequestPrivate::UpdateProfileJobRequestPrivate(
    const UpdateProfileJobRequestPrivate &other, UpdateProfileJobRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
