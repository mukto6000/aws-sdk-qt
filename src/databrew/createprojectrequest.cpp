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

#include "createprojectrequest.h"
#include "createprojectrequest_p.h"
#include "createprojectresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateProjectRequest
 * \brief The CreateProjectRequest class provides an interface for DataBrew CreateProject requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createProject
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProjectRequest::CreateProjectRequest(const CreateProjectRequest &other)
    : DataBrewRequest(new CreateProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProjectRequest object.
 */
CreateProjectRequest::CreateProjectRequest()
    : DataBrewRequest(new CreateProjectRequestPrivate(DataBrewRequest::CreateProjectAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProjectRequest::response(QNetworkReply * const reply) const
{
    return new CreateProjectResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::CreateProjectRequestPrivate
 * \brief The CreateProjectRequestPrivate class provides private implementation for CreateProjectRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateProjectRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
CreateProjectRequestPrivate::CreateProjectRequestPrivate(
    const DataBrewRequest::Action action, CreateProjectRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProjectRequest
 * class' copy constructor.
 */
CreateProjectRequestPrivate::CreateProjectRequestPrivate(
    const CreateProjectRequestPrivate &other, CreateProjectRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
