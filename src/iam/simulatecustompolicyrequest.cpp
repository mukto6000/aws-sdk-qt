// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "simulatecustompolicyrequest.h"
#include "simulatecustompolicyrequest_p.h"
#include "simulatecustompolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::SimulateCustomPolicyRequest
 * \brief The SimulateCustomPolicyRequest class provides an interface for Iam SimulateCustomPolicy requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::simulateCustomPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
SimulateCustomPolicyRequest::SimulateCustomPolicyRequest(const SimulateCustomPolicyRequest &other)
    : IamRequest(new SimulateCustomPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SimulateCustomPolicyRequest object.
 */
SimulateCustomPolicyRequest::SimulateCustomPolicyRequest()
    : IamRequest(new SimulateCustomPolicyRequestPrivate(IamRequest::SimulateCustomPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool SimulateCustomPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SimulateCustomPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SimulateCustomPolicyRequest::response(QNetworkReply * const reply) const
{
    return new SimulateCustomPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::SimulateCustomPolicyRequestPrivate
 * \brief The SimulateCustomPolicyRequestPrivate class provides private implementation for SimulateCustomPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a SimulateCustomPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
SimulateCustomPolicyRequestPrivate::SimulateCustomPolicyRequestPrivate(
    const IamRequest::Action action, SimulateCustomPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SimulateCustomPolicyRequest
 * class' copy constructor.
 */
SimulateCustomPolicyRequestPrivate::SimulateCustomPolicyRequestPrivate(
    const SimulateCustomPolicyRequestPrivate &other, SimulateCustomPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
