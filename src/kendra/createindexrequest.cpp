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

#include "createindexrequest.h"
#include "createindexrequest_p.h"
#include "createindexresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateIndexRequest
 * \brief The CreateIndexRequest class provides an interface for Kendra CreateIndex requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createIndex
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIndexRequest::CreateIndexRequest(const CreateIndexRequest &other)
    : KendraRequest(new CreateIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIndexRequest object.
 */
CreateIndexRequest::CreateIndexRequest()
    : KendraRequest(new CreateIndexRequestPrivate(KendraRequest::CreateIndexAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIndexRequest::response(QNetworkReply * const reply) const
{
    return new CreateIndexResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateIndexRequestPrivate
 * \brief The CreateIndexRequestPrivate class provides private implementation for CreateIndexRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateIndexRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateIndexRequestPrivate::CreateIndexRequestPrivate(
    const KendraRequest::Action action, CreateIndexRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIndexRequest
 * class' copy constructor.
 */
CreateIndexRequestPrivate::CreateIndexRequestPrivate(
    const CreateIndexRequestPrivate &other, CreateIndexRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
