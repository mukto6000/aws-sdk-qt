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

#include "mturkclient.h"
#include "mturkclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptqualificationrequestrequest.h"
#include "acceptqualificationrequestresponse.h"
#include "approveassignmentrequest.h"
#include "approveassignmentresponse.h"
#include "associatequalificationwithworkerrequest.h"
#include "associatequalificationwithworkerresponse.h"
#include "createadditionalassignmentsforhitrequest.h"
#include "createadditionalassignmentsforhitresponse.h"
#include "createhitrequest.h"
#include "createhitresponse.h"
#include "createhittyperequest.h"
#include "createhittyperesponse.h"
#include "createhitwithhittyperequest.h"
#include "createhitwithhittyperesponse.h"
#include "createqualificationtyperequest.h"
#include "createqualificationtyperesponse.h"
#include "createworkerblockrequest.h"
#include "createworkerblockresponse.h"
#include "deletehitrequest.h"
#include "deletehitresponse.h"
#include "deletequalificationtyperequest.h"
#include "deletequalificationtyperesponse.h"
#include "deleteworkerblockrequest.h"
#include "deleteworkerblockresponse.h"
#include "disassociatequalificationfromworkerrequest.h"
#include "disassociatequalificationfromworkerresponse.h"
#include "getaccountbalancerequest.h"
#include "getaccountbalanceresponse.h"
#include "getassignmentrequest.h"
#include "getassignmentresponse.h"
#include "getfileuploadurlrequest.h"
#include "getfileuploadurlresponse.h"
#include "gethitrequest.h"
#include "gethitresponse.h"
#include "getqualificationscorerequest.h"
#include "getqualificationscoreresponse.h"
#include "getqualificationtyperequest.h"
#include "getqualificationtyperesponse.h"
#include "listassignmentsforhitrequest.h"
#include "listassignmentsforhitresponse.h"
#include "listbonuspaymentsrequest.h"
#include "listbonuspaymentsresponse.h"
#include "listhitsrequest.h"
#include "listhitsresponse.h"
#include "listhitsforqualificationtyperequest.h"
#include "listhitsforqualificationtyperesponse.h"
#include "listqualificationrequestsrequest.h"
#include "listqualificationrequestsresponse.h"
#include "listqualificationtypesrequest.h"
#include "listqualificationtypesresponse.h"
#include "listreviewpolicyresultsforhitrequest.h"
#include "listreviewpolicyresultsforhitresponse.h"
#include "listreviewablehitsrequest.h"
#include "listreviewablehitsresponse.h"
#include "listworkerblocksrequest.h"
#include "listworkerblocksresponse.h"
#include "listworkerswithqualificationtyperequest.h"
#include "listworkerswithqualificationtyperesponse.h"
#include "notifyworkersrequest.h"
#include "notifyworkersresponse.h"
#include "rejectassignmentrequest.h"
#include "rejectassignmentresponse.h"
#include "rejectqualificationrequestrequest.h"
#include "rejectqualificationrequestresponse.h"
#include "sendbonusrequest.h"
#include "sendbonusresponse.h"
#include "sendtesteventnotificationrequest.h"
#include "sendtesteventnotificationresponse.h"
#include "updateexpirationforhitrequest.h"
#include "updateexpirationforhitresponse.h"
#include "updatehitreviewstatusrequest.h"
#include "updatehitreviewstatusresponse.h"
#include "updatehittypeofhitrequest.h"
#include "updatehittypeofhitresponse.h"
#include "updatenotificationsettingsrequest.h"
#include "updatenotificationsettingsresponse.h"
#include "updatequalificationtyperequest.h"
#include "updatequalificationtyperesponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MTurk
 * \brief Contains classess for accessing Amazon Mechanical Turk ( MTurk).
 *
 * \inmodule QtAwsMTurk
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::MTurkClient
 * \brief The MTurkClient class provides access to the Amazon Mechanical Turk ( MTurk) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMTurk
 *
 */

