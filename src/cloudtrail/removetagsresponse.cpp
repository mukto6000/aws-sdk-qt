// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removetagsresponse.h"
#include "removetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::RemoveTagsResponse
 * \brief The RemoveTagsResponse class provides an interace for CloudTrail RemoveTags responses.
 *
 * \inmodule QtAwsCloudTrail
 *
 *  <fullname>CloudTrail</fullname>
 * 
 *  This is the CloudTrail API Reference. It provides descriptions of actions, data types, common parameters, and common
 *  errors for
 * 
 *  CloudTrail>
 * 
 *  CloudTrail is a web service that records Amazon Web Services API calls for your Amazon Web Services account and delivers
 *  log files to an Amazon S3 bucket. The recorded information includes the identity of the user, the start time of the
 *  Amazon Web Services API call, the source IP address, the request parameters, and the response elements returned by the
 * 
 *  service> <note>
 * 
 *  As an alternative to the API, you can use one of the Amazon Web Services SDKs, which consist of libraries and sample
 *  code for various programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide
 *  programmatic access to CloudTrail. For example, the SDKs handle cryptographically signing requests, managing errors, and
 *  retrying requests automatically. For more information about the Amazon Web Services SDKs, including how to download and
 *  install them, see <a href="http://aws.amazon.com/tools/">Tools to Build on Amazon Web
 * 
 *  Services</a>> </note>
 * 
 *  See the <a href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">CloudTrail User
 *  Guide</a> for information about the data that is included with each Amazon Web Services API call listed in the log
 *
 * \sa CloudTrailClient::removeTags
 */

/*!
 * Constructs a RemoveTagsResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveTagsResponse::RemoveTagsResponse(
        const RemoveTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new RemoveTagsResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveTagsRequest * RemoveTagsResponse::request() const
{
    Q_D(const RemoveTagsResponse);
    return static_cast<const RemoveTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudTrail RemoveTags \a response.
 */
void RemoveTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudTrail::RemoveTagsResponsePrivate
 * \brief The RemoveTagsResponsePrivate class provides private implementation for RemoveTagsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a RemoveTagsResponsePrivate object with public implementation \a q.
 */
RemoveTagsResponsePrivate::RemoveTagsResponsePrivate(
    RemoveTagsResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/*!
 * Parses a CloudTrail RemoveTags response element from \a xml.
 */
void RemoveTagsResponsePrivate::parseRemoveTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudTrail
} // namespace QtAws
