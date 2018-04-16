/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteevaluationrequest.h"
#include "deleteevaluationrequest_p.h"
#include "deleteevaluationresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteEvaluationRequest
 *
 * \brief The DeleteEvaluationRequest class encapsulates MachineLearning DeleteEvaluation requests.
 *
 * \ingroup MachineLearning
 *
 *
 * \sa MachineLearningClient::deleteEvaluation
 */

/*!
 * @brief  Constructs a new DeleteEvaluationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEvaluationRequest::DeleteEvaluationRequest(const DeleteEvaluationRequest &other)
    : MachineLearningRequest(new DeleteEvaluationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteEvaluationRequest object.
 */
DeleteEvaluationRequest::DeleteEvaluationRequest()
    : MachineLearningRequest(new DeleteEvaluationRequestPrivate(MachineLearningRequest::DeleteEvaluationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEvaluationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteEvaluationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEvaluationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEvaluationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEvaluationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteEvaluationRequestPrivate
 *
 * @brief  Private implementation for DeleteEvaluationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteEvaluationRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public DeleteEvaluationRequest instance.
 */
DeleteEvaluationRequestPrivate::DeleteEvaluationRequestPrivate(
    const MachineLearningRequest::Action action, DeleteEvaluationRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteEvaluationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEvaluationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEvaluationRequest instance.
 */
DeleteEvaluationRequestPrivate::DeleteEvaluationRequestPrivate(
    const DeleteEvaluationRequestPrivate &other, DeleteEvaluationRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
