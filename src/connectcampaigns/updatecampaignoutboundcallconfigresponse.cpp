// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecampaignoutboundcallconfigresponse.h"
#include "updatecampaignoutboundcallconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignOutboundCallConfigResponse
 * \brief The UpdateCampaignOutboundCallConfigResponse class provides an interace for ConnectCampaigns UpdateCampaignOutboundCallConfig responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::updateCampaignOutboundCallConfig
 */

/*!
 * Constructs a UpdateCampaignOutboundCallConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCampaignOutboundCallConfigResponse::UpdateCampaignOutboundCallConfigResponse(
        const UpdateCampaignOutboundCallConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new UpdateCampaignOutboundCallConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateCampaignOutboundCallConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCampaignOutboundCallConfigRequest * UpdateCampaignOutboundCallConfigResponse::request() const
{
    Q_D(const UpdateCampaignOutboundCallConfigResponse);
    return static_cast<const UpdateCampaignOutboundCallConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns UpdateCampaignOutboundCallConfig \a response.
 */
void UpdateCampaignOutboundCallConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCampaignOutboundCallConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignOutboundCallConfigResponsePrivate
 * \brief The UpdateCampaignOutboundCallConfigResponsePrivate class provides private implementation for UpdateCampaignOutboundCallConfigResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a UpdateCampaignOutboundCallConfigResponsePrivate object with public implementation \a q.
 */
UpdateCampaignOutboundCallConfigResponsePrivate::UpdateCampaignOutboundCallConfigResponsePrivate(
    UpdateCampaignOutboundCallConfigResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns UpdateCampaignOutboundCallConfig response element from \a xml.
 */
void UpdateCampaignOutboundCallConfigResponsePrivate::parseUpdateCampaignOutboundCallConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCampaignOutboundCallConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
