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

#include "describejobrunrequest.h"
#include "describejobrunrequest_p.h"
#include "describejobrunresponse.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::DescribeJobRunRequest
 * \brief The DescribeJobRunRequest class provides an interface for GlueDataBrew DescribeJobRun requests.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::describeJobRun
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeJobRunRequest::DescribeJobRunRequest(const DescribeJobRunRequest &other)
    : GlueDataBrewRequest(new DescribeJobRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeJobRunRequest object.
 */
DescribeJobRunRequest::DescribeJobRunRequest()
    : GlueDataBrewRequest(new DescribeJobRunRequestPrivate(GlueDataBrewRequest::DescribeJobRunAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeJobRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeJobRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeJobRunRequest::response(QNetworkReply * const reply) const
{
    return new DescribeJobRunResponse(*this, reply);
}

/*!
 * \class QtAws::GlueDataBrew::DescribeJobRunRequestPrivate
 * \brief The DescribeJobRunRequestPrivate class provides private implementation for DescribeJobRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a DescribeJobRunRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
DescribeJobRunRequestPrivate::DescribeJobRunRequestPrivate(
    const GlueDataBrewRequest::Action action, DescribeJobRunRequest * const q)
    : GlueDataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeJobRunRequest
 * class' copy constructor.
 */
DescribeJobRunRequestPrivate::DescribeJobRunRequestPrivate(
    const DescribeJobRunRequestPrivate &other, DescribeJobRunRequest * const q)
    : GlueDataBrewRequestPrivate(other, q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
