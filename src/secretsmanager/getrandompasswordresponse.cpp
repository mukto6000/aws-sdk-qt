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

#include "getrandompasswordresponse.h"
#include "getrandompasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/*!
 * \class QtAws::SecretsManager::GetRandomPasswordResponse
 * \brief The GetRandomPasswordResponse class provides an interace for SecretsManager GetRandomPassword responses.
 *
 * \inmodule QtAwsSecretsManager
 *
 *  <fullname>AWS Secrets Manager API Reference</fullname>
 * 
 *  AWS Secrets Manager provides a service to enable you to store, manage, and retrieve,
 * 
 *  secrets>
 * 
 *  This guide provides descriptions of the Secrets Manager API. For more information about using this service, see the <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/introduction.html">AWS Secrets Manager User
 * 
 *  Guide</a>>
 * 
 *  <b>API Version</b>
 * 
 *  </p
 * 
 *  This version of the Secrets Manager API Reference documents the Secrets Manager API version
 * 
 *  2017-10-17> <note>
 * 
 *  As an alternative to using the API, you can use one of the AWS SDKs, which consist of libraries and sample code for
 *  various programming languages and platforms such as Java, Ruby, .NET, iOS, and Android. The SDKs provide a convenient
 *  way to create programmatic access to AWS Secrets Manager. For example, the SDKs provide cryptographically signing
 *  requests, managing errors, and retrying requests automatically. For more information about the AWS SDKs, including
 *  downloading and installing them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  We recommend you use the AWS SDKs to make programmatic API calls to Secrets Manager. However, you also can use the
 *  Secrets Manager HTTP Query API to make direct calls to the Secrets Manager web service. To learn more about the Secrets
 *  Manager HTTP Query API, see <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/query-requests.html">Making Query Requests</a> in the
 *  <i>AWS Secrets Manager User Guide</i>.
 * 
 *  </p
 * 
 *  Secrets Manager API supports GET and POST requests for all actions, and doesn't require you to use GET for some actions
 *  and POST for others. However, GET requests are subject to the limitation size of a URL. Therefore, for operations that
 *  require larger sizes, use a POST
 * 
 *  request>
 * 
 *  <b>Support and Feedback for AWS Secrets Manager</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:awssecretsmanager-feedback@amazon.com">awssecretsmanager-feedback@amazon.com</a>, or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=296">AWS Secrets Manager Discussion Forum</a>.
 *  For more information about the AWS Discussion Forums, see <a href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>How examples are presented</b>
 * 
 *  </p
 * 
 *  The JSON that AWS Secrets Manager expects as your request parameters and the service returns as a response to HTTP query
 *  requests contain single, long strings without line breaks or white space formatting. The JSON shown in the examples
 *  displays the code formatted with both line breaks and white space to improve readability. When example input parameters
 *  can also cause long strings extending beyond the screen, you can insert line breaks to enhance readability. You should
 *  always submit the input as a single JSON text
 * 
 *  string>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  AWS Secrets Manager supports AWS CloudTrail, a service that records AWS API calls for your AWS account and delivers log
 *  files to an Amazon S3 bucket. By using information that's collected by AWS CloudTrail, you can determine the requests
 *  successfully made to Secrets Manager, who made the request, when it was made, and so on. For more about AWS Secrets
 *  Manager and support for AWS CloudTrail, see <a
 *  href="http://docs.aws.amazon.com/secretsmanager/latest/userguide/monitoring.html#monitoring_cloudtrail">Logging AWS
 *  Secrets Manager Events with AWS CloudTrail</a> in the <i>AWS Secrets Manager User Guide</i>. To learn more about
 *  CloudTrail, including enabling it and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS CloudTrail User
 *
 * \sa SecretsManagerClient::getRandomPassword
 */

/*!
 * Constructs a GetRandomPasswordResponse object for \a reply to \a request, with parent \a parent.
 */
GetRandomPasswordResponse::GetRandomPasswordResponse(
        const GetRandomPasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new GetRandomPasswordResponsePrivate(this), parent)
{
    setRequest(new GetRandomPasswordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRandomPasswordRequest * GetRandomPasswordResponse::request() const
{
    Q_D(const GetRandomPasswordResponse);
    return static_cast<const GetRandomPasswordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecretsManager GetRandomPassword \a response.
 */
void GetRandomPasswordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRandomPasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecretsManager::GetRandomPasswordResponsePrivate
 * \brief The GetRandomPasswordResponsePrivate class provides private implementation for GetRandomPasswordResponse.
 * \internal
 *
 * \inmodule QtAwsSecretsManager
 */

/*!
 * Constructs a GetRandomPasswordResponsePrivate object with public implementation \a q.
 */
GetRandomPasswordResponsePrivate::GetRandomPasswordResponsePrivate(
    GetRandomPasswordResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/*!
 * Parses a SecretsManager GetRandomPassword response element from \a xml.
 */
void GetRandomPasswordResponsePrivate::parseGetRandomPasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRandomPasswordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecretsManager
} // namespace QtAws
