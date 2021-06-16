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

#include "disassociatemembersresponse.h"
#include "disassociatemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::DisassociateMembersResponse
 * \brief The DisassociateMembersResponse class provides an interace for SecurityHub DisassociateMembers responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  Security Hub provides you with a comprehensive view of the security state of your AWS environment and resources. It also
 *  provides you with the compliance status of your environment based on CIS AWS Foundations compliance checks. Security Hub
 *  collects security data from AWS accounts, services, and integrated third-party products and helps you analyze security
 *  trends in your environment to identify the highest priority security issues. For more information about Security Hub,
 *  see the <i> <a href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html">AWS Security Hub
 *  User Guide</a>
 * 
 *  </i>>
 * 
 *  When you use operations in the Security Hub API, the requests are executed only in the AWS Region that is currently
 *  active or in the specific AWS Region that you specify in your request. Any configuration or settings change that results
 *  from the operation is applied only to that Region. To make the same change in other Regions, execute the same command
 *  for each Region to apply the change to. For example, if your Region is set to <code>us-west-2</code>, when you use
 *  <code>CreateMembers</code> to add a member account to Security Hub, the association of the member account with the
 *  master account is created only in the us-west-2 Region. Security Hub must be enabled for the member account in the same
 *  Region that the invite was sent
 *
 * \sa SecurityHubClient::disassociateMembers
 */

/*!
 * Constructs a DisassociateMembersResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateMembersResponse::DisassociateMembersResponse(
        const DisassociateMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new DisassociateMembersResponsePrivate(this), parent)
{
    setRequest(new DisassociateMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateMembersRequest * DisassociateMembersResponse::request() const
{
    Q_D(const DisassociateMembersResponse);
    return static_cast<const DisassociateMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub DisassociateMembers \a response.
 */
void DisassociateMembersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::DisassociateMembersResponsePrivate
 * \brief The DisassociateMembersResponsePrivate class provides private implementation for DisassociateMembersResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a DisassociateMembersResponsePrivate object with public implementation \a q.
 */
DisassociateMembersResponsePrivate::DisassociateMembersResponsePrivate(
    DisassociateMembersResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub DisassociateMembers response element from \a xml.
 */
void DisassociateMembersResponsePrivate::parseDisassociateMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateMembersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
