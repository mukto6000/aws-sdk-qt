// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvpcconnectorsrequest.h"
#include "listvpcconnectorsrequest_p.h"
#include "listvpcconnectorsresponse.h"
#include "apprunnerrequest_p.h"

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::ListVpcConnectorsRequest
 * \brief The ListVpcConnectorsRequest class provides an interface for AppRunner ListVpcConnectors requests.
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
 * \sa AppRunnerClient::listVpcConnectors
 */

/*!
 * Constructs a copy of \a other.
 */
ListVpcConnectorsRequest::ListVpcConnectorsRequest(const ListVpcConnectorsRequest &other)
    : AppRunnerRequest(new ListVpcConnectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVpcConnectorsRequest object.
 */
ListVpcConnectorsRequest::ListVpcConnectorsRequest()
    : AppRunnerRequest(new ListVpcConnectorsRequestPrivate(AppRunnerRequest::ListVpcConnectorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListVpcConnectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVpcConnectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVpcConnectorsRequest::response(QNetworkReply * const reply) const
{
    return new ListVpcConnectorsResponse(*this, reply);
}

/*!
 * \class QtAws::AppRunner::ListVpcConnectorsRequestPrivate
 * \brief The ListVpcConnectorsRequestPrivate class provides private implementation for ListVpcConnectorsRequest.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a ListVpcConnectorsRequestPrivate object for AppRunner \a action,
 * with public implementation \a q.
 */
ListVpcConnectorsRequestPrivate::ListVpcConnectorsRequestPrivate(
    const AppRunnerRequest::Action action, ListVpcConnectorsRequest * const q)
    : AppRunnerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVpcConnectorsRequest
 * class' copy constructor.
 */
ListVpcConnectorsRequestPrivate::ListVpcConnectorsRequestPrivate(
    const ListVpcConnectorsRequestPrivate &other, ListVpcConnectorsRequest * const q)
    : AppRunnerRequestPrivate(other, q)
{

}

} // namespace AppRunner
} // namespace QtAws
