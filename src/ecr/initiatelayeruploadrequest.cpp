/*
    Copyright 2013-2020 Paul Colby

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

#include "initiatelayeruploadrequest.h"
#include "initiatelayeruploadrequest_p.h"
#include "initiatelayeruploadresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::InitiateLayerUploadRequest
 * \brief The InitiateLayerUploadRequest class provides an interface for ECR InitiateLayerUpload requests.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa EcrClient::initiateLayerUpload
 */

/*!
 * Constructs a copy of \a other.
 */
InitiateLayerUploadRequest::InitiateLayerUploadRequest(const InitiateLayerUploadRequest &other)
    : EcrRequest(new InitiateLayerUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InitiateLayerUploadRequest object.
 */
InitiateLayerUploadRequest::InitiateLayerUploadRequest()
    : EcrRequest(new InitiateLayerUploadRequestPrivate(EcrRequest::InitiateLayerUploadAction, this))
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
 * Returns a InitiateLayerUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InitiateLayerUploadRequest::response(QNetworkReply * const reply) const
{
    return new InitiateLayerUploadResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::InitiateLayerUploadRequestPrivate
 * \brief The InitiateLayerUploadRequestPrivate class provides private implementation for InitiateLayerUploadRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a InitiateLayerUploadRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
InitiateLayerUploadRequestPrivate::InitiateLayerUploadRequestPrivate(
    const EcrRequest::Action action, InitiateLayerUploadRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InitiateLayerUploadRequest
 * class' copy constructor.
 */
InitiateLayerUploadRequestPrivate::InitiateLayerUploadRequestPrivate(
    const InitiateLayerUploadRequestPrivate &other, InitiateLayerUploadRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
