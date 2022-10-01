// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopexperimentresponse.h"
#include "stopexperimentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::StopExperimentResponse
 * \brief The StopExperimentResponse class provides an interace for Evidently StopExperiment responses.
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
 * \sa EvidentlyClient::stopExperiment
 */

/*!
 * Constructs a StopExperimentResponse object for \a reply to \a request, with parent \a parent.
 */
StopExperimentResponse::StopExperimentResponse(
        const StopExperimentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new StopExperimentResponsePrivate(this), parent)
{
    setRequest(new StopExperimentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopExperimentRequest * StopExperimentResponse::request() const
{
    Q_D(const StopExperimentResponse);
    return static_cast<const StopExperimentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently StopExperiment \a response.
 */
void StopExperimentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopExperimentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::StopExperimentResponsePrivate
 * \brief The StopExperimentResponsePrivate class provides private implementation for StopExperimentResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a StopExperimentResponsePrivate object with public implementation \a q.
 */
StopExperimentResponsePrivate::StopExperimentResponsePrivate(
    StopExperimentResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently StopExperiment response element from \a xml.
 */
void StopExperimentResponsePrivate::parseStopExperimentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopExperimentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
