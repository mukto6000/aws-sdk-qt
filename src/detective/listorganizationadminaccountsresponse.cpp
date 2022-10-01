// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listorganizationadminaccountsresponse.h"
#include "listorganizationadminaccountsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Detective {

/*!
 * \class QtAws::Detective::ListOrganizationAdminAccountsResponse
 * \brief The ListOrganizationAdminAccountsResponse class provides an interace for Detective ListOrganizationAdminAccounts responses.
 *
 * \inmodule QtAwsDetective
 *
 *  Detective uses machine learning and purpose-built visualizations to help you to analyze and investigate security issues
 *  across your Amazon Web Services (Amazon Web Services) workloads. Detective automatically extracts time-based events such
 *  as login attempts, API calls, and network traffic from CloudTrail and Amazon Virtual Private Cloud (Amazon VPC) flow
 *  logs. It also extracts findings detected by Amazon
 * 
 *  GuardDuty>
 * 
 *  The Detective API primarily supports the creation and management of behavior graphs. A behavior graph contains the
 *  extracted data from a set of member accounts, and is created and managed by an administrator
 * 
 *  account>
 * 
 *  To add a member account to the behavior graph, the administrator account sends an invitation to the account. When the
 *  account accepts the invitation, it becomes a member account in the behavior
 * 
 *  graph>
 * 
 *  Detective is also integrated with Organizations. The organization management account designates the Detective
 *  administrator account for the organization. That account becomes the administrator account for the organization behavior
 *  graph. The Detective administrator account is also the delegated administrator account for Detective in
 * 
 *  Organizations>
 * 
 *  The Detective administrator account can enable any organization account as a member account in the organization behavior
 *  graph. The organization accounts do not receive invitations. The Detective administrator account can also invite other
 *  accounts to the organization behavior
 * 
 *  graph>
 * 
 *  Every behavior graph is specific to a Region. You can only use the API to manage behavior graphs that belong to the
 *  Region that is associated with the currently selected
 * 
 *  endpoint>
 * 
 *  The administrator account for a behavior graph can use the Detective API to do the
 * 
 *  following> <ul> <li>
 * 
 *  Enable and disable Detective. Enabling Detective creates a new behavior
 * 
 *  graph> </li> <li>
 * 
 *  View the list of member accounts in a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Add member accounts to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Remove member accounts from a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Apply tags to a behavior
 * 
 *  graph> </li> </ul>
 * 
 *  The organization management account can use the Detective API to select the delegated administrator for
 * 
 *  Detective>
 * 
 *  The Detective administrator account for an organization can use the Detective API to do the
 * 
 *  following> <ul> <li>
 * 
 *  Perform all of the functions of an administrator
 * 
 *  account> </li> <li>
 * 
 *  Determine whether to automatically enable new organization accounts as member accounts in the organization behavior
 * 
 *  graph> </li> </ul>
 * 
 *  An invited member account can use the Detective API to do the
 * 
 *  following> <ul> <li>
 * 
 *  View the list of behavior graphs that they are invited
 * 
 *  to> </li> <li>
 * 
 *  Accept an invitation to contribute to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Decline an invitation to contribute to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Remove their account from a behavior
 * 
 *  graph> </li> </ul>
 * 
 *  All API actions are logged as CloudTrail events. See <a
 *  href="https://docs.aws.amazon.com/detective/latest/adminguide/logging-using-cloudtrail.html">Logging Detective API Calls
 *  with
 * 
 *  CloudTrail</a>> <note>
 * 
 *  We replaced the term "master account" with the term "administrator account." An administrator account is used to
 *  centrally manage multiple accounts. In the case of Detective, the administrator account manages the accounts in their
 *  behavior
 *
 * \sa DetectiveClient::listOrganizationAdminAccounts
 */

/*!
 * Constructs a ListOrganizationAdminAccountsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOrganizationAdminAccountsResponse::ListOrganizationAdminAccountsResponse(
        const ListOrganizationAdminAccountsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DetectiveResponse(new ListOrganizationAdminAccountsResponsePrivate(this), parent)
{
    setRequest(new ListOrganizationAdminAccountsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOrganizationAdminAccountsRequest * ListOrganizationAdminAccountsResponse::request() const
{
    Q_D(const ListOrganizationAdminAccountsResponse);
    return static_cast<const ListOrganizationAdminAccountsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Detective ListOrganizationAdminAccounts \a response.
 */
void ListOrganizationAdminAccountsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOrganizationAdminAccountsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Detective::ListOrganizationAdminAccountsResponsePrivate
 * \brief The ListOrganizationAdminAccountsResponsePrivate class provides private implementation for ListOrganizationAdminAccountsResponse.
 * \internal
 *
 * \inmodule QtAwsDetective
 */

/*!
 * Constructs a ListOrganizationAdminAccountsResponsePrivate object with public implementation \a q.
 */
ListOrganizationAdminAccountsResponsePrivate::ListOrganizationAdminAccountsResponsePrivate(
    ListOrganizationAdminAccountsResponse * const q) : DetectiveResponsePrivate(q)
{

}

/*!
 * Parses a Detective ListOrganizationAdminAccounts response element from \a xml.
 */
void ListOrganizationAdminAccountsResponsePrivate::parseListOrganizationAdminAccountsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOrganizationAdminAccountsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Detective
} // namespace QtAws
