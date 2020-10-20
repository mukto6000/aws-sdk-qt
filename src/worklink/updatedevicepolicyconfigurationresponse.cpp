/*
    Copyright 2013-2020 Paul Colby

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

#include "updatedevicepolicyconfigurationresponse.h"
#include "updatedevicepolicyconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateDevicePolicyConfigurationResponse
 * \brief The UpdateDevicePolicyConfigurationResponse class provides an interace for WorkLink UpdateDevicePolicyConfiguration responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS phones.
 *  In a single step, your users, such as employees, can access internal websites as efficiently as they access any other
 *  public website. They enter a URL in their web browser, or choose a link to an internal website in an email. Amazon
 *  WorkLink authenticates the user's access and securely renders authorized internal web content in a secure rendering
 *  service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateDevicePolicyConfiguration
 */

/*!
 * Constructs a UpdateDevicePolicyConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDevicePolicyConfigurationResponse::UpdateDevicePolicyConfigurationResponse(
        const UpdateDevicePolicyConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new UpdateDevicePolicyConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateDevicePolicyConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDevicePolicyConfigurationRequest * UpdateDevicePolicyConfigurationResponse::request() const
{
    Q_D(const UpdateDevicePolicyConfigurationResponse);
    return static_cast<const UpdateDevicePolicyConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink UpdateDevicePolicyConfiguration \a response.
 */
void UpdateDevicePolicyConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDevicePolicyConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::UpdateDevicePolicyConfigurationResponsePrivate
 * \brief The UpdateDevicePolicyConfigurationResponsePrivate class provides private implementation for UpdateDevicePolicyConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateDevicePolicyConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateDevicePolicyConfigurationResponsePrivate::UpdateDevicePolicyConfigurationResponsePrivate(
    UpdateDevicePolicyConfigurationResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink UpdateDevicePolicyConfiguration response element from \a xml.
 */
void UpdateDevicePolicyConfigurationResponsePrivate::parseUpdateDevicePolicyConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDevicePolicyConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
