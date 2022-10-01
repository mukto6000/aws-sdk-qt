// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createiampolicyassignmentrequest.h"
#include "createiampolicyassignmentrequest_p.h"
#include "createiampolicyassignmentresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateIAMPolicyAssignmentRequest
 * \brief The CreateIAMPolicyAssignmentRequest class provides an interface for QuickSight CreateIAMPolicyAssignment requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createIAMPolicyAssignment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIAMPolicyAssignmentRequest::CreateIAMPolicyAssignmentRequest(const CreateIAMPolicyAssignmentRequest &other)
    : QuickSightRequest(new CreateIAMPolicyAssignmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIAMPolicyAssignmentRequest object.
 */
CreateIAMPolicyAssignmentRequest::CreateIAMPolicyAssignmentRequest()
    : QuickSightRequest(new CreateIAMPolicyAssignmentRequestPrivate(QuickSightRequest::CreateIAMPolicyAssignmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIAMPolicyAssignmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIAMPolicyAssignmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIAMPolicyAssignmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateIAMPolicyAssignmentResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::CreateIAMPolicyAssignmentRequestPrivate
 * \brief The CreateIAMPolicyAssignmentRequestPrivate class provides private implementation for CreateIAMPolicyAssignmentRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateIAMPolicyAssignmentRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
CreateIAMPolicyAssignmentRequestPrivate::CreateIAMPolicyAssignmentRequestPrivate(
    const QuickSightRequest::Action action, CreateIAMPolicyAssignmentRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIAMPolicyAssignmentRequest
 * class' copy constructor.
 */
CreateIAMPolicyAssignmentRequestPrivate::CreateIAMPolicyAssignmentRequestPrivate(
    const CreateIAMPolicyAssignmentRequestPrivate &other, CreateIAMPolicyAssignmentRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
