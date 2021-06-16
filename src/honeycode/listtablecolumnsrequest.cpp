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

#include "listtablecolumnsrequest.h"
#include "listtablecolumnsrequest_p.h"
#include "listtablecolumnsresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::ListTableColumnsRequest
 * \brief The ListTableColumnsRequest class provides an interface for Honeycode ListTableColumns requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::listTableColumns
 */

/*!
 * Constructs a copy of \a other.
 */
ListTableColumnsRequest::ListTableColumnsRequest(const ListTableColumnsRequest &other)
    : HoneycodeRequest(new ListTableColumnsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTableColumnsRequest object.
 */
ListTableColumnsRequest::ListTableColumnsRequest()
    : HoneycodeRequest(new ListTableColumnsRequestPrivate(HoneycodeRequest::ListTableColumnsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTableColumnsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTableColumnsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTableColumnsRequest::response(QNetworkReply * const reply) const
{
    return new ListTableColumnsResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::ListTableColumnsRequestPrivate
 * \brief The ListTableColumnsRequestPrivate class provides private implementation for ListTableColumnsRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a ListTableColumnsRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
ListTableColumnsRequestPrivate::ListTableColumnsRequestPrivate(
    const HoneycodeRequest::Action action, ListTableColumnsRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTableColumnsRequest
 * class' copy constructor.
 */
ListTableColumnsRequestPrivate::ListTableColumnsRequestPrivate(
    const ListTableColumnsRequestPrivate &other, ListTableColumnsRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
