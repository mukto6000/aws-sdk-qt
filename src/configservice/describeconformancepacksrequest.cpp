// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconformancepacksrequest.h"
#include "describeconformancepacksrequest_p.h"
#include "describeconformancepacksresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/*!
 * \class QtAws::ConfigService::DescribeConformancePacksRequest
 * \brief The DescribeConformancePacksRequest class provides an interface for ConfigService DescribeConformancePacks requests.
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
 * \sa ConfigServiceClient::describeConformancePacks
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConformancePacksRequest::DescribeConformancePacksRequest(const DescribeConformancePacksRequest &other)
    : ConfigServiceRequest(new DescribeConformancePacksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConformancePacksRequest object.
 */
DescribeConformancePacksRequest::DescribeConformancePacksRequest()
    : ConfigServiceRequest(new DescribeConformancePacksRequestPrivate(ConfigServiceRequest::DescribeConformancePacksAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConformancePacksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConformancePacksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConformancePacksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConformancePacksResponse(*this, reply);
}

/*!
 * \class QtAws::ConfigService::DescribeConformancePacksRequestPrivate
 * \brief The DescribeConformancePacksRequestPrivate class provides private implementation for DescribeConformancePacksRequest.
 * \internal
 *
 * \inmodule QtAwsConfigService
 */

/*!
 * Constructs a DescribeConformancePacksRequestPrivate object for ConfigService \a action,
 * with public implementation \a q.
 */
DescribeConformancePacksRequestPrivate::DescribeConformancePacksRequestPrivate(
    const ConfigServiceRequest::Action action, DescribeConformancePacksRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConformancePacksRequest
 * class' copy constructor.
 */
DescribeConformancePacksRequestPrivate::DescribeConformancePacksRequestPrivate(
    const DescribeConformancePacksRequestPrivate &other, DescribeConformancePacksRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
