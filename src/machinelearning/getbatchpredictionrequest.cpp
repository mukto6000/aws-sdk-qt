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

#include "getbatchpredictionrequest.h"
#include "getbatchpredictionrequest_p.h"
#include "getbatchpredictionresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::GetBatchPredictionRequest
 * \brief The GetBatchPredictionRequest class provides an interface for MachineLearning GetBatchPrediction requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::getBatchPrediction
 */

/*!
 * Constructs a copy of \a other.
 */
GetBatchPredictionRequest::GetBatchPredictionRequest(const GetBatchPredictionRequest &other)
    : MachineLearningRequest(new GetBatchPredictionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBatchPredictionRequest object.
 */
GetBatchPredictionRequest::GetBatchPredictionRequest()
    : MachineLearningRequest(new GetBatchPredictionRequestPrivate(MachineLearningRequest::GetBatchPredictionAction, this))
{

}

/*!
 * \reimp
 */
bool GetBatchPredictionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBatchPredictionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBatchPredictionRequest::response(QNetworkReply * const reply) const
{
    return new GetBatchPredictionResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::GetBatchPredictionRequestPrivate
 * \brief The GetBatchPredictionRequestPrivate class provides private implementation for GetBatchPredictionRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a GetBatchPredictionRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
GetBatchPredictionRequestPrivate::GetBatchPredictionRequestPrivate(
    const MachineLearningRequest::Action action, GetBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBatchPredictionRequest
 * class' copy constructor.
 */
GetBatchPredictionRequestPrivate::GetBatchPredictionRequestPrivate(
    const GetBatchPredictionRequestPrivate &other, GetBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
