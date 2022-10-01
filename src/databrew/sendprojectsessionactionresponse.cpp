// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendprojectsessionactionresponse.h"
#include "sendprojectsessionactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::SendProjectSessionActionResponse
 * \brief The SendProjectSessionActionResponse class provides an interace for DataBrew SendProjectSessionAction responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::sendProjectSessionAction
 */

/*!
 * Constructs a SendProjectSessionActionResponse object for \a reply to \a request, with parent \a parent.
 */
SendProjectSessionActionResponse::SendProjectSessionActionResponse(
        const SendProjectSessionActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new SendProjectSessionActionResponsePrivate(this), parent)
{
    setRequest(new SendProjectSessionActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendProjectSessionActionRequest * SendProjectSessionActionResponse::request() const
{
    Q_D(const SendProjectSessionActionResponse);
    return static_cast<const SendProjectSessionActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew SendProjectSessionAction \a response.
 */
void SendProjectSessionActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendProjectSessionActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::SendProjectSessionActionResponsePrivate
 * \brief The SendProjectSessionActionResponsePrivate class provides private implementation for SendProjectSessionActionResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a SendProjectSessionActionResponsePrivate object with public implementation \a q.
 */
SendProjectSessionActionResponsePrivate::SendProjectSessionActionResponsePrivate(
    SendProjectSessionActionResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew SendProjectSessionAction response element from \a xml.
 */
void SendProjectSessionActionResponsePrivate::parseSendProjectSessionActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendProjectSessionActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
