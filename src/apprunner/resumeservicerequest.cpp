/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "resumeservicerequest.h"
#include "resumeservicerequest_p.h"
#include "resumeserviceresponse.h"
#include "apprunnerrequest_p.h"

namespace QtAws {
namespace AppRunner {

/*!
 * \class QtAws::AppRunner::ResumeServiceRequest
 * \brief The ResumeServiceRequest class provides an interface for AppRunner ResumeService requests.
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
 * \sa AppRunnerClient::resumeService
 */

/*!
 * Constructs a copy of \a other.
 */
ResumeServiceRequest::ResumeServiceRequest(const ResumeServiceRequest &other)
    : AppRunnerRequest(new ResumeServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResumeServiceRequest object.
 */
ResumeServiceRequest::ResumeServiceRequest()
    : AppRunnerRequest(new ResumeServiceRequestPrivate(AppRunnerRequest::ResumeServiceAction, this))
{

}

/*!
 * \reimp
 */
bool ResumeServiceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResumeServiceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResumeServiceRequest::response(QNetworkReply * const reply) const
{
    return new ResumeServiceResponse(*this, reply);
}

/*!
 * \class QtAws::AppRunner::ResumeServiceRequestPrivate
 * \brief The ResumeServiceRequestPrivate class provides private implementation for ResumeServiceRequest.
 * \internal
 *
 * \inmodule QtAwsAppRunner
 */

/*!
 * Constructs a ResumeServiceRequestPrivate object for AppRunner \a action,
 * with public implementation \a q.
 */
ResumeServiceRequestPrivate::ResumeServiceRequestPrivate(
    const AppRunnerRequest::Action action, ResumeServiceRequest * const q)
    : AppRunnerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResumeServiceRequest
 * class' copy constructor.
 */
ResumeServiceRequestPrivate::ResumeServiceRequestPrivate(
    const ResumeServiceRequestPrivate &other, ResumeServiceRequest * const q)
    : AppRunnerRequestPrivate(other, q)
{

}

} // namespace AppRunner
} // namespace QtAws
