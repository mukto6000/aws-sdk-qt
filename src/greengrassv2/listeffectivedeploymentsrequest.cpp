// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeffectivedeploymentsrequest.h"
#include "listeffectivedeploymentsrequest_p.h"
#include "listeffectivedeploymentsresponse.h"
#include "greengrassv2request_p.h"

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::ListEffectiveDeploymentsRequest
 * \brief The ListEffectiveDeploymentsRequest class provides an interface for GreengrassV2 ListEffectiveDeployments requests.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge devices.
 *  This enables devices to collect and analyze data closer to the source of information, react autonomously to local
 *  events, and communicate securely with each other on local networks. Local devices can also communicate securely with
 *  Amazon Web Services IoT Core and export IoT data to the Amazon Web Services Cloud. IoT Greengrass developers can use
 *  Lambda functions and components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  IoT Greengrass Version 2 provides a new major version of the IoT Greengrass Core software, new APIs, and a new console.
 *  Use this API reference to learn how to use the IoT Greengrass V2 API operations to manage components, manage
 *  deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is IoT Greengrass?</a>
 *  in the <i>IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::listEffectiveDeployments
 */

/*!
 * Constructs a copy of \a other.
 */
ListEffectiveDeploymentsRequest::ListEffectiveDeploymentsRequest(const ListEffectiveDeploymentsRequest &other)
    : GreengrassV2Request(new ListEffectiveDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEffectiveDeploymentsRequest object.
 */
ListEffectiveDeploymentsRequest::ListEffectiveDeploymentsRequest()
    : GreengrassV2Request(new ListEffectiveDeploymentsRequestPrivate(GreengrassV2Request::ListEffectiveDeploymentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEffectiveDeploymentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEffectiveDeploymentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEffectiveDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new ListEffectiveDeploymentsResponse(*this, reply);
}

/*!
 * \class QtAws::GreengrassV2::ListEffectiveDeploymentsRequestPrivate
 * \brief The ListEffectiveDeploymentsRequestPrivate class provides private implementation for ListEffectiveDeploymentsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a ListEffectiveDeploymentsRequestPrivate object for GreengrassV2 \a action,
 * with public implementation \a q.
 */
ListEffectiveDeploymentsRequestPrivate::ListEffectiveDeploymentsRequestPrivate(
    const GreengrassV2Request::Action action, ListEffectiveDeploymentsRequest * const q)
    : GreengrassV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEffectiveDeploymentsRequest
 * class' copy constructor.
 */
ListEffectiveDeploymentsRequestPrivate::ListEffectiveDeploymentsRequestPrivate(
    const ListEffectiveDeploymentsRequestPrivate &other, ListEffectiveDeploymentsRequest * const q)
    : GreengrassV2RequestPrivate(other, q)
{

}

} // namespace GreengrassV2
} // namespace QtAws
