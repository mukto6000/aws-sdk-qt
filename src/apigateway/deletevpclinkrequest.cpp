// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevpclinkrequest.h"
#include "deletevpclinkrequest_p.h"
#include "deletevpclinkresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::DeleteVpcLinkRequest
 * \brief The DeleteVpcLinkRequest class provides an interface for ApiGateway DeleteVpcLink requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::deleteVpcLink
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVpcLinkRequest::DeleteVpcLinkRequest(const DeleteVpcLinkRequest &other)
    : ApiGatewayRequest(new DeleteVpcLinkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVpcLinkRequest object.
 */
DeleteVpcLinkRequest::DeleteVpcLinkRequest()
    : ApiGatewayRequest(new DeleteVpcLinkRequestPrivate(ApiGatewayRequest::DeleteVpcLinkAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVpcLinkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVpcLinkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVpcLinkRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpcLinkResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::DeleteVpcLinkRequestPrivate
 * \brief The DeleteVpcLinkRequestPrivate class provides private implementation for DeleteVpcLinkRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a DeleteVpcLinkRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
DeleteVpcLinkRequestPrivate::DeleteVpcLinkRequestPrivate(
    const ApiGatewayRequest::Action action, DeleteVpcLinkRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpcLinkRequest
 * class' copy constructor.
 */
DeleteVpcLinkRequestPrivate::DeleteVpcLinkRequestPrivate(
    const DeleteVpcLinkRequestPrivate &other, DeleteVpcLinkRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
