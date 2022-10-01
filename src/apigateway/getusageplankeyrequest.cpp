// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusageplankeyrequest.h"
#include "getusageplankeyrequest_p.h"
#include "getusageplankeyresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::GetUsagePlanKeyRequest
 * \brief The GetUsagePlanKeyRequest class provides an interface for ApiGateway GetUsagePlanKey requests.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::getUsagePlanKey
 */

/*!
 * Constructs a copy of \a other.
 */
GetUsagePlanKeyRequest::GetUsagePlanKeyRequest(const GetUsagePlanKeyRequest &other)
    : ApiGatewayRequest(new GetUsagePlanKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUsagePlanKeyRequest object.
 */
GetUsagePlanKeyRequest::GetUsagePlanKeyRequest()
    : ApiGatewayRequest(new GetUsagePlanKeyRequestPrivate(ApiGatewayRequest::GetUsagePlanKeyAction, this))
{

}

/*!
 * \reimp
 */
bool GetUsagePlanKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUsagePlanKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUsagePlanKeyRequest::response(QNetworkReply * const reply) const
{
    return new GetUsagePlanKeyResponse(*this, reply);
}

/*!
 * \class QtAws::ApiGateway::GetUsagePlanKeyRequestPrivate
 * \brief The GetUsagePlanKeyRequestPrivate class provides private implementation for GetUsagePlanKeyRequest.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a GetUsagePlanKeyRequestPrivate object for ApiGateway \a action,
 * with public implementation \a q.
 */
GetUsagePlanKeyRequestPrivate::GetUsagePlanKeyRequestPrivate(
    const ApiGatewayRequest::Action action, GetUsagePlanKeyRequest * const q)
    : ApiGatewayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUsagePlanKeyRequest
 * class' copy constructor.
 */
GetUsagePlanKeyRequestPrivate::GetUsagePlanKeyRequestPrivate(
    const GetUsagePlanKeyRequestPrivate &other, GetUsagePlanKeyRequest * const q)
    : ApiGatewayRequestPrivate(other, q)
{

}

} // namespace ApiGateway
} // namespace QtAws
