// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putremediationexceptionsrequest.h"
#include "putremediationexceptionsrequest_p.h"
#include "putremediationexceptionsresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::PutRemediationExceptionsRequest
 * \brief The PutRemediationExceptionsRequest class provides an interface for ConfigService PutRemediationExceptions requests.
 *
 * \inmodule QtAwsConfigService
 *
 *  <fullname>Config</fullname>
 * 
 *  Config provides a way to keep track of the configurations of all the Amazon Web Services resources associated with your
 *  Amazon Web Services account. You can use Config to get the current and historical configurations of each Amazon Web
 *  Services resource and also to get information about the relationship between the resources. An Amazon Web Services
 *  resource can be an Amazon Compute Cloud (Amazon EC2) instance, an Elastic Block Store (EBS) volume, an elastic network
 *  Interface (ENI), or a security group. For a complete list of resources currently supported by Config, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
 *  Amazon Web Services
 * 
 *  resources</a>>
 * 
 *  You can access and manage Config through the Amazon Web Services Management Console, the Amazon Web Services Command
 *  Line Interface (Amazon Web Services CLI), the Config API, or the Amazon Web Services SDKs for Config. This reference
 *  guide contains documentation for the Config API and the Amazon Web Services CLI commands that you can use to manage
 *  Config. The Config API uses the Signature Version 4 protocol for signing requests. For more information about how to
 *  sign a request with this protocol, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing Process</a>.
 *  For detailed information about Config features and their associated actions or commands, as well as how to work with
 *  Amazon Web Services Management Console, see <a
 *  href="https://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What Is Config</a> in the <i>Config
 *  Developer
 *
 * \sa ConfigServiceClient::putRemediationExceptions
 */

/*!
 * Constructs a copy of \a other.
 */
PutRemediationExceptionsRequest::PutRemediationExceptionsRequest(const PutRemediationExceptionsRequest &other)
    : ConfigServiceRequest(new PutRemediationExceptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRemediationExceptionsRequest object.
 */
PutRemediationExceptionsRequest::PutRemediationExceptionsRequest()
    : ConfigServiceRequest(new PutRemediationExceptionsRequestPrivate(ConfigServiceRequest::PutRemediationExceptionsAction, this))
{

}

/*!
 * \reimp
 */
bool PutRemediationExceptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRemediationExceptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRemediationExceptionsRequest::response(QNetworkReply * const reply) const
{
    return new PutRemediationExceptionsResponse(*this, reply);
}

/*!
 * \class QtAws::ConfigService::PutRemediationExceptionsRequestPrivate
 * \brief The PutRemediationExceptionsRequestPrivate class provides private implementation for PutRemediationExceptionsRequest.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a PutRemediationExceptionsRequestPrivate object for ConfigService \a action,
 * with public implementation \a q.
 */
PutRemediationExceptionsRequestPrivate::PutRemediationExceptionsRequestPrivate(
    const ConfigServiceRequest::Action action, PutRemediationExceptionsRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRemediationExceptionsRequest
 * class' copy constructor.
 */
PutRemediationExceptionsRequestPrivate::PutRemediationExceptionsRequestPrivate(
    const PutRemediationExceptionsRequestPrivate &other, PutRemediationExceptionsRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
