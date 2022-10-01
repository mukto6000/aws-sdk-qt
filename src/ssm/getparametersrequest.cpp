// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getparametersrequest.h"
#include "getparametersrequest_p.h"
#include "getparametersresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::GetParametersRequest
 * \brief The GetParametersRequest class provides an interface for Ssm GetParameters requests.
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
 * \sa SsmClient::getParameters
 */

/*!
 * Constructs a copy of \a other.
 */
GetParametersRequest::GetParametersRequest(const GetParametersRequest &other)
    : SsmRequest(new GetParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetParametersRequest object.
 */
GetParametersRequest::GetParametersRequest()
    : SsmRequest(new GetParametersRequestPrivate(SsmRequest::GetParametersAction, this))
{

}

/*!
 * \reimp
 */
bool GetParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetParametersRequest::response(QNetworkReply * const reply) const
{
    return new GetParametersResponse(*this, reply);
}

/*!
 * \class QtAws::Ssm::GetParametersRequestPrivate
 * \brief The GetParametersRequestPrivate class provides private implementation for GetParametersRequest.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a GetParametersRequestPrivate object for Ssm \a action,
 * with public implementation \a q.
 */
GetParametersRequestPrivate::GetParametersRequestPrivate(
    const SsmRequest::Action action, GetParametersRequest * const q)
    : SsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetParametersRequest
 * class' copy constructor.
 */
GetParametersRequestPrivate::GetParametersRequestPrivate(
    const GetParametersRequestPrivate &other, GetParametersRequest * const q)
    : SsmRequestPrivate(other, q)
{

}

} // namespace Ssm
} // namespace QtAws
