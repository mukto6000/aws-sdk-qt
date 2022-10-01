// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgettracesresponse.h"
#include "batchgettracesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::BatchGetTracesResponse
 * \brief The BatchGetTracesResponse class provides an interace for XRay BatchGetTraces responses.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::batchGetTraces
 */

/*!
 * Constructs a BatchGetTracesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetTracesResponse::BatchGetTracesResponse(
        const BatchGetTracesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : XRayResponse(new BatchGetTracesResponsePrivate(this), parent)
{
    setRequest(new BatchGetTracesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetTracesRequest * BatchGetTracesResponse::request() const
{
    Q_D(const BatchGetTracesResponse);
    return static_cast<const BatchGetTracesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful XRay BatchGetTraces \a response.
 */
void BatchGetTracesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetTracesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::XRay::BatchGetTracesResponsePrivate
 * \brief The BatchGetTracesResponsePrivate class provides private implementation for BatchGetTracesResponse.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a BatchGetTracesResponsePrivate object with public implementation \a q.
 */
BatchGetTracesResponsePrivate::BatchGetTracesResponsePrivate(
    BatchGetTracesResponse * const q) : XRayResponsePrivate(q)
{

}

/*!
 * Parses a XRay BatchGetTraces response element from \a xml.
 */
void BatchGetTracesResponsePrivate::parseBatchGetTracesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetTracesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace XRay
} // namespace QtAws
