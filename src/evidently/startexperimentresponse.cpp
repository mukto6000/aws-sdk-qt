// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startexperimentresponse.h"
#include "startexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::StartExperimentResponse
 * \brief The StartExperimentResponse class provides an interace for Evidently StartExperiment responses.
 *
 * \inmodule QtAwsEvidently
 *
 *  You can use Amazon CloudWatch Evidently to safely validate new features by serving them to a specified percentage of
 *  your users while you roll out the feature. You can monitor the performance of the new feature to help you decide when to
 *  ramp up traffic to your users. This helps you reduce risk and identify unintended consequences before you fully launch
 *  the
 * 
 *  feature>
 * 
 *  You can also conduct A/B experiments to make feature design decisions based on evidence and data. An experiment can test
 *  as many as five variations at once. Evidently collects experiment data and analyzes it using statistical methods. It
 *  also provides clear recommendations about which variations perform better. You can test both user-facing features and
 *  backend
 *
 * \sa EvidentlyClient::startExperiment
 */

/*!
 * Constructs a StartExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
StartExperimentResponse::StartExperimentResponse(
        const StartExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new StartExperimentResponsePrivate(this), parent)
{
    setRequest(new StartExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartExperimentRequest * StartExperimentResponse::request() const
{
    Q_D(const StartExperimentResponse);
    return static_cast<const StartExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently StartExperiment \a response.
 */
void StartExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::StartExperimentResponsePrivate
 * \brief The StartExperimentResponsePrivate class provides private implementation for StartExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a StartExperimentResponsePrivate object with public implementation \a q.
 */
StartExperimentResponsePrivate::StartExperimentResponsePrivate(
    StartExperimentResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently StartExperiment response element from \a xml.
 */
void StartExperimentResponsePrivate::parseStartExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
