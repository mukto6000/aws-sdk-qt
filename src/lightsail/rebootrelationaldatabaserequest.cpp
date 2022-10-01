// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rebootrelationaldatabaserequest.h"
#include "rebootrelationaldatabaserequest_p.h"
#include "rebootrelationaldatabaseresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::RebootRelationalDatabaseRequest
 * \brief The RebootRelationalDatabaseRequest class provides an interface for Lightsail RebootRelationalDatabase requests.
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
 * \sa LightsailClient::rebootRelationalDatabase
 */

/*!
 * Constructs a copy of \a other.
 */
RebootRelationalDatabaseRequest::RebootRelationalDatabaseRequest(const RebootRelationalDatabaseRequest &other)
    : LightsailRequest(new RebootRelationalDatabaseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebootRelationalDatabaseRequest object.
 */
RebootRelationalDatabaseRequest::RebootRelationalDatabaseRequest()
    : LightsailRequest(new RebootRelationalDatabaseRequestPrivate(LightsailRequest::RebootRelationalDatabaseAction, this))
{

}

/*!
 * \reimp
 */
bool RebootRelationalDatabaseRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RebootRelationalDatabaseResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RebootRelationalDatabaseRequest::response(QNetworkReply * const reply) const
{
    return new RebootRelationalDatabaseResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::RebootRelationalDatabaseRequestPrivate
 * \brief The RebootRelationalDatabaseRequestPrivate class provides private implementation for RebootRelationalDatabaseRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a RebootRelationalDatabaseRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
RebootRelationalDatabaseRequestPrivate::RebootRelationalDatabaseRequestPrivate(
    const LightsailRequest::Action action, RebootRelationalDatabaseRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RebootRelationalDatabaseRequest
 * class' copy constructor.
 */
RebootRelationalDatabaseRequestPrivate::RebootRelationalDatabaseRequestPrivate(
    const RebootRelationalDatabaseRequestPrivate &other, RebootRelationalDatabaseRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
