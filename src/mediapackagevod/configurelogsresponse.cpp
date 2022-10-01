// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "configurelogsresponse.h"
#include "configurelogsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::ConfigureLogsResponse
 * \brief The ConfigureLogsResponse class provides an interace for MediaPackageVod ConfigureLogs responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::configureLogs
 */

/*!
 * Constructs a ConfigureLogsResponse object for \a reply to \a request, with parent \a parent.
 */
ConfigureLogsResponse::ConfigureLogsResponse(
        const ConfigureLogsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new ConfigureLogsResponsePrivate(this), parent)
{
    setRequest(new ConfigureLogsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfigureLogsRequest * ConfigureLogsResponse::request() const
{
    Q_D(const ConfigureLogsResponse);
    return static_cast<const ConfigureLogsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod ConfigureLogs \a response.
 */
void ConfigureLogsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfigureLogsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::ConfigureLogsResponsePrivate
 * \brief The ConfigureLogsResponsePrivate class provides private implementation for ConfigureLogsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a ConfigureLogsResponsePrivate object with public implementation \a q.
 */
ConfigureLogsResponsePrivate::ConfigureLogsResponsePrivate(
    ConfigureLogsResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod ConfigureLogs response element from \a xml.
 */
void ConfigureLogsResponsePrivate::parseConfigureLogsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfigureLogsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
