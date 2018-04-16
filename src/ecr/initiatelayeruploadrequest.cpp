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

#include "initiatelayeruploadrequest.h"
#include "initiatelayeruploadrequest_p.h"
#include "initiatelayeruploadresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::InitiateLayerUploadRequest
 *
 * \brief The InitiateLayerUploadRequest class encapsulates ECR InitiateLayerUpload requests.
 *
 * \ingroup ECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::initiateLayerUpload
 */

/*!
 * @brief  Constructs a new InitiateLayerUploadRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InitiateLayerUploadRequest::InitiateLayerUploadRequest(const InitiateLayerUploadRequest &other)
    : ECRRequest(new InitiateLayerUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new InitiateLayerUploadRequest object.
 */
InitiateLayerUploadRequest::InitiateLayerUploadRequest()
    : ECRRequest(new InitiateLayerUploadRequestPrivate(ECRRequest::InitiateLayerUploadAction, this))
{

}

/*!
 * \reimp
 */
bool InitiateLayerUploadRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an InitiateLayerUploadResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InitiateLayerUploadResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECRClient::send
 */
QtAws::Core::AwsAbstractResponse * InitiateLayerUploadRequest::response(QNetworkReply * const reply) const
{
    return new InitiateLayerUploadResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  InitiateLayerUploadRequestPrivate
 *
 * @brief  Private implementation for InitiateLayerUploadRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new InitiateLayerUploadRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public InitiateLayerUploadRequest instance.
 */
InitiateLayerUploadRequestPrivate::InitiateLayerUploadRequestPrivate(
    const ECRRequest::Action action, InitiateLayerUploadRequest * const q)
    : ECRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new InitiateLayerUploadRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InitiateLayerUploadRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InitiateLayerUploadRequest instance.
 */
InitiateLayerUploadRequestPrivate::InitiateLayerUploadRequestPrivate(
    const InitiateLayerUploadRequestPrivate &other, InitiateLayerUploadRequest * const q)
    : ECRRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
