// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateserviceroletoaccountrequest.h"
#include "associateserviceroletoaccountrequest_p.h"
#include "associateserviceroletoaccountresponse.h"
#include "greengrassv2request_p.h"

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::AssociateServiceRoleToAccountRequest
 * \brief The AssociateServiceRoleToAccountRequest class provides an interface for GreengrassV2 AssociateServiceRoleToAccount requests.
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
 * \sa GreengrassV2Client::associateServiceRoleToAccount
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateServiceRoleToAccountRequest::AssociateServiceRoleToAccountRequest(const AssociateServiceRoleToAccountRequest &other)
    : GreengrassV2Request(new AssociateServiceRoleToAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateServiceRoleToAccountRequest object.
 */
AssociateServiceRoleToAccountRequest::AssociateServiceRoleToAccountRequest()
    : GreengrassV2Request(new AssociateServiceRoleToAccountRequestPrivate(GreengrassV2Request::AssociateServiceRoleToAccountAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateServiceRoleToAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateServiceRoleToAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateServiceRoleToAccountRequest::response(QNetworkReply * const reply) const
{
    return new AssociateServiceRoleToAccountResponse(*this, reply);
}

/*!
 * \class QtAws::GreengrassV2::AssociateServiceRoleToAccountRequestPrivate
 * \brief The AssociateServiceRoleToAccountRequestPrivate class provides private implementation for AssociateServiceRoleToAccountRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a AssociateServiceRoleToAccountRequestPrivate object for GreengrassV2 \a action,
 * with public implementation \a q.
 */
AssociateServiceRoleToAccountRequestPrivate::AssociateServiceRoleToAccountRequestPrivate(
    const GreengrassV2Request::Action action, AssociateServiceRoleToAccountRequest * const q)
    : GreengrassV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateServiceRoleToAccountRequest
 * class' copy constructor.
 */
AssociateServiceRoleToAccountRequestPrivate::AssociateServiceRoleToAccountRequestPrivate(
    const AssociateServiceRoleToAccountRequestPrivate &other, AssociateServiceRoleToAccountRequest * const q)
    : GreengrassV2RequestPrivate(other, q)
{

}

} // namespace GreengrassV2
} // namespace QtAws
