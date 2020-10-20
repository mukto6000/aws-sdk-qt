/*
    Copyright 2013-2020 Paul Colby

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

#include "fmsclient.h"
#include "fmsclient_p.h"

#include "core/awssignaturev4.h"
#include "associateadminaccountrequest.h"
#include "associateadminaccountresponse.h"
#include "deletenotificationchannelrequest.h"
#include "deletenotificationchannelresponse.h"
#include "deletepolicyrequest.h"
#include "deletepolicyresponse.h"
#include "disassociateadminaccountrequest.h"
#include "disassociateadminaccountresponse.h"
#include "getadminaccountrequest.h"
#include "getadminaccountresponse.h"
#include "getcompliancedetailrequest.h"
#include "getcompliancedetailresponse.h"
#include "getnotificationchannelrequest.h"
#include "getnotificationchannelresponse.h"
#include "getpolicyrequest.h"
#include "getpolicyresponse.h"
#include "getprotectionstatusrequest.h"
#include "getprotectionstatusresponse.h"
#include "listcompliancestatusrequest.h"
#include "listcompliancestatusresponse.h"
#include "listmemberaccountsrequest.h"
#include "listmemberaccountsresponse.h"
#include "listpoliciesrequest.h"
#include "listpoliciesresponse.h"
#include "putnotificationchannelrequest.h"
#include "putnotificationchannelresponse.h"
#include "putpolicyrequest.h"
#include "putpolicyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::FMS
 * \brief Contains classess for accessing Firewall Management Service (FMS).
 *
 * \inmodule QtAwsFms
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::FmsClient
 * \brief The FmsClient class provides access to the Firewall Management Service (FMS) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 */

/*!
 * \brief Constructs a FmsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
FmsClient::FmsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FmsClientPrivate(this), parent)
{
    Q_D(FmsClient);
    d->apiVersion = QStringLiteral("2018-01-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("fms");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Firewall Management Service");
    d->serviceName = QStringLiteral("fms");
}

/*!
 * \overload FmsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
FmsClient::FmsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new FmsClientPrivate(this), parent)
{
    Q_D(FmsClient);
    d->apiVersion = QStringLiteral("2018-01-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("fms");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Firewall Management Service");
    d->serviceName = QStringLiteral("fms");
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * AssociateAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the AWS Firewall Manager administrator account. AWS Firewall Manager must be associated with the master account
 * your AWS organization or associated with a member account that has the appropriate permissions. If the account ID that
 * you submit is not an AWS Organizations master account, AWS Firewall Manager will set the appropriate permissions for the
 * given member
 *
 * account>
 *
 * The account that you associate with AWS Firewall Manager is called the AWS Firewall Manager administrator account.
 */
AssociateAdminAccountResponse * FmsClient::associateAdminAccount(const AssociateAdminAccountRequest &request)
{
    return qobject_cast<AssociateAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * DeleteNotificationChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AWS Firewall Manager association with the IAM role and the Amazon Simple Notification Service (SNS) topic
 * that is used to record AWS Firewall Manager SNS
 */
DeleteNotificationChannelResponse * FmsClient::deleteNotificationChannel(const DeleteNotificationChannelRequest &request)
{
    return qobject_cast<DeleteNotificationChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * DeletePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently deletes an AWS Firewall Manager policy.
 */
DeletePolicyResponse * FmsClient::deletePolicy(const DeletePolicyRequest &request)
{
    return qobject_cast<DeletePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * DisassociateAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the account that has been set as the AWS Firewall Manager administrator account. To set a different
 * account as the administrator account, you must submit an <code>AssociateAdminAccount</code> request
 */
DisassociateAdminAccountResponse * FmsClient::disassociateAdminAccount(const DisassociateAdminAccountRequest &request)
{
    return qobject_cast<DisassociateAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * GetAdminAccountResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the AWS Organizations master account that is associated with AWS Firewall Manager as the AWS Firewall Manager
 */
GetAdminAccountResponse * FmsClient::getAdminAccount(const GetAdminAccountRequest &request)
{
    return qobject_cast<GetAdminAccountResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * GetComplianceDetailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed compliance information about the specified member account. Details include resources that are in and
 * out of compliance with the specified policy. Resources are considered non-compliant if the specified policy has not been
 * applied to
 */
GetComplianceDetailResponse * FmsClient::getComplianceDetail(const GetComplianceDetailRequest &request)
{
    return qobject_cast<GetComplianceDetailResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * GetNotificationChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the Amazon Simple Notification Service (SNS) topic that is used to record AWS Firewall Manager
 * SNS
 */
GetNotificationChannelResponse * FmsClient::getNotificationChannel(const GetNotificationChannelRequest &request)
{
    return qobject_cast<GetNotificationChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * GetPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified AWS Firewall Manager
 */
GetPolicyResponse * FmsClient::getPolicy(const GetPolicyRequest &request)
{
    return qobject_cast<GetPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * GetProtectionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * If you created a Shield Advanced policy, returns policy-level attack summary information in the event of a potential
 * DDoS
 */
GetProtectionStatusResponse * FmsClient::getProtectionStatus(const GetProtectionStatusRequest &request)
{
    return qobject_cast<GetProtectionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * ListComplianceStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of <code>PolicyComplianceStatus</code> objects in the response. Use <code>PolicyComplianceStatus</code>
 * to get a summary of which member accounts are protected by the specified policy.
 */
ListComplianceStatusResponse * FmsClient::listComplianceStatus(const ListComplianceStatusRequest &request)
{
    return qobject_cast<ListComplianceStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * ListMemberAccountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <code>MemberAccounts</code> object that lists the member accounts in the administrator's AWS
 *
 * organization>
 *
 * The <code>ListMemberAccounts</code> must be submitted by the account that is set as the AWS Firewall Manager
 */
ListMemberAccountsResponse * FmsClient::listMemberAccounts(const ListMemberAccountsRequest &request)
{
    return qobject_cast<ListMemberAccountsResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * ListPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of <code>PolicySummary</code> objects in the
 */
ListPoliciesResponse * FmsClient::listPolicies(const ListPoliciesRequest &request)
{
    return qobject_cast<ListPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * PutNotificationChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Designates the IAM role and Amazon Simple Notification Service (SNS) topic that AWS Firewall Manager uses to record SNS
 */
PutNotificationChannelResponse * FmsClient::putNotificationChannel(const PutNotificationChannelRequest &request)
{
    return qobject_cast<PutNotificationChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the FmsClient service, and returns a pointer to an
 * PutPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS Firewall Manager
 *
 * policy>
 *
 * Firewall Manager provides two types of policies: A Shield Advanced policy, which applies Shield Advanced protection to
 * specified accounts and resources, or a WAF policy, which contains a rule group and defines which resources are to be
 * protected by that rule group. A policy is specific to either WAF or Shield Advanced. If you want to enforce both WAF
 * rules and Shield Advanced protection across accounts, you can create multiple policies. You can create one or more
 * policies for WAF rules, and one or more policies for Shield
 *
 * Advanced>
 *
 * You must be subscribed to Shield Advanced to create a Shield Advanced policy. For more information on subscribing to
 * Shield Advanced, see <a
 */
PutPolicyResponse * FmsClient::putPolicy(const PutPolicyRequest &request)
{
    return qobject_cast<PutPolicyResponse *>(send(request));
}

/*!
 * \class QtAws::FMS::FmsClientPrivate
 * \brief The FmsClientPrivate class provides private implementation for FmsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a FmsClientPrivate object with public implementation \a q.
 */
FmsClientPrivate::FmsClientPrivate(FmsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace FMS
} // namespace QtAws
