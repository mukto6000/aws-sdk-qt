// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "activatedeviceidentifierrequest.h"
#include "activatedeviceidentifierrequest_p.h"
#include "activatedeviceidentifierresponse.h"
#include "privatenetworksrequest_p.h"

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::ActivateDeviceIdentifierRequest
 * \brief The ActivateDeviceIdentifierRequest class provides an interface for PrivateNetworks ActivateDeviceIdentifier requests.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::activateDeviceIdentifier
 */

/*!
 * Constructs a copy of \a other.
 */
ActivateDeviceIdentifierRequest::ActivateDeviceIdentifierRequest(const ActivateDeviceIdentifierRequest &other)
    : PrivateNetworksRequest(new ActivateDeviceIdentifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ActivateDeviceIdentifierRequest object.
 */
ActivateDeviceIdentifierRequest::ActivateDeviceIdentifierRequest()
    : PrivateNetworksRequest(new ActivateDeviceIdentifierRequestPrivate(PrivateNetworksRequest::ActivateDeviceIdentifierAction, this))
{

}

/*!
 * \reimp
 */
bool ActivateDeviceIdentifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ActivateDeviceIdentifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ActivateDeviceIdentifierRequest::response(QNetworkReply * const reply) const
{
    return new ActivateDeviceIdentifierResponse(*this, reply);
}

/*!
 * \class QtAws::PrivateNetworks::ActivateDeviceIdentifierRequestPrivate
 * \brief The ActivateDeviceIdentifierRequestPrivate class provides private implementation for ActivateDeviceIdentifierRequest.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a ActivateDeviceIdentifierRequestPrivate object for PrivateNetworks \a action,
 * with public implementation \a q.
 */
ActivateDeviceIdentifierRequestPrivate::ActivateDeviceIdentifierRequestPrivate(
    const PrivateNetworksRequest::Action action, ActivateDeviceIdentifierRequest * const q)
    : PrivateNetworksRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ActivateDeviceIdentifierRequest
 * class' copy constructor.
 */
ActivateDeviceIdentifierRequestPrivate::ActivateDeviceIdentifierRequestPrivate(
    const ActivateDeviceIdentifierRequestPrivate &other, ActivateDeviceIdentifierRequest * const q)
    : PrivateNetworksRequestPrivate(other, q)
{

}

} // namespace PrivateNetworks
} // namespace QtAws
