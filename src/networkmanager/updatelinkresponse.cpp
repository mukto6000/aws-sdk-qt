// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelinkresponse.h"
#include "updatelinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::UpdateLinkResponse
 * \brief The UpdateLinkResponse class provides an interace for NetworkManager UpdateLink responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::updateLink
 */

/*!
 * Constructs a UpdateLinkResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLinkResponse::UpdateLinkResponse(
        const UpdateLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new UpdateLinkResponsePrivate(this), parent)
{
    setRequest(new UpdateLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLinkRequest * UpdateLinkResponse::request() const
{
    Q_D(const UpdateLinkResponse);
    return static_cast<const UpdateLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager UpdateLink \a response.
 */
void UpdateLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::UpdateLinkResponsePrivate
 * \brief The UpdateLinkResponsePrivate class provides private implementation for UpdateLinkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a UpdateLinkResponsePrivate object with public implementation \a q.
 */
UpdateLinkResponsePrivate::UpdateLinkResponsePrivate(
    UpdateLinkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager UpdateLink response element from \a xml.
 */
void UpdateLinkResponsePrivate::parseUpdateLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
