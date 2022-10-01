// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startschemacreationresponse.h"
#include "startschemacreationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::StartSchemaCreationResponse
 * \brief The StartSchemaCreationResponse class provides an interace for AppSync StartSchemaCreation responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::startSchemaCreation
 */

/*!
 * Constructs a StartSchemaCreationResponse object for \a reply to \a request, with parent \a parent.
 */
StartSchemaCreationResponse::StartSchemaCreationResponse(
        const StartSchemaCreationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new StartSchemaCreationResponsePrivate(this), parent)
{
    setRequest(new StartSchemaCreationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSchemaCreationRequest * StartSchemaCreationResponse::request() const
{
    Q_D(const StartSchemaCreationResponse);
    return static_cast<const StartSchemaCreationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync StartSchemaCreation \a response.
 */
void StartSchemaCreationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSchemaCreationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::StartSchemaCreationResponsePrivate
 * \brief The StartSchemaCreationResponsePrivate class provides private implementation for StartSchemaCreationResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a StartSchemaCreationResponsePrivate object with public implementation \a q.
 */
StartSchemaCreationResponsePrivate::StartSchemaCreationResponsePrivate(
    StartSchemaCreationResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync StartSchemaCreation response element from \a xml.
 */
void StartSchemaCreationResponsePrivate::parseStartSchemaCreationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSchemaCreationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
