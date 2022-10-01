// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassessmentrequest.h"
#include "getassessmentrequest_p.h"
#include "getassessmentresponse.h"
#include "auditmanagerrequest_p.h"

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::GetAssessmentRequest
 * \brief The GetAssessmentRequest class provides an interface for AuditManager GetAssessment requests.
 *
 * \inmodule QtAwsAuditManager
 *
 *  Welcome to the Audit Manager API reference. This guide is for developers who need detailed information about the Audit
 *  Manager API operations, data types, and errors.
 * 
 *  </p
 * 
 *  Audit Manager is a service that provides automated evidence collection so that you can continually audit your Amazon Web
 *  Services usage. You can use it to assess the effectiveness of your controls, manage risk, and simplify
 * 
 *  compliance>
 * 
 *  Audit Manager provides prebuilt frameworks that structure and automate assessments for a given compliance standard.
 *  Frameworks include a prebuilt collection of controls with descriptions and testing procedures. These controls are
 *  grouped according to the requirements of the specified compliance standard or regulation. You can also customize
 *  frameworks and controls to support internal audits with specific requirements.
 * 
 *  </p
 * 
 *  Use the following links to get started with the Audit Manager
 * 
 *  API> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Operations.html">Actions</a>: An alphabetical
 *  list of all Audit Manager API
 * 
 *  operations> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Types.html">Data types</a>: An alphabetical
 *  list of all Audit Manager data
 * 
 *  types> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/CommonParameters.html">Common parameters</a>:
 *  Parameters that all Query operations can
 * 
 *  use> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/CommonErrors.html">Common errors</a>: Client and
 *  server errors that all operations can
 * 
 *  return> </li> </ul>
 * 
 *  If you're new to Audit Manager, we recommend that you review the <a
 *  href="https://docs.aws.amazon.com/audit-manager/latest/userguide/what-is.html"> Audit Manager User
 *
 * \sa AuditManagerClient::getAssessment
 */

/*!
 * Constructs a copy of \a other.
 */
GetAssessmentRequest::GetAssessmentRequest(const GetAssessmentRequest &other)
    : AuditManagerRequest(new GetAssessmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAssessmentRequest object.
 */
GetAssessmentRequest::GetAssessmentRequest()
    : AuditManagerRequest(new GetAssessmentRequestPrivate(AuditManagerRequest::GetAssessmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetAssessmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAssessmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAssessmentRequest::response(QNetworkReply * const reply) const
{
    return new GetAssessmentResponse(*this, reply);
}

/*!
 * \class QtAws::AuditManager::GetAssessmentRequestPrivate
 * \brief The GetAssessmentRequestPrivate class provides private implementation for GetAssessmentRequest.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a GetAssessmentRequestPrivate object for AuditManager \a action,
 * with public implementation \a q.
 */
GetAssessmentRequestPrivate::GetAssessmentRequestPrivate(
    const AuditManagerRequest::Action action, GetAssessmentRequest * const q)
    : AuditManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAssessmentRequest
 * class' copy constructor.
 */
GetAssessmentRequestPrivate::GetAssessmentRequestPrivate(
    const GetAssessmentRequestPrivate &other, GetAssessmentRequest * const q)
    : AuditManagerRequestPrivate(other, q)
{

}

} // namespace AuditManager
} // namespace QtAws
