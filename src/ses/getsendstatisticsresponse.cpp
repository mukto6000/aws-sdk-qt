// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsendstatisticsresponse.h"
#include "getsendstatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetSendStatisticsResponse
 * \brief The GetSendStatisticsResponse class provides an interace for Ses GetSendStatistics responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::getSendStatistics
 */

/*!
 * Constructs a GetSendStatisticsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSendStatisticsResponse::GetSendStatisticsResponse(
        const GetSendStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetSendStatisticsResponsePrivate(this), parent)
{
    setRequest(new GetSendStatisticsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSendStatisticsRequest * GetSendStatisticsResponse::request() const
{
    Q_D(const GetSendStatisticsResponse);
    return static_cast<const GetSendStatisticsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses GetSendStatistics \a response.
 */
void GetSendStatisticsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSendStatisticsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::GetSendStatisticsResponsePrivate
 * \brief The GetSendStatisticsResponsePrivate class provides private implementation for GetSendStatisticsResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetSendStatisticsResponsePrivate object with public implementation \a q.
 */
GetSendStatisticsResponsePrivate::GetSendStatisticsResponsePrivate(
    GetSendStatisticsResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses GetSendStatistics response element from \a xml.
 */
void GetSendStatisticsResponsePrivate::parseGetSendStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSendStatisticsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
