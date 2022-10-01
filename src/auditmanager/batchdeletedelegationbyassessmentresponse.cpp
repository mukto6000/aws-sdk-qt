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

#include "batchdeletedelegationbyassessmentresponse.h"
#include "batchdeletedelegationbyassessmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::BatchDeleteDelegationByAssessmentResponse
 * \brief The BatchDeleteDelegationByAssessmentResponse class provides an interace for AuditManager BatchDeleteDelegationByAssessment responses.
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
 * \sa AuditManagerClient::batchDeleteDelegationByAssessment
 */

/*!
 * Constructs a BatchDeleteDelegationByAssessmentResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteDelegationByAssessmentResponse::BatchDeleteDelegationByAssessmentResponse(
        const BatchDeleteDelegationByAssessmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AuditManagerResponse(new BatchDeleteDelegationByAssessmentResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteDelegationByAssessmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteDelegationByAssessmentRequest * BatchDeleteDelegationByAssessmentResponse::request() const
{
    Q_D(const BatchDeleteDelegationByAssessmentResponse);
    return static_cast<const BatchDeleteDelegationByAssessmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AuditManager BatchDeleteDelegationByAssessment \a response.
 */
void BatchDeleteDelegationByAssessmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteDelegationByAssessmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AuditManager::BatchDeleteDelegationByAssessmentResponsePrivate
 * \brief The BatchDeleteDelegationByAssessmentResponsePrivate class provides private implementation for BatchDeleteDelegationByAssessmentResponse.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a BatchDeleteDelegationByAssessmentResponsePrivate object with public implementation \a q.
 */
BatchDeleteDelegationByAssessmentResponsePrivate::BatchDeleteDelegationByAssessmentResponsePrivate(
    BatchDeleteDelegationByAssessmentResponse * const q) : AuditManagerResponsePrivate(q)
{

}

/*!
 * Parses a AuditManager BatchDeleteDelegationByAssessment response element from \a xml.
 */
void BatchDeleteDelegationByAssessmentResponsePrivate::parseBatchDeleteDelegationByAssessmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteDelegationByAssessmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AuditManager
} // namespace QtAws
