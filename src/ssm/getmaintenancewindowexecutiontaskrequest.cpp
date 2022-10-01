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

#include "getmaintenancewindowexecutiontaskrequest.h"
#include "getmaintenancewindowexecutiontaskrequest_p.h"
#include "getmaintenancewindowexecutiontaskresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::GetMaintenanceWindowExecutionTaskRequest
 * \brief The GetMaintenanceWindowExecutionTaskRequest class provides an interface for Ssm GetMaintenanceWindowExecutionTask requests.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
 *
 * \sa SsmClient::getMaintenanceWindowExecutionTask
 */

/*!
 * Constructs a copy of \a other.
 */
GetMaintenanceWindowExecutionTaskRequest::GetMaintenanceWindowExecutionTaskRequest(const GetMaintenanceWindowExecutionTaskRequest &other)
    : SsmRequest(new GetMaintenanceWindowExecutionTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMaintenanceWindowExecutionTaskRequest object.
 */
GetMaintenanceWindowExecutionTaskRequest::GetMaintenanceWindowExecutionTaskRequest()
    : SsmRequest(new GetMaintenanceWindowExecutionTaskRequestPrivate(SsmRequest::GetMaintenanceWindowExecutionTaskAction, this))
{

}

/*!
 * \reimp
 */
bool GetMaintenanceWindowExecutionTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMaintenanceWindowExecutionTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMaintenanceWindowExecutionTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetMaintenanceWindowExecutionTaskResponse(*this, reply);
}

/*!
 * \class QtAws::Ssm::GetMaintenanceWindowExecutionTaskRequestPrivate
 * \brief The GetMaintenanceWindowExecutionTaskRequestPrivate class provides private implementation for GetMaintenanceWindowExecutionTaskRequest.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a GetMaintenanceWindowExecutionTaskRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
GetMaintenanceWindowExecutionTaskRequestPrivate::GetMaintenanceWindowExecutionTaskRequestPrivate(
    const SsmRequest::Action action, GetMaintenanceWindowExecutionTaskRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMaintenanceWindowExecutionTaskRequest
 * class' copy constructor.
 */
GetMaintenanceWindowExecutionTaskRequestPrivate::GetMaintenanceWindowExecutionTaskRequestPrivate(
    const GetMaintenanceWindowExecutionTaskRequestPrivate &other, GetMaintenanceWindowExecutionTaskRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace Ssm
} // namespace QtAws
