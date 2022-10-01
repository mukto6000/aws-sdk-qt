// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getplaybackconfigurationresponse.h"
#include "getplaybackconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::GetPlaybackConfigurationResponse
 * \brief The GetPlaybackConfigurationResponse class provides an interace for MediaTailor GetPlaybackConfiguration responses.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::getPlaybackConfiguration
 */

/*!
 * Constructs a GetPlaybackConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetPlaybackConfigurationResponse::GetPlaybackConfigurationResponse(
        const GetPlaybackConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new GetPlaybackConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetPlaybackConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPlaybackConfigurationRequest * GetPlaybackConfigurationResponse::request() const
{
    Q_D(const GetPlaybackConfigurationResponse);
    return static_cast<const GetPlaybackConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor GetPlaybackConfiguration \a response.
 */
void GetPlaybackConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPlaybackConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::GetPlaybackConfigurationResponsePrivate
 * \brief The GetPlaybackConfigurationResponsePrivate class provides private implementation for GetPlaybackConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a GetPlaybackConfigurationResponsePrivate object with public implementation \a q.
 */
GetPlaybackConfigurationResponsePrivate::GetPlaybackConfigurationResponsePrivate(
    GetPlaybackConfigurationResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor GetPlaybackConfiguration response element from \a xml.
 */
void GetPlaybackConfigurationResponsePrivate::parseGetPlaybackConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPlaybackConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
