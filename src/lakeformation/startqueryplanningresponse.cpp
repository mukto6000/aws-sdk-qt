// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startqueryplanningresponse.h"
#include "startqueryplanningresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::StartQueryPlanningResponse
 * \brief The StartQueryPlanningResponse class provides an interace for LakeFormation StartQueryPlanning responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::startQueryPlanning
 */

/*!
 * Constructs a StartQueryPlanningResponse object for \a reply to \a request, with parent \a parent.
 */
StartQueryPlanningResponse::StartQueryPlanningResponse(
        const StartQueryPlanningRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new StartQueryPlanningResponsePrivate(this), parent)
{
    setRequest(new StartQueryPlanningRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartQueryPlanningRequest * StartQueryPlanningResponse::request() const
{
    Q_D(const StartQueryPlanningResponse);
    return static_cast<const StartQueryPlanningRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation StartQueryPlanning \a response.
 */
void StartQueryPlanningResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartQueryPlanningResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::StartQueryPlanningResponsePrivate
 * \brief The StartQueryPlanningResponsePrivate class provides private implementation for StartQueryPlanningResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a StartQueryPlanningResponsePrivate object with public implementation \a q.
 */
StartQueryPlanningResponsePrivate::StartQueryPlanningResponsePrivate(
    StartQueryPlanningResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation StartQueryPlanning response element from \a xml.
 */
void StartQueryPlanningResponsePrivate::parseStartQueryPlanningResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartQueryPlanningResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
