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

#include "acceptadministratorinvitationresponse.h"
#include "acceptadministratorinvitationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::AcceptAdministratorInvitationResponse
 * \brief The AcceptAdministratorInvitationResponse class provides an interace for SecurityHub AcceptAdministratorInvitation responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  Security Hub provides you with a comprehensive view of the security state of your AWS environment and resources. It also
 *  provides you with the readiness status of your environment based on controls from supported security standards. Security
 *  Hub collects security data from AWS accounts, services, and integrated third-party products and helps you analyze
 *  security trends in your environment to identify the highest priority security issues. For more information about
 *  Security Hub, see the <i> <a
 *  href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html">AWS Security Hub User Guide</a>
 * 
 *  </i>>
 * 
 *  When you use operations in the Security Hub API, the requests are executed only in the AWS Region that is currently
 *  active or in the specific AWS Region that you specify in your request. Any configuration or settings change that results
 *  from the operation is applied only to that Region. To make the same change in other Regions, execute the same command
 *  for each Region to apply the change
 * 
 *  to>
 * 
 *  For example, if your Region is set to <code>us-west-2</code>, when you use <code> <a>CreateMembers</a> </code> to add a
 *  member account to Security Hub, the association of the member account with the administrator account is created only in
 *  the <code>us-west-2</code> Region. Security Hub must be enabled for the member account in the same Region that the
 *  invitation was sent
 * 
 *  from>
 * 
 *  The following throttling limits apply to using Security Hub API
 * 
 *  operations> <ul> <li>
 * 
 *  <code> <a>BatchEnableStandards</a> </code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code> of
 *  1 request per
 * 
 *  second> </li> <li>
 * 
 *  <code> <a>GetFindings</a> </code> - <code>RateLimit</code> of 3 requests per second. <code>BurstLimit</code> of 6
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code> <a>UpdateFindings</a> </code> - <code>RateLimit</code> of 1 request per second. <code>BurstLimit</code> of 5
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code> <a>UpdateStandardsControl</a> </code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code>
 *  of 5 requests per
 * 
 *  second> </li> <li>
 * 
 *  All other operations - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30 requests per
 *
 * \sa SecurityHubClient::acceptAdministratorInvitation
 */

/*!
 * Constructs a AcceptAdministratorInvitationResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptAdministratorInvitationResponse::AcceptAdministratorInvitationResponse(
        const AcceptAdministratorInvitationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new AcceptAdministratorInvitationResponsePrivate(this), parent)
{
    setRequest(new AcceptAdministratorInvitationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptAdministratorInvitationRequest * AcceptAdministratorInvitationResponse::request() const
{
    Q_D(const AcceptAdministratorInvitationResponse);
    return static_cast<const AcceptAdministratorInvitationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub AcceptAdministratorInvitation \a response.
 */
void AcceptAdministratorInvitationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptAdministratorInvitationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::AcceptAdministratorInvitationResponsePrivate
 * \brief The AcceptAdministratorInvitationResponsePrivate class provides private implementation for AcceptAdministratorInvitationResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a AcceptAdministratorInvitationResponsePrivate object with public implementation \a q.
 */
AcceptAdministratorInvitationResponsePrivate::AcceptAdministratorInvitationResponsePrivate(
    AcceptAdministratorInvitationResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub AcceptAdministratorInvitation response element from \a xml.
 */
void AcceptAdministratorInvitationResponsePrivate::parseAcceptAdministratorInvitationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptAdministratorInvitationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