/*!
 * \brief Constructs a MTurkClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MTurkClient::MTurkClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MTurkClientPrivate(this), parent)
{
    Q_D(MTurkClient);
    d->apiVersion = QStringLiteral("2017-01-17");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("mturk-requester");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Mechanical Turk");
    d->serviceName = QStringLiteral("mturk-requester");
}

/*!
 * \overload MTurkClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MTurkClient::MTurkClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MTurkClientPrivate(this), parent)
{
    Q_D(MTurkClient);
    d->apiVersion = QStringLiteral("2017-01-17");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("mturk-requester");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Mechanical Turk");
    d->serviceName = QStringLiteral("mturk-requester");
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * AcceptQualificationRequestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>AcceptQualificationRequest</code> operation approves a Worker's request for a Qualification.
 *
 * </p
 *
 * Only the owner of the Qualification type can grant a Qualification request for that type.
 *
 * </p
 *
 * A successful request for the <code>AcceptQualificationRequest</code> operation returns with no errors and an empty body.
 */
AcceptQualificationRequestResponse * MTurkClient::acceptQualificationRequest(const AcceptQualificationRequestRequest &request)
{
    return qobject_cast<AcceptQualificationRequestResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * ApproveAssignmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ApproveAssignment</code> operation approves the results of a completed assignment.
 *
 * </p
 *
 * Approving an assignment initiates two payments from the Requester's Amazon.com account
 *
 * </p <ul> <li>
 *
 * The Worker who submitted the results is paid the reward specified in the HIT.
 *
 * </p </li> <li>
 *
 * Amazon Mechanical Turk fees are debited.
 *
 * </p </li> </ul>
 *
 * If the Requester's account does not have adequate funds for these payments, the call to ApproveAssignment returns an
 * exception, and the approval is not processed. You can include an optional feedback message with the approval, which the
 * Worker can see in the Status section of the web site.
 *
 * </p
 *
 * You can also call this operation for assignments that were previous rejected and approve them by explicitly overriding
 * the previous rejection. This only works on rejected assignments that were submitted within the previous 30 days and only
 * if the assignment's related HIT has not been deleted.
 */
ApproveAssignmentResponse * MTurkClient::approveAssignment(const ApproveAssignmentRequest &request)
{
    return qobject_cast<ApproveAssignmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * AssociateQualificationWithWorkerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>AssociateQualificationWithWorker</code> operation gives a Worker a Qualification.
 * <code>AssociateQualificationWithWorker</code> does not require that the Worker submit a Qualification request. It gives
 * the Qualification directly to the Worker.
 *
 * </p
 *
 * You can only assign a Qualification of a Qualification type that you created (using the
 * <code>CreateQualificationType</code> operation).
 *
 * </p <note>
 *
 * Note: <code>AssociateQualificationWithWorker</code> does not affect any pending Qualification requests for the
 * Qualification by the Worker. If you assign a Qualification to a Worker, then later grant a Qualification request made by
 * the Worker, the granting of the request may modify the Qualification score. To resolve a pending Qualification request
 * without affecting the Qualification the Worker already has, reject the request with the
 * <code>RejectQualificationRequest</code> operation.
 */
AssociateQualificationWithWorkerResponse * MTurkClient::associateQualificationWithWorker(const AssociateQualificationWithWorkerRequest &request)
{
    return qobject_cast<AssociateQualificationWithWorkerResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * CreateAdditionalAssignmentsForHITResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>CreateAdditionalAssignmentsForHIT</code> operation increases the maximum number of assignments of an existing
 * HIT.
 *
 * </p
 *
 * To extend the maximum number of assignments, specify the number of additional
 *
 * assignments> <note> <ul> <li>
 *
 * HITs created with fewer than 10 assignments cannot be extended to have 10 or more assignments. Attempting to add
 * assignments in a way that brings the total number of assignments for a HIT from fewer than 10 assignments to 10 or more
 * assignments will result in an <code>AWS.MechanicalTurk.InvalidMaximumAssignmentsIncrease</code>
 *
 * exception> </li> <li>
 *
 * HITs that were created before July 22, 2015 cannot be extended. Attempting to extend HITs that were created before July
 * 22, 2015 will result in an <code>AWS.MechanicalTurk.HITTooOldForExtension</code> exception.
 */
CreateAdditionalAssignmentsForHITResponse * MTurkClient::createAdditionalAssignmentsForHIT(const CreateAdditionalAssignmentsForHITRequest &request)
{
    return qobject_cast<CreateAdditionalAssignmentsForHITResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * CreateHITResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>CreateHIT</code> operation creates a new Human Intelligence Task (HIT). The new HIT is made available for
 * Workers to find and accept on the Amazon Mechanical Turk website.
 *
 * </p
 *
 * This operation allows you to specify a new HIT by passing in values for the properties of the HIT, such as its title,
 * reward amount and number of assignments. When you pass these values to <code>CreateHIT</code>, a new HIT is created for
 * you, with a new <code>HITTypeID</code>. The HITTypeID can be used to create additional HITs in the future without
 * needing to specify common parameters such as the title, description and reward amount each
 *
 * time>
 *
 * An alternative way to create HITs is to first generate a HITTypeID using the <code>CreateHITType</code> operation and
 * then call the <code>CreateHITWithHITType</code> operation. This is the recommended best practice for Requesters who are
 * creating large numbers of HITs.
 *
 * </p
 *
 * CreateHIT also supports several ways to provide question data: by providing a value for the <code>Question</code>
 * parameter that fully specifies the contents of the HIT, or by providing a <code>HitLayoutId</code> and associated
 * <code>HitLayoutParameters</code>.
 *
 * </p <note>
 *
 * If a HIT is created with 10 or more maximum assignments, there is an additional fee. For more information, see <a
 * href="https://requester.mturk.com/pricing">Amazon Mechanical Turk
 */
CreateHITResponse * MTurkClient::createHIT(const CreateHITRequest &request)
{
    return qobject_cast<CreateHITResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * CreateHITTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>CreateHITType</code> operation creates a new HIT type. This operation allows you to define a standard set of
 * HIT properties to use when creating HITs. If you register a HIT type with values that match an existing HIT type, the
 * HIT type ID of the existing type will be returned.
 */
CreateHITTypeResponse * MTurkClient::createHITType(const CreateHITTypeRequest &request)
{
    return qobject_cast<CreateHITTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * CreateHITWithHITTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>CreateHITWithHITType</code> operation creates a new Human Intelligence Task (HIT) using an existing HITTypeID
 * generated by the <code>CreateHITType</code> operation.
 *
 * </p
 *
 * This is an alternative way to create HITs from the <code>CreateHIT</code> operation. This is the recommended best
 * practice for Requesters who are creating large numbers of HITs.
 *
 * </p
 *
 * CreateHITWithHITType also supports several ways to provide question data: by providing a value for the
 * <code>Question</code> parameter that fully specifies the contents of the HIT, or by providing a <code>HitLayoutId</code>
 * and associated <code>HitLayoutParameters</code>.
 *
 * </p <note>
 *
 * If a HIT is created with 10 or more maximum assignments, there is an additional fee. For more information, see <a
 * href="https://requester.mturk.com/pricing">Amazon Mechanical Turk Pricing</a>.
 */
CreateHITWithHITTypeResponse * MTurkClient::createHITWithHITType(const CreateHITWithHITTypeRequest &request)
{
    return qobject_cast<CreateHITWithHITTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * CreateQualificationTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>CreateQualificationType</code> operation creates a new Qualification type, which is represented by a
 * <code>QualificationType</code> data structure.
 */
CreateQualificationTypeResponse * MTurkClient::createQualificationType(const CreateQualificationTypeRequest &request)
{
    return qobject_cast<CreateQualificationTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * CreateWorkerBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>CreateWorkerBlock</code> operation allows you to prevent a Worker from working on your HITs. For example, you
 * can block a Worker who is producing poor quality work. You can block up to 100,000
 */
CreateWorkerBlockResponse * MTurkClient::createWorkerBlock(const CreateWorkerBlockRequest &request)
{
    return qobject_cast<CreateWorkerBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * DeleteHITResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>DeleteHIT</code> operation is used to delete HIT that is no longer needed. Only the Requester who created the
 * HIT can delete it.
 *
 * </p
 *
 * You can only dispose of HITs that are in the <code>Reviewable</code> state, with all of their submitted assignments
 * already either approved or rejected. If you call the DeleteHIT operation on a HIT that is not in the
 * <code>Reviewable</code> state (for example, that has not expired, or still has active assignments), or on a HIT that is
 * Reviewable but without all of its submitted assignments already approved or rejected, the service will return an error.
 *
 * </p <note> <ul> <li>
 *
 * HITs are automatically disposed of after 120 days.
 *
 * </p </li> <li>
 *
 * After you dispose of a HIT, you can no longer approve the HIT's rejected assignments.
 *
 * </p </li> <li>
 *
 * Disposed HITs are not returned in results for the ListHITs operation.
 *
 * </p </li> <li>
 *
 * Disposing HITs can improve the performance of operations such as ListReviewableHITs and ListHITs.
 */
DeleteHITResponse * MTurkClient::deleteHIT(const DeleteHITRequest &request)
{
    return qobject_cast<DeleteHITResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * DeleteQualificationTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>DeleteQualificationType</code> deletes a Qualification type and deletes any HIT types that are associated with
 * the Qualification type.
 *
 * </p
 *
 * This operation does not revoke Qualifications already assigned to Workers because the Qualifications might be needed for
 * active HITs. If there are any pending requests for the Qualification type, Amazon Mechanical Turk rejects those
 * requests. After you delete a Qualification type, you can no longer use it to create HITs or HIT
 *
 * types> <note>
 *
 * DeleteQualificationType must wait for all the HITs that use the deleted Qualification type to be deleted before
 * completing. It may take up to 48 hours before DeleteQualificationType completes and the unique name of the Qualification
 * type is available for reuse with
 */
DeleteQualificationTypeResponse * MTurkClient::deleteQualificationType(const DeleteQualificationTypeRequest &request)
{
    return qobject_cast<DeleteQualificationTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * DeleteWorkerBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>DeleteWorkerBlock</code> operation allows you to reinstate a blocked Worker to work on your HITs. This
 * operation reverses the effects of the CreateWorkerBlock operation. You need the Worker ID to use this operation. If the
 * Worker ID is missing or invalid, this operation fails and returns the message “WorkerId is invalid.” If the specified
 * Worker is not blocked, this operation returns
 */
DeleteWorkerBlockResponse * MTurkClient::deleteWorkerBlock(const DeleteWorkerBlockRequest &request)
{
    return qobject_cast<DeleteWorkerBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * DisassociateQualificationFromWorkerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>DisassociateQualificationFromWorker</code> revokes a previously granted Qualification from a user.
 *
 * </p
 *
 * You can provide a text message explaining why the Qualification was revoked. The user who had the Qualification can see
 * this message.
 */
DisassociateQualificationFromWorkerResponse * MTurkClient::disassociateQualificationFromWorker(const DisassociateQualificationFromWorkerRequest &request)
{
    return qobject_cast<DisassociateQualificationFromWorkerResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * GetAccountBalanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>GetAccountBalance</code> operation retrieves the amount of money in your Amazon Mechanical Turk
 */
GetAccountBalanceResponse * MTurkClient::getAccountBalance(const GetAccountBalanceRequest &request)
{
    return qobject_cast<GetAccountBalanceResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * GetAssignmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>GetAssignment</code> operation retrieves the details of the specified Assignment.
 */
GetAssignmentResponse * MTurkClient::getAssignment(const GetAssignmentRequest &request)
{
    return qobject_cast<GetAssignmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * GetFileUploadURLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>GetFileUploadURL</code> operation generates and returns a temporary URL. You use the temporary URL to retrieve
 * a file uploaded by a Worker as an answer to a FileUploadAnswer question for a HIT. The temporary URL is generated the
 * instant the GetFileUploadURL operation is called, and is valid for 60 seconds. You can get a temporary file upload URL
 * any time until the HIT is disposed. After the HIT is disposed, any uploaded files are deleted, and cannot be retrieved.
 * Pending Deprecation on December 12, 2017. The Answer Specification structure will no longer support the
 * <code>FileUploadAnswer</code> element to be used for the QuestionForm data structure. Instead, we recommend that
 * Requesters who want to create HITs asking Workers to upload files to use Amazon S3.
 */
GetFileUploadURLResponse * MTurkClient::getFileUploadURL(const GetFileUploadURLRequest &request)
{
    return qobject_cast<GetFileUploadURLResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * GetHITResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>GetHIT</code> operation retrieves the details of the specified HIT.
 */
GetHITResponse * MTurkClient::getHIT(const GetHITRequest &request)
{
    return qobject_cast<GetHITResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * GetQualificationScoreResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>GetQualificationScore</code> operation returns the value of a Worker's Qualification for a given Qualification
 * type.
 *
 * </p
 *
 * To get a Worker's Qualification, you must know the Worker's ID. The Worker's ID is included in the assignment data
 * returned by the <code>ListAssignmentsForHIT</code> operation.
 *
 * </p
 *
 * Only the owner of a Qualification type can query the value of a Worker's Qualification of that
 */
GetQualificationScoreResponse * MTurkClient::getQualificationScore(const GetQualificationScoreRequest &request)
{
    return qobject_cast<GetQualificationScoreResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * GetQualificationTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>GetQualificationType</code>operation retrieves information about a Qualification type using its ID.
 */
GetQualificationTypeResponse * MTurkClient::getQualificationType(const GetQualificationTypeRequest &request)
{
    return qobject_cast<GetQualificationTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * ListAssignmentsForHITResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ListAssignmentsForHIT</code> operation retrieves completed assignments for a HIT. You can use this operation
 * to retrieve the results for a HIT.
 *
 * </p
 *
 * You can get assignments for a HIT at any time, even if the HIT is not yet Reviewable. If a HIT requested multiple
 * assignments, and has received some results but has not yet become Reviewable, you can still retrieve the partial results
 * with this operation.
 *
 * </p
 *
 * Use the AssignmentStatus parameter to control which set of assignments for a HIT are returned. The ListAssignmentsForHIT
 * operation can return submitted assignments awaiting approval, or it can return assignments that have already been
 * approved or rejected. You can set AssignmentStatus=Approved,Rejected to get assignments that have already been approved
 * and rejected together in one result set.
 *
 * </p
 *
 * Only the Requester who created the HIT can retrieve the assignments for that HIT.
 *
 * </p
 *
 * Results are sorted and divided into numbered pages and the operation returns a single page of results. You can use the
 * parameters of the operation to control sorting and pagination.
 */
ListAssignmentsForHITResponse * MTurkClient::listAssignmentsForHIT(const ListAssignmentsForHITRequest &request)
{
    return qobject_cast<ListAssignmentsForHITResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * ListBonusPaymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ListBonusPayments</code> operation retrieves the amounts of bonuses you have paid to Workers for a given HIT
 * or assignment.
 */
ListBonusPaymentsResponse * MTurkClient::listBonusPayments(const ListBonusPaymentsRequest &request)
{
    return qobject_cast<ListBonusPaymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * ListHITsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ListHITs</code> operation returns all of a Requester's HITs. The operation returns HITs of any status, except
 * for HITs that have been deleted of with the DeleteHIT operation or that have been auto-deleted.
 */
ListHITsResponse * MTurkClient::listHITs(const ListHITsRequest &request)
{
    return qobject_cast<ListHITsResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * ListHITsForQualificationTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ListHITsForQualificationType</code> operation returns the HITs that use the given Qualification type for a
 * Qualification requirement. The operation returns HITs of any status, except for HITs that have been deleted with the
 * <code>DeleteHIT</code> operation or that have been auto-deleted.
 */
ListHITsForQualificationTypeResponse * MTurkClient::listHITsForQualificationType(const ListHITsForQualificationTypeRequest &request)
{
    return qobject_cast<ListHITsForQualificationTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * ListQualificationRequestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ListQualificationRequests</code> operation retrieves requests for Qualifications of a particular Qualification
 * type. The owner of the Qualification type calls this operation to poll for pending requests, and accepts them using the
 * AcceptQualification operation.
 */
ListQualificationRequestsResponse * MTurkClient::listQualificationRequests(const ListQualificationRequestsRequest &request)
{
    return qobject_cast<ListQualificationRequestsResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * ListQualificationTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ListQualificationTypes</code> operation returns a list of Qualification types, filtered by an optional search
 * term.
 */
ListQualificationTypesResponse * MTurkClient::listQualificationTypes(const ListQualificationTypesRequest &request)
{
    return qobject_cast<ListQualificationTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * ListReviewPolicyResultsForHITResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ListReviewPolicyResultsForHIT</code> operation retrieves the computed results and the actions taken in the
 * course of executing your Review Policies for a given HIT. For information about how to specify Review Policies when you
 * call CreateHIT, see Review Policies. The ListReviewPolicyResultsForHIT operation can return results for both
 * Assignment-level and HIT-level review results.
 */
ListReviewPolicyResultsForHITResponse * MTurkClient::listReviewPolicyResultsForHIT(const ListReviewPolicyResultsForHITRequest &request)
{
    return qobject_cast<ListReviewPolicyResultsForHITResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * ListReviewableHITsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ListReviewableHITs</code> operation retrieves the HITs with Status equal to Reviewable or Status equal to
 * Reviewing that belong to the Requester calling the operation.
 */
ListReviewableHITsResponse * MTurkClient::listReviewableHITs(const ListReviewableHITsRequest &request)
{
    return qobject_cast<ListReviewableHITsResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * ListWorkerBlocksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ListWorkersBlocks</code> operation retrieves a list of Workers who are blocked from working on your
 */
ListWorkerBlocksResponse * MTurkClient::listWorkerBlocks(const ListWorkerBlocksRequest &request)
{
    return qobject_cast<ListWorkerBlocksResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * ListWorkersWithQualificationTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>ListWorkersWithQualificationType</code> operation returns all of the Workers that have been associated with a
 * given Qualification type.
 */
ListWorkersWithQualificationTypeResponse * MTurkClient::listWorkersWithQualificationType(const ListWorkersWithQualificationTypeRequest &request)
{
    return qobject_cast<ListWorkersWithQualificationTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * NotifyWorkersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>NotifyWorkers</code> operation sends an email to one or more Workers that you specify with the Worker ID. You
 * can specify up to 100 Worker IDs to send the same message with a single call to the NotifyWorkers operation. The
 * NotifyWorkers operation will send a notification email to a Worker only if you have previously approved or rejected work
 * from the Worker.
 */
NotifyWorkersResponse * MTurkClient::notifyWorkers(const NotifyWorkersRequest &request)
{
    return qobject_cast<NotifyWorkersResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * RejectAssignmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>RejectAssignment</code> operation rejects the results of a completed assignment.
 *
 * </p
 *
 * You can include an optional feedback message with the rejection, which the Worker can see in the Status section of the
 * web site. When you include a feedback message with the rejection, it helps the Worker understand why the assignment was
 * rejected, and can improve the quality of the results the Worker submits in the future.
 *
 * </p
 *
 * Only the Requester who created the HIT can reject an assignment for the HIT.
 */
RejectAssignmentResponse * MTurkClient::rejectAssignment(const RejectAssignmentRequest &request)
{
    return qobject_cast<RejectAssignmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * RejectQualificationRequestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>RejectQualificationRequest</code> operation rejects a user's request for a Qualification.
 *
 * </p
 *
 * You can provide a text message explaining why the request was rejected. The Worker who made the request can see this
 */
RejectQualificationRequestResponse * MTurkClient::rejectQualificationRequest(const RejectQualificationRequestRequest &request)
{
    return qobject_cast<RejectQualificationRequestResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * SendBonusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>SendBonus</code> operation issues a payment of money from your account to a Worker. This payment happens
 * separately from the reward you pay to the Worker when you approve the Worker's assignment. The SendBonus operation
 * requires the Worker's ID and the assignment ID as parameters to initiate payment of the bonus. You must include a
 * message that explains the reason for the bonus payment, as the Worker may not be expecting the payment. Amazon
 * Mechanical Turk collects a fee for bonus payments, similar to the HIT listing fee. This operation fails if your account
 * does not have enough funds to pay for both the bonus and the fees.
 */
SendBonusResponse * MTurkClient::sendBonus(const SendBonusRequest &request)
{
    return qobject_cast<SendBonusResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * SendTestEventNotificationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>SendTestEventNotification</code> operation causes Amazon Mechanical Turk to send a notification message as if
 * a HIT event occurred, according to the provided notification specification. This allows you to test notifications
 * without setting up notifications for a real HIT type and trying to trigger them using the website. When you call this
 * operation, the service attempts to send the test notification immediately.
 */
SendTestEventNotificationResponse * MTurkClient::sendTestEventNotification(const SendTestEventNotificationRequest &request)
{
    return qobject_cast<SendTestEventNotificationResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * UpdateExpirationForHITResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>UpdateExpirationForHIT</code> operation allows you update the expiration time of a HIT. If you update it to a
 * time in the past, the HIT will be immediately expired.
 */
UpdateExpirationForHITResponse * MTurkClient::updateExpirationForHIT(const UpdateExpirationForHITRequest &request)
{
    return qobject_cast<UpdateExpirationForHITResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * UpdateHITReviewStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>UpdateHITReviewStatus</code> operation updates the status of a HIT. If the status is Reviewable, this
 * operation can update the status to Reviewing, or it can revert a Reviewing HIT back to the Reviewable status.
 */
UpdateHITReviewStatusResponse * MTurkClient::updateHITReviewStatus(const UpdateHITReviewStatusRequest &request)
{
    return qobject_cast<UpdateHITReviewStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * UpdateHITTypeOfHITResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>UpdateHITTypeOfHIT</code> operation allows you to change the HITType properties of a HIT. This operation
 * disassociates the HIT from its old HITType properties and associates it with the new HITType properties. The HIT takes
 * on the properties of the new HITType in place of the old ones.
 */
UpdateHITTypeOfHITResponse * MTurkClient::updateHITTypeOfHIT(const UpdateHITTypeOfHITRequest &request)
{
    return qobject_cast<UpdateHITTypeOfHITResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * UpdateNotificationSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>UpdateNotificationSettings</code> operation creates, updates, disables or re-enables notifications for a HIT
 * type. If you call the UpdateNotificationSettings operation for a HIT type that already has a notification specification,
 * the operation replaces the old specification with a new one. You can call the UpdateNotificationSettings operation to
 * enable or disable notifications for the HIT type, without having to modify the notification specification itself by
 * providing updates to the Active status without specifying a new notification specification. To change the Active status
 * of a HIT type's notifications, the HIT type must already have a notification specification, or one must be provided in
 * the same call to <code>UpdateNotificationSettings</code>.
 */
UpdateNotificationSettingsResponse * MTurkClient::updateNotificationSettings(const UpdateNotificationSettingsRequest &request)
{
    return qobject_cast<UpdateNotificationSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the MTurkClient service, and returns a pointer to an
 * UpdateQualificationTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>UpdateQualificationType</code> operation modifies the attributes of an existing Qualification type, which is
 * represented by a QualificationType data structure. Only the owner of a Qualification type can modify its attributes.
 *
 * </p
 *
 * Most attributes of a Qualification type can be changed after the type has been created. However, the Name and Keywords
 * fields cannot be modified. The RetryDelayInSeconds parameter can be modified or added to change the delay or to enable
 * retries, but RetryDelayInSeconds cannot be used to disable retries.
 *
 * </p
 *
 * You can use this operation to update the test for a Qualification type. The test is updated based on the values
 * specified for the Test, TestDurationInSeconds and AnswerKey parameters. All three parameters specify the updated test.
 * If you are updating the test for a type, you must specify the Test and TestDurationInSeconds parameters. The AnswerKey
 * parameter is optional; omitting it specifies that the updated test does not have an answer key.
 *
 * </p
 *
 * If you omit the Test parameter, the test for the Qualification type is unchanged. There is no way to remove a test from
 * a Qualification type that has one. If the type already has a test, you cannot update it to be AutoGranted. If the
 * Qualification type does not have a test and one is provided by an update, the type will henceforth have a test.
 *
 * </p
 *
 * If you want to update the test duration or answer key for an existing test without changing the questions, you must
 * specify a Test parameter with the original questions, along with the updated values.
 *
 * </p
 *
 * If you provide an updated Test but no AnswerKey, the new test will not have an answer key. Requests for such
 * Qualifications must be granted manually.
 *
 * </p
 *
 * You can also update the AutoGranted and AutoGrantedValue attributes of the Qualification
 */
UpdateQualificationTypeResponse * MTurkClient::updateQualificationType(const UpdateQualificationTypeRequest &request)
{
    return qobject_cast<UpdateQualificationTypeResponse *>(send(request));
}

/*!
 * \class QtAws::MTurk::MTurkClientPrivate
 * \brief The MTurkClientPrivate class provides private implementation for MTurkClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a MTurkClientPrivate object with public implementation \a q.
 */
MTurkClientPrivate::MTurkClientPrivate(MTurkClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MTurk
} // namespace QtAws
