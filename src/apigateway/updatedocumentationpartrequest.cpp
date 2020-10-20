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

#include "updatedocumentationpartrequest.h"
#include "updatedocumentationpartrequest_p.h"
#include "updatedocumentationpartresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::UpdateDocumentationPartRequest
 * \brief The UpdateDocumentationPartRequest class provides an interface for APIGateway UpdateDocumentationPart requests.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::updateDocumentationPart
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDocumentationPartRequest::UpdateDocumentationPartRequest(const UpdateDocumentationPartRequest &other)
    : APIGatewayRequest(new UpdateDocumentationPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDocumentationPartRequest object.
 */
UpdateDocumentationPartRequest::UpdateDocumentationPartRequest()
    : APIGatewayRequest(new UpdateDocumentationPartRequestPrivate(APIGatewayRequest::UpdateDocumentationPartAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDocumentationPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDocumentationPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDocumentationPartRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDocumentationPartResponse(*this, reply);
}

/*!
 * \class QtAws::APIGateway::UpdateDocumentationPartRequestPrivate
 * \brief The UpdateDocumentationPartRequestPrivate class provides private implementation for UpdateDocumentationPartRequest.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a UpdateDocumentationPartRequestPrivate object for APIGateway \a action,
 * with public implementation \a q.
 */
UpdateDocumentationPartRequestPrivate::UpdateDocumentationPartRequestPrivate(
    const APIGatewayRequest::Action action, UpdateDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDocumentationPartRequest
 * class' copy constructor.
 */
UpdateDocumentationPartRequestPrivate::UpdateDocumentationPartRequestPrivate(
    const UpdateDocumentationPartRequestPrivate &other, UpdateDocumentationPartRequest * const q)
    : APIGatewayRequestPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws
