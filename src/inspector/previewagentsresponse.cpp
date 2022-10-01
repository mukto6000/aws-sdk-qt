// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "previewagentsresponse.h"
#include "previewagentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::PreviewAgentsResponse
 * \brief The PreviewAgentsResponse class provides an interace for Inspector PreviewAgents responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::previewAgents
 */

/*!
 * Constructs a PreviewAgentsResponse object for \a reply to \a request, with parent \a parent.
 */
PreviewAgentsResponse::PreviewAgentsResponse(
        const PreviewAgentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new PreviewAgentsResponsePrivate(this), parent)
{
    setRequest(new PreviewAgentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PreviewAgentsRequest * PreviewAgentsResponse::request() const
{
    Q_D(const PreviewAgentsResponse);
    return static_cast<const PreviewAgentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector PreviewAgents \a response.
 */
void PreviewAgentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PreviewAgentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::PreviewAgentsResponsePrivate
 * \brief The PreviewAgentsResponsePrivate class provides private implementation for PreviewAgentsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a PreviewAgentsResponsePrivate object with public implementation \a q.
 */
PreviewAgentsResponsePrivate::PreviewAgentsResponsePrivate(
    PreviewAgentsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector PreviewAgents response element from \a xml.
 */
void PreviewAgentsResponsePrivate::parsePreviewAgentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PreviewAgentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
