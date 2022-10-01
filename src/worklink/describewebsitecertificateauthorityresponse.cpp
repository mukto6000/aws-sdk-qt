// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describewebsitecertificateauthorityresponse.h"
#include "describewebsitecertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeWebsiteCertificateAuthorityResponse
 * \brief The DescribeWebsiteCertificateAuthorityResponse class provides an interace for WorkLink DescribeWebsiteCertificateAuthority responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeWebsiteCertificateAuthority
 */

/*!
 * Constructs a DescribeWebsiteCertificateAuthorityResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWebsiteCertificateAuthorityResponse::DescribeWebsiteCertificateAuthorityResponse(
        const DescribeWebsiteCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new DescribeWebsiteCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new DescribeWebsiteCertificateAuthorityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWebsiteCertificateAuthorityRequest * DescribeWebsiteCertificateAuthorityResponse::request() const
{
    Q_D(const DescribeWebsiteCertificateAuthorityResponse);
    return static_cast<const DescribeWebsiteCertificateAuthorityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink DescribeWebsiteCertificateAuthority \a response.
 */
void DescribeWebsiteCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWebsiteCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::DescribeWebsiteCertificateAuthorityResponsePrivate
 * \brief The DescribeWebsiteCertificateAuthorityResponsePrivate class provides private implementation for DescribeWebsiteCertificateAuthorityResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeWebsiteCertificateAuthorityResponsePrivate object with public implementation \a q.
 */
DescribeWebsiteCertificateAuthorityResponsePrivate::DescribeWebsiteCertificateAuthorityResponsePrivate(
    DescribeWebsiteCertificateAuthorityResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink DescribeWebsiteCertificateAuthority response element from \a xml.
 */
void DescribeWebsiteCertificateAuthorityResponsePrivate::parseDescribeWebsiteCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWebsiteCertificateAuthorityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
