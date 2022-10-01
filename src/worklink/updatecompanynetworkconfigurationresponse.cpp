// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecompanynetworkconfigurationresponse.h"
#include "updatecompanynetworkconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateCompanyNetworkConfigurationResponse
 * \brief The UpdateCompanyNetworkConfigurationResponse class provides an interace for WorkLink UpdateCompanyNetworkConfiguration responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateCompanyNetworkConfiguration
 */

/*!
 * Constructs a UpdateCompanyNetworkConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCompanyNetworkConfigurationResponse::UpdateCompanyNetworkConfigurationResponse(
        const UpdateCompanyNetworkConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new UpdateCompanyNetworkConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateCompanyNetworkConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCompanyNetworkConfigurationRequest * UpdateCompanyNetworkConfigurationResponse::request() const
{
    Q_D(const UpdateCompanyNetworkConfigurationResponse);
    return static_cast<const UpdateCompanyNetworkConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink UpdateCompanyNetworkConfiguration \a response.
 */
void UpdateCompanyNetworkConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCompanyNetworkConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::UpdateCompanyNetworkConfigurationResponsePrivate
 * \brief The UpdateCompanyNetworkConfigurationResponsePrivate class provides private implementation for UpdateCompanyNetworkConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateCompanyNetworkConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateCompanyNetworkConfigurationResponsePrivate::UpdateCompanyNetworkConfigurationResponsePrivate(
    UpdateCompanyNetworkConfigurationResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink UpdateCompanyNetworkConfiguration response element from \a xml.
 */
void UpdateCompanyNetworkConfigurationResponsePrivate::parseUpdateCompanyNetworkConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCompanyNetworkConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
