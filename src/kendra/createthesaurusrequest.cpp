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

#include "createthesaurusrequest.h"
#include "createthesaurusrequest_p.h"
#include "createthesaurusresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateThesaurusRequest
 * \brief The CreateThesaurusRequest class provides an interface for Kendra CreateThesaurus requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createThesaurus
 */

/*!
 * Constructs a copy of \a other.
 */
CreateThesaurusRequest::CreateThesaurusRequest(const CreateThesaurusRequest &other)
    : KendraRequest(new CreateThesaurusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateThesaurusRequest object.
 */
CreateThesaurusRequest::CreateThesaurusRequest()
    : KendraRequest(new CreateThesaurusRequestPrivate(KendraRequest::CreateThesaurusAction, this))
{

}

/*!
 * \reimp
 */
bool CreateThesaurusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateThesaurusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateThesaurusRequest::response(QNetworkReply * const reply) const
{
    return new CreateThesaurusResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateThesaurusRequestPrivate
 * \brief The CreateThesaurusRequestPrivate class provides private implementation for CreateThesaurusRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateThesaurusRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateThesaurusRequestPrivate::CreateThesaurusRequestPrivate(
    const KendraRequest::Action action, CreateThesaurusRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateThesaurusRequest
 * class' copy constructor.
 */
CreateThesaurusRequestPrivate::CreateThesaurusRequestPrivate(
    const CreateThesaurusRequestPrivate &other, CreateThesaurusRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
