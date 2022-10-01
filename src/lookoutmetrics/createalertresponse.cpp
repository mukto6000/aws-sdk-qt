// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createalertresponse.h"
#include "createalertresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::CreateAlertResponse
 * \brief The CreateAlertResponse class provides an interace for LookoutMetrics CreateAlert responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::createAlert
 */

/*!
 * Constructs a CreateAlertResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAlertResponse::CreateAlertResponse(
        const CreateAlertRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new CreateAlertResponsePrivate(this), parent)
{
    setRequest(new CreateAlertRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAlertRequest * CreateAlertResponse::request() const
{
    Q_D(const CreateAlertResponse);
    return static_cast<const CreateAlertRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics CreateAlert \a response.
 */
void CreateAlertResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAlertResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::CreateAlertResponsePrivate
 * \brief The CreateAlertResponsePrivate class provides private implementation for CreateAlertResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a CreateAlertResponsePrivate object with public implementation \a q.
 */
CreateAlertResponsePrivate::CreateAlertResponsePrivate(
    CreateAlertResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics CreateAlert response element from \a xml.
 */
void CreateAlertResponsePrivate::parseCreateAlertResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAlertResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
