// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getparametersbypathrequest.h"
#include "getparametersbypathrequest_p.h"
#include "getparametersbypathresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::GetParametersByPathRequest
 * \brief The GetParametersByPathRequest class provides an interface for Ssm GetParametersByPath requests.
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
 * \sa SsmClient::getParametersByPath
 */

/*!
 * Constructs a copy of \a other.
 */
GetParametersByPathRequest::GetParametersByPathRequest(const GetParametersByPathRequest &other)
    : SsmRequest(new GetParametersByPathRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetParametersByPathRequest object.
 */
GetParametersByPathRequest::GetParametersByPathRequest()
    : SsmRequest(new GetParametersByPathRequestPrivate(SsmRequest::GetParametersByPathAction, this))
{

}

/*!
 * \reimp
 */
bool GetParametersByPathRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetParametersByPathResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetParametersByPathRequest::response(QNetworkReply * const reply) const
{
    return new GetParametersByPathResponse(*this, reply);
}

/*!
 * \class QtAws::Ssm::GetParametersByPathRequestPrivate
 * \brief The GetParametersByPathRequestPrivate class provides private implementation for GetParametersByPathRequest.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a GetParametersByPathRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
GetParametersByPathRequestPrivate::GetParametersByPathRequestPrivate(
    const SsmRequest::Action action, GetParametersByPathRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetParametersByPathRequest
 * class' copy constructor.
 */
GetParametersByPathRequestPrivate::GetParametersByPathRequestPrivate(
    const GetParametersByPathRequestPrivate &other, GetParametersByPathRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace Ssm
} // namespace QtAws
