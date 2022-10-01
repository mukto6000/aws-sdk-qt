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

#include "deleteutterancesrequest.h"
#include "deleteutterancesrequest_p.h"
#include "deleteutterancesresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteUtterancesRequest
 * \brief The DeleteUtterancesRequest class provides an interface for LexModelsV2 DeleteUtterances requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteUtterances
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUtterancesRequest::DeleteUtterancesRequest(const DeleteUtterancesRequest &other)
    : LexModelsV2Request(new DeleteUtterancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUtterancesRequest object.
 */
DeleteUtterancesRequest::DeleteUtterancesRequest()
    : LexModelsV2Request(new DeleteUtterancesRequestPrivate(LexModelsV2Request::DeleteUtterancesAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUtterancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUtterancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUtterancesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUtterancesResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteUtterancesRequestPrivate
 * \brief The DeleteUtterancesRequestPrivate class provides private implementation for DeleteUtterancesRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteUtterancesRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteUtterancesRequestPrivate::DeleteUtterancesRequestPrivate(
    const LexModelsV2Request::Action action, DeleteUtterancesRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUtterancesRequest
 * class' copy constructor.
 */
DeleteUtterancesRequestPrivate::DeleteUtterancesRequestPrivate(
    const DeleteUtterancesRequestPrivate &other, DeleteUtterancesRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
