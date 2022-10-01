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

#include "startassessmentresponse.h"
#include "startassessmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::StartAssessmentResponse
 * \brief The StartAssessmentResponse class provides an interace for MigrationHubStrategy StartAssessment responses.
 *
 * \inmodule QtAwsMigrationHubStrategy
 *
 *  <fullname>Migration Hub Strategy Recommendations</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for
 *  Migration Hub Strategy Recommendations (Strategy Recommendations). The topic for each action shows the API request
 *  parameters and the response. Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the
 *  programming language or platform that you're using. For more information, see <a
 *  href="http://aws.amazon.com/tools/#SDKs">AWS
 *
 * \sa MigrationHubStrategyClient::startAssessment
 */

/*!
 * Constructs a StartAssessmentResponse object for \a reply to \a request, with parent \a parent.
 */
StartAssessmentResponse::StartAssessmentResponse(
        const StartAssessmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubStrategyResponse(new StartAssessmentResponsePrivate(this), parent)
{
    setRequest(new StartAssessmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartAssessmentRequest * StartAssessmentResponse::request() const
{
    Q_D(const StartAssessmentResponse);
    return static_cast<const StartAssessmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubStrategy StartAssessment \a response.
 */
void StartAssessmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartAssessmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubStrategy::StartAssessmentResponsePrivate
 * \brief The StartAssessmentResponsePrivate class provides private implementation for StartAssessmentResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a StartAssessmentResponsePrivate object with public implementation \a q.
 */
StartAssessmentResponsePrivate::StartAssessmentResponsePrivate(
    StartAssessmentResponse * const q) : MigrationHubStrategyResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubStrategy StartAssessment response element from \a xml.
 */
void StartAssessmentResponsePrivate::parseStartAssessmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartAssessmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubStrategy
} // namespace QtAws
