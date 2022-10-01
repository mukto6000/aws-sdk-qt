// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterealtimelogconfigresponse.h"
#include "updaterealtimelogconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateRealtimeLogConfigResponse
 * \brief The UpdateRealtimeLogConfigResponse class provides an interace for CloudFront UpdateRealtimeLogConfig responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateRealtimeLogConfig
 */

/*!
 * Constructs a UpdateRealtimeLogConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRealtimeLogConfigResponse::UpdateRealtimeLogConfigResponse(
        const UpdateRealtimeLogConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateRealtimeLogConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateRealtimeLogConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRealtimeLogConfigRequest * UpdateRealtimeLogConfigResponse::request() const
{
    Q_D(const UpdateRealtimeLogConfigResponse);
    return static_cast<const UpdateRealtimeLogConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateRealtimeLogConfig \a response.
 */
void UpdateRealtimeLogConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRealtimeLogConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateRealtimeLogConfigResponsePrivate
 * \brief The UpdateRealtimeLogConfigResponsePrivate class provides private implementation for UpdateRealtimeLogConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateRealtimeLogConfigResponsePrivate object with public implementation \a q.
 */
UpdateRealtimeLogConfigResponsePrivate::UpdateRealtimeLogConfigResponsePrivate(
    UpdateRealtimeLogConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateRealtimeLogConfig response element from \a xml.
 */
void UpdateRealtimeLogConfigResponsePrivate::parseUpdateRealtimeLogConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRealtimeLogConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
