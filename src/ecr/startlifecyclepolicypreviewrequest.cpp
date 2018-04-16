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

#include "startlifecyclepolicypreviewrequest.h"
#include "startlifecyclepolicypreviewrequest_p.h"
#include "startlifecyclepolicypreviewresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::StartLifecyclePolicyPreviewRequest
 *
 * \brief The StartLifecyclePolicyPreviewRequest class encapsulates ECR StartLifecyclePolicyPreview requests.
 *
 * \ingroup ECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::startLifecyclePolicyPreview
 */

/*!
 * @brief  Constructs a new StartLifecyclePolicyPreviewRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartLifecyclePolicyPreviewRequest::StartLifecyclePolicyPreviewRequest(const StartLifecyclePolicyPreviewRequest &other)
    : ECRRequest(new StartLifecyclePolicyPreviewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StartLifecyclePolicyPreviewRequest object.
 */
StartLifecyclePolicyPreviewRequest::StartLifecyclePolicyPreviewRequest()
    : ECRRequest(new StartLifecyclePolicyPreviewRequestPrivate(ECRRequest::StartLifecyclePolicyPreviewAction, this))
{

}

/*!
 * \reimp
 */
bool StartLifecyclePolicyPreviewRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StartLifecyclePolicyPreviewResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartLifecyclePolicyPreviewResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECRClient::send
 */
QtAws::Core::AwsAbstractResponse * StartLifecyclePolicyPreviewRequest::response(QNetworkReply * const reply) const
{
    return new StartLifecyclePolicyPreviewResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StartLifecyclePolicyPreviewRequestPrivate
 *
 * @brief  Private implementation for StartLifecyclePolicyPreviewRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartLifecyclePolicyPreviewRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public StartLifecyclePolicyPreviewRequest instance.
 */
StartLifecyclePolicyPreviewRequestPrivate::StartLifecyclePolicyPreviewRequestPrivate(
    const ECRRequest::Action action, StartLifecyclePolicyPreviewRequest * const q)
    : ECRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StartLifecyclePolicyPreviewRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartLifecyclePolicyPreviewRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartLifecyclePolicyPreviewRequest instance.
 */
StartLifecyclePolicyPreviewRequestPrivate::StartLifecyclePolicyPreviewRequestPrivate(
    const StartLifecyclePolicyPreviewRequestPrivate &other, StartLifecyclePolicyPreviewRequest * const q)
    : ECRRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
