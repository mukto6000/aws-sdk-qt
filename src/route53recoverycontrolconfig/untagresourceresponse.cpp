/*
    Copyright 2013-2021 Paul Colby

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

#include "untagresourceresponse.h"
#include "untagresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryControlConfig {

/*!
 * \class QtAws::Route53RecoveryControlConfig::UntagResourceResponse
 * \brief The UntagResourceResponse class provides an interace for Route53RecoveryControlConfig UntagResource responses.
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 *
 *  Recovery Control Configuration API Reference for Amazon Route 53 Application Recovery
 *
 * \sa Route53RecoveryControlConfigClient::untagResource
 */

/*!
 * Constructs a UntagResourceResponse object for \a reply to \a request, with parent \a parent.
 */
UntagResourceResponse::UntagResourceResponse(
        const UntagResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryControlConfigResponse(new UntagResourceResponsePrivate(this), parent)
{
    setRequest(new UntagResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagResourceRequest * UntagResourceResponse::request() const
{
    Q_D(const UntagResourceResponse);
    return static_cast<const UntagResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryControlConfig UntagResource \a response.
 */
void UntagResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryControlConfig::UntagResourceResponsePrivate
 * \brief The UntagResourceResponsePrivate class provides private implementation for UntagResourceResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryControlConfig
 */

/*!
 * Constructs a UntagResourceResponsePrivate object with public implementation \a q.
 */
UntagResourceResponsePrivate::UntagResourceResponsePrivate(
    UntagResourceResponse * const q) : Route53RecoveryControlConfigResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryControlConfig UntagResource response element from \a xml.
 */
void UntagResourceResponsePrivate::parseUntagResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryControlConfig
} // namespace QtAws
