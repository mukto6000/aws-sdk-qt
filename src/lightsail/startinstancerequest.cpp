// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startinstancerequest.h"
#include "startinstancerequest_p.h"
#include "startinstanceresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::StartInstanceRequest
 * \brief The StartInstanceRequest class provides an interface for Lightsail StartInstance requests.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (Amazon Web Services) for developers who
 *  need to build websites or web applications. It includes everything you need to launch your project quickly - instances
 *  (virtual private servers), container services, storage buckets, managed databases, SSD-based block storage, static IP
 *  addresses, load balancers, content delivery network (CDN) distributions, DNS management of registered domains, and
 *  resource snapshots (backups) - for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Amazon
 *  Lightsail Developer
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Lightsail service, see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints
 *  and Quotas</a> in the <i>Amazon Web Services General
 *
 * \sa LightsailClient::startInstance
 */

/*!
 * Constructs a copy of \a other.
 */
StartInstanceRequest::StartInstanceRequest(const StartInstanceRequest &other)
    : LightsailRequest(new StartInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartInstanceRequest object.
 */
StartInstanceRequest::StartInstanceRequest()
    : LightsailRequest(new StartInstanceRequestPrivate(LightsailRequest::StartInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool StartInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StartInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::StartInstanceRequestPrivate
 * \brief The StartInstanceRequestPrivate class provides private implementation for StartInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a StartInstanceRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
StartInstanceRequestPrivate::StartInstanceRequestPrivate(
    const LightsailRequest::Action action, StartInstanceRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartInstanceRequest
 * class' copy constructor.
 */
StartInstanceRequestPrivate::StartInstanceRequestPrivate(
    const StartInstanceRequestPrivate &other, StartInstanceRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
