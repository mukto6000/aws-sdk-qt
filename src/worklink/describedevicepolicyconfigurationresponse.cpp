// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedevicepolicyconfigurationresponse.h"
#include "describedevicepolicyconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeDevicePolicyConfigurationResponse
 * \brief The DescribeDevicePolicyConfigurationResponse class provides an interace for WorkLink DescribeDevicePolicyConfiguration responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeDevicePolicyConfiguration
 */

/*!
 * Constructs a DescribeDevicePolicyConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDevicePolicyConfigurationResponse::DescribeDevicePolicyConfigurationResponse(
        const DescribeDevicePolicyConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new DescribeDevicePolicyConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeDevicePolicyConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDevicePolicyConfigurationRequest * DescribeDevicePolicyConfigurationResponse::request() const
{
    Q_D(const DescribeDevicePolicyConfigurationResponse);
    return static_cast<const DescribeDevicePolicyConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink DescribeDevicePolicyConfiguration \a response.
 */
void DescribeDevicePolicyConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDevicePolicyConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::DescribeDevicePolicyConfigurationResponsePrivate
 * \brief The DescribeDevicePolicyConfigurationResponsePrivate class provides private implementation for DescribeDevicePolicyConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeDevicePolicyConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeDevicePolicyConfigurationResponsePrivate::DescribeDevicePolicyConfigurationResponsePrivate(
    DescribeDevicePolicyConfigurationResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink DescribeDevicePolicyConfiguration response element from \a xml.
 */
void DescribeDevicePolicyConfigurationResponsePrivate::parseDescribeDevicePolicyConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDevicePolicyConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
