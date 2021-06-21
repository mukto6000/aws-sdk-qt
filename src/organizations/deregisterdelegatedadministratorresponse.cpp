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

#include "deregisterdelegatedadministratorresponse.h"
#include "deregisterdelegatedadministratorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Organizations {

/*!
 * \class QtAws::Organizations::DeregisterDelegatedAdministratorResponse
 * \brief The DeregisterDelegatedAdministratorResponse class provides an interace for Organizations DeregisterDelegatedAdministrator responses.
 *
 * \inmodule QtAwsOrganizations
 *
 *  AWS Organizations is a web service that enables you to consolidate your multiple AWS accounts into an
 *  <i>organization</i> and centrally manage your accounts and their
 * 
 *  resources>
 * 
 *  This guide provides descriptions of the Organizations operations. For more information about using this service, see the
 *  <a href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">AWS Organizations User
 * 
 *  Guide</a>>
 * 
 *  <b>Support and feedback for AWS Organizations</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:feedback-awsorganizations@amazon.com">feedback-awsorganizations@amazon.com</a> or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=219">AWS Organizations support forum</a>. For
 *  more information about the AWS support forums, see <a href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>Endpoint to call When using the AWS CLI or the AWS SDK</b>
 * 
 *  </p
 * 
 *  For the current release of Organizations, specify the <code>us-east-1</code> region for all AWS API and AWS CLI calls
 *  made from the commercial AWS Regions outside of China. If calling from one of the AWS Regions in China, then specify
 *  <code>cn-northwest-1</code>. You can do this in the AWS CLI by using these parameters and
 * 
 *  commands> <ul> <li>
 * 
 *  Use the following parameter with each command to specify both the endpoint and its
 * 
 *  region>
 * 
 *  <code>--endpoint-url https://organizations.us-east-1.amazonaws.com</code> <i>(from commercial AWS Regions outside of
 *  China)</i>
 * 
 *  </p
 * 
 *  o>
 * 
 *  <code>--endpoint-url https://organizations.cn-northwest-1.amazonaws.com.cn</code> <i>(from AWS Regions in China)</i>
 * 
 *  </p </li> <li>
 * 
 *  Use the default endpoint, but configure your default region with this
 * 
 *  command>
 * 
 *  <code>aws configure set default.region us-east-1</code> <i>(from commercial AWS Regions outside of China)</i>
 * 
 *  </p
 * 
 *  o>
 * 
 *  <code>aws configure set default.region cn-northwest-1</code> <i>(from AWS Regions in China)</i>
 * 
 *  </p </li> <li>
 * 
 *  Use the following parameter with each command to specify the
 * 
 *  endpoint>
 * 
 *  <code>--region us-east-1</code> <i>(from commercial AWS Regions outside of China)</i>
 * 
 *  </p
 * 
 *  o>
 * 
 *  <code>--region cn-northwest-1</code> <i>(from AWS Regions in China)</i>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Recording API Requests</b>
 * 
 *  </p
 * 
 *  AWS Organizations supports AWS CloudTrail, a service that records AWS API calls for your AWS account and delivers log
 *  files to an Amazon S3 bucket. By using information collected by AWS CloudTrail, you can determine which requests the
 *  Organizations service received, who made the request and when, and so on. For more about AWS Organizations and its
 *  support for AWS CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_incident-response.html#orgs_cloudtrail-integration">Logging
 *  AWS Organizations Events with AWS CloudTrail</a> in the <i>AWS Organizations User Guide</i>. To learn more about AWS
 *  CloudTrail, including how to turn it on and find your log files, see the <a
 *  href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS CloudTrail User
 *
 * \sa OrganizationsClient::deregisterDelegatedAdministrator
 */

/*!
 * Constructs a DeregisterDelegatedAdministratorResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterDelegatedAdministratorResponse::DeregisterDelegatedAdministratorResponse(
        const DeregisterDelegatedAdministratorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DeregisterDelegatedAdministratorResponsePrivate(this), parent)
{
    setRequest(new DeregisterDelegatedAdministratorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterDelegatedAdministratorRequest * DeregisterDelegatedAdministratorResponse::request() const
{
    Q_D(const DeregisterDelegatedAdministratorResponse);
    return static_cast<const DeregisterDelegatedAdministratorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Organizations DeregisterDelegatedAdministrator \a response.
 */
void DeregisterDelegatedAdministratorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterDelegatedAdministratorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Organizations::DeregisterDelegatedAdministratorResponsePrivate
 * \brief The DeregisterDelegatedAdministratorResponsePrivate class provides private implementation for DeregisterDelegatedAdministratorResponse.
 * \internal
 *
 * \inmodule QtAwsOrganizations
 */

/*!
 * Constructs a DeregisterDelegatedAdministratorResponsePrivate object with public implementation \a q.
 */
DeregisterDelegatedAdministratorResponsePrivate::DeregisterDelegatedAdministratorResponsePrivate(
    DeregisterDelegatedAdministratorResponse * const q) : OrganizationsResponsePrivate(q)
{

}

/*!
 * Parses a Organizations DeregisterDelegatedAdministrator response element from \a xml.
 */
void DeregisterDelegatedAdministratorResponsePrivate::parseDeregisterDelegatedAdministratorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterDelegatedAdministratorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Organizations
} // namespace QtAws