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

#include "getmilestonerequest.h"
#include "getmilestonerequest_p.h"
#include "getmilestoneresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetMilestoneRequest
 * \brief The GetMilestoneRequest class provides an interface for WellArchitected GetMilestone requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>AWS Well-Architected Tool</fullname>
 * 
 *  This is the <i>AWS Well-Architected Tool API Reference</i>. The AWS Well-Architected Tool API provides programmatic
 *  access to the <a href="http://aws.amazon.com/well-architected-tool">AWS Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">AWS Management Console</a>. For information about the AWS
 *  Well-Architected Tool, see the <a href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">AWS
 *  Well-Architected Tool User
 *
 * \sa WellArchitectedClient::getMilestone
 */

/*!
 * Constructs a copy of \a other.
 */
GetMilestoneRequest::GetMilestoneRequest(const GetMilestoneRequest &other)
    : WellArchitectedRequest(new GetMilestoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMilestoneRequest object.
 */
GetMilestoneRequest::GetMilestoneRequest()
    : WellArchitectedRequest(new GetMilestoneRequestPrivate(WellArchitectedRequest::GetMilestoneAction, this))
{

}

/*!
 * \reimp
 */
bool GetMilestoneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMilestoneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMilestoneRequest::response(QNetworkReply * const reply) const
{
    return new GetMilestoneResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::GetMilestoneRequestPrivate
 * \brief The GetMilestoneRequestPrivate class provides private implementation for GetMilestoneRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetMilestoneRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
GetMilestoneRequestPrivate::GetMilestoneRequestPrivate(
    const WellArchitectedRequest::Action action, GetMilestoneRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMilestoneRequest
 * class' copy constructor.
 */
GetMilestoneRequestPrivate::GetMilestoneRequestPrivate(
    const GetMilestoneRequestPrivate &other, GetMilestoneRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
