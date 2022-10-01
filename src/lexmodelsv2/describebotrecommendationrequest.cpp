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

#include "describebotrecommendationrequest.h"
#include "describebotrecommendationrequest_p.h"
#include "describebotrecommendationresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotRecommendationRequest
 * \brief The DescribeBotRecommendationRequest class provides an interface for LexModelsV2 DescribeBotRecommendation requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotRecommendation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBotRecommendationRequest::DescribeBotRecommendationRequest(const DescribeBotRecommendationRequest &other)
    : LexModelsV2Request(new DescribeBotRecommendationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBotRecommendationRequest object.
 */
DescribeBotRecommendationRequest::DescribeBotRecommendationRequest()
    : LexModelsV2Request(new DescribeBotRecommendationRequestPrivate(LexModelsV2Request::DescribeBotRecommendationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBotRecommendationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBotRecommendationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBotRecommendationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBotRecommendationResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotRecommendationRequestPrivate
 * \brief The DescribeBotRecommendationRequestPrivate class provides private implementation for DescribeBotRecommendationRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotRecommendationRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DescribeBotRecommendationRequestPrivate::DescribeBotRecommendationRequestPrivate(
    const LexModelsV2Request::Action action, DescribeBotRecommendationRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBotRecommendationRequest
 * class' copy constructor.
 */
DescribeBotRecommendationRequestPrivate::DescribeBotRecommendationRequestPrivate(
    const DescribeBotRecommendationRequestPrivate &other, DescribeBotRecommendationRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
