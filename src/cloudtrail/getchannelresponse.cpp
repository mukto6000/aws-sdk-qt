// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchannelresponse.h"
#include "getchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::GetChannelResponse
 * \brief The GetChannelResponse class provides an interace for CloudTrail GetChannel responses.
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
 * \sa CloudTrailClient::getChannel
 */

/*!
 * Constructs a GetChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetChannelResponse::GetChannelResponse(
        const GetChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new GetChannelResponsePrivate(this), parent)
{
    setRequest(new GetChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetChannelRequest * GetChannelResponse::request() const
{
    Q_D(const GetChannelResponse);
    return static_cast<const GetChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudTrail GetChannel \a response.
 */
void GetChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudTrail::GetChannelResponsePrivate
 * \brief The GetChannelResponsePrivate class provides private implementation for GetChannelResponse.
 * \internal
 *
 * \inmodule QtAwsCloudTrail
 */

/*!
 * Constructs a GetChannelResponsePrivate object with public implementation \a q.
 */
GetChannelResponsePrivate::GetChannelResponsePrivate(
    GetChannelResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/*!
 * Parses a CloudTrail GetChannel response element from \a xml.
 */
void GetChannelResponsePrivate::parseGetChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudTrail
} // namespace QtAws
