// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getunfilteredpartitionsmetadataresponse.h"
#include "getunfilteredpartitionsmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUnfilteredPartitionsMetadataResponse
 * \brief The GetUnfilteredPartitionsMetadataResponse class provides an interace for Glue GetUnfilteredPartitionsMetadata responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUnfilteredPartitionsMetadata
 */

/*!
 * Constructs a GetUnfilteredPartitionsMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
GetUnfilteredPartitionsMetadataResponse::GetUnfilteredPartitionsMetadataResponse(
        const GetUnfilteredPartitionsMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetUnfilteredPartitionsMetadataResponsePrivate(this), parent)
{
    setRequest(new GetUnfilteredPartitionsMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUnfilteredPartitionsMetadataRequest * GetUnfilteredPartitionsMetadataResponse::request() const
{
    Q_D(const GetUnfilteredPartitionsMetadataResponse);
    return static_cast<const GetUnfilteredPartitionsMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetUnfilteredPartitionsMetadata \a response.
 */
void GetUnfilteredPartitionsMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUnfilteredPartitionsMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetUnfilteredPartitionsMetadataResponsePrivate
 * \brief The GetUnfilteredPartitionsMetadataResponsePrivate class provides private implementation for GetUnfilteredPartitionsMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUnfilteredPartitionsMetadataResponsePrivate object with public implementation \a q.
 */
GetUnfilteredPartitionsMetadataResponsePrivate::GetUnfilteredPartitionsMetadataResponsePrivate(
    GetUnfilteredPartitionsMetadataResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetUnfilteredPartitionsMetadata response element from \a xml.
 */
void GetUnfilteredPartitionsMetadataResponsePrivate::parseGetUnfilteredPartitionsMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUnfilteredPartitionsMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
