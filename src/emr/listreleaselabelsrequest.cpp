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

#include "listreleaselabelsrequest.h"
#include "listreleaselabelsrequest_p.h"
#include "listreleaselabelsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListReleaseLabelsRequest
 * \brief The ListReleaseLabelsRequest class provides an interface for Emr ListReleaseLabels requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listReleaseLabels
 */

/*!
 * Constructs a copy of \a other.
 */
ListReleaseLabelsRequest::ListReleaseLabelsRequest(const ListReleaseLabelsRequest &other)
    : EmrRequest(new ListReleaseLabelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReleaseLabelsRequest object.
 */
ListReleaseLabelsRequest::ListReleaseLabelsRequest()
    : EmrRequest(new ListReleaseLabelsRequestPrivate(EmrRequest::ListReleaseLabelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReleaseLabelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReleaseLabelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReleaseLabelsRequest::response(QNetworkReply * const reply) const
{
    return new ListReleaseLabelsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ListReleaseLabelsRequestPrivate
 * \brief The ListReleaseLabelsRequestPrivate class provides private implementation for ListReleaseLabelsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListReleaseLabelsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ListReleaseLabelsRequestPrivate::ListReleaseLabelsRequestPrivate(
    const EmrRequest::Action action, ListReleaseLabelsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReleaseLabelsRequest
 * class' copy constructor.
 */
ListReleaseLabelsRequestPrivate::ListReleaseLabelsRequestPrivate(
    const ListReleaseLabelsRequestPrivate &other, ListReleaseLabelsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
