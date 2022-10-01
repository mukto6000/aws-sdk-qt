// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeservicerequest.h"
#include "describeservicerequest_p.h"
#include "describeserviceresponse.h"
#include "apprunnerrequest_p.h"

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::DescribeServiceRequest
 * \brief The DescribeServiceRequest class provides an interface for AppRunner DescribeService requests.
 *
 * \inmodule QtAwsAppRunner
 *
 *  <fullname>App Runner</fullname>
 * 
 *  App Runner is an application service that provides a fast, simple, and cost-effective way to go directly from an
 *  existing container image or source code to a running service in the Amazon Web Services Cloud in seconds. You don't need
 *  to learn new technologies, decide which compute service to use, or understand how to provision and configure Amazon Web
 *  Services
 * 
 *  resources>
 * 
 *  App Runner connects directly to your container registry or source code repository. It provides an automatic delivery
 *  pipeline with fully managed operations, high performance, scalability, and
 * 
 *  security>
 * 
 *  For more information about App Runner, see the <a href="https://docs.aws.amazon.com/apprunner/latest/dg/">App Runner
 *  Developer Guide</a>. For release information, see the <a
 *  href="https://docs.aws.amazon.com/apprunner/latest/relnotes/">App Runner Release
 * 
 *  Notes</a>>
 * 
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that you can use to access the API, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of Region-specific endpoints that App Runner supports, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/apprunner.html">App Runner endpoints and quotas</a> in the <i>Amazon
 *  Web Services General
 *
 * \sa AppRunnerClient::describeService
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeServiceRequest::DescribeServiceRequest(const DescribeServiceRequest &other)
    : AppRunnerRequest(new DescribeServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeServiceRequest object.
 */
DescribeServiceRequest::DescribeServiceRequest()
    : AppRunnerRequest(new DescribeServiceRequestPrivate(AppRunnerRequest::DescribeServiceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServiceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServiceResponse(*this, reply);
}

/*!
 * \class QtAws::AppRunner::DescribeServiceRequestPrivate
 * \brief The DescribeServiceRequestPrivate class provides private implementation for DescribeServiceRequest.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a DescribeServiceRequestPrivate object for AppRunner \a action,
 * with public implementation \a q.
 */
DescribeServiceRequestPrivate::DescribeServiceRequestPrivate(
    const AppRunnerRequest::Action action, DescribeServiceRequest * const q)
    : AppRunnerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeServiceRequest
 * class' copy constructor.
 */
DescribeServiceRequestPrivate::DescribeServiceRequestPrivate(
    const DescribeServiceRequestPrivate &other, DescribeServiceRequest * const q)
    : AppRunnerRequestPrivate(other, q)
{

}

} // namespace AppRunner
} // namespace QtAws
