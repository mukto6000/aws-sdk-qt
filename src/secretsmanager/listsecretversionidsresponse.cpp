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

#include "listsecretversionidsresponse.h"
#include "listsecretversionidsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/*!
 * \class QtAws::SecretsManager::ListSecretVersionIdsResponse
 * \brief The ListSecretVersionIdsResponse class provides an interace for SecretsManager ListSecretVersionIds responses.
 *
 * \inmodule QtAwsSecretsManager
 *
 *  <fullname>Amazon Web Services Secrets Manager</fullname>
 * 
 *  Amazon Web Services Secrets Manager provides a service to enable you to store, manage, and retrieve,
 * 
 *  secrets>
 * 
 *  This guide provides descriptions of the Secrets Manager API. For more information about using this service, see the <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/introduction.html">Amazon Web Services Secrets Manager
 *  User
 * 
 *  Guide</a>>
 * 
 *  <b>API Version</b>
 * 
 *  </p
 * 
 *  This version of the Secrets Manager API Reference documents the Secrets Manager API version
 * 
 *  2017-10-17>
 * 
 *  <b>Support and Feedback for Amazon Web Services Secrets Manager</b>
 * 
 *  </p
 * 
 *  We welcome your feedback. Send your comments to <a
 *  href="mailto:awssecretsmanager-feedback@amazon.com">awssecretsmanager-feedback@amazon.com</a>, or post your feedback and
 *  questions in the <a href="http://forums.aws.amazon.com/forum.jspa?forumID=296">Amazon Web Services Secrets Manager
 *  Discussion Forum</a>. For more information about the Amazon Web Services Discussion Forums, see <a
 *  href="http://forums.aws.amazon.com/help.jspa">Forums
 * 
 *  Help</a>>
 * 
 *  <b>Logging API Requests</b>
 * 
 *  </p
 * 
 *  Amazon Web Services Secrets Manager supports Amazon Web Services CloudTrail, a service that records Amazon Web Services
 *  API calls for your Amazon Web Services account and delivers log files to an Amazon S3 bucket. By using information
 *  that's collected by Amazon Web Services CloudTrail, you can determine the requests successfully made to Secrets Manager,
 *  who made the request, when it was made, and so on. For more about Amazon Web Services Secrets Manager and support for
 *  Amazon Web Services CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/monitoring.html#monitoring_cloudtrail">Logging Amazon
 *  Web Services Secrets Manager Events with Amazon Web Services CloudTrail</a> in the <i>Amazon Web Services Secrets
 *  Manager User Guide</i>. To learn more about CloudTrail, including enabling it and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">Amazon Web Services
 *  CloudTrail User
 *
 * \sa SecretsManagerClient::listSecretVersionIds
 */

/*!
 * Constructs a ListSecretVersionIdsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSecretVersionIdsResponse::ListSecretVersionIdsResponse(
        const ListSecretVersionIdsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new ListSecretVersionIdsResponsePrivate(this), parent)
{
    setRequest(new ListSecretVersionIdsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSecretVersionIdsRequest * ListSecretVersionIdsResponse::request() const
{
    Q_D(const ListSecretVersionIdsResponse);
    return static_cast<const ListSecretVersionIdsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecretsManager ListSecretVersionIds \a response.
 */
void ListSecretVersionIdsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSecretVersionIdsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecretsManager::ListSecretVersionIdsResponsePrivate
 * \brief The ListSecretVersionIdsResponsePrivate class provides private implementation for ListSecretVersionIdsResponse.
 * \internal
 *
 * \inmodule QtAwsSecretsManager
 */

/*!
 * Constructs a ListSecretVersionIdsResponsePrivate object with public implementation \a q.
 */
ListSecretVersionIdsResponsePrivate::ListSecretVersionIdsResponsePrivate(
    ListSecretVersionIdsResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/*!
 * Parses a SecretsManager ListSecretVersionIds response element from \a xml.
 */
void ListSecretVersionIdsResponsePrivate::parseListSecretVersionIdsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSecretVersionIdsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecretsManager
} // namespace QtAws
