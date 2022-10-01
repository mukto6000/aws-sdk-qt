// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappassessmentresponse.h"
#include "describeappassessmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DescribeAppAssessmentResponse
 * \brief The DescribeAppAssessmentResponse class provides an interace for ResilienceHub DescribeAppAssessment responses.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::describeAppAssessment
 */

/*!
 * Constructs a DescribeAppAssessmentResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAppAssessmentResponse::DescribeAppAssessmentResponse(
        const DescribeAppAssessmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResilienceHubResponse(new DescribeAppAssessmentResponsePrivate(this), parent)
{
    setRequest(new DescribeAppAssessmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAppAssessmentRequest * DescribeAppAssessmentResponse::request() const
{
    Q_D(const DescribeAppAssessmentResponse);
    return static_cast<const DescribeAppAssessmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResilienceHub DescribeAppAssessment \a response.
 */
void DescribeAppAssessmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAppAssessmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResilienceHub::DescribeAppAssessmentResponsePrivate
 * \brief The DescribeAppAssessmentResponsePrivate class provides private implementation for DescribeAppAssessmentResponse.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DescribeAppAssessmentResponsePrivate object with public implementation \a q.
 */
DescribeAppAssessmentResponsePrivate::DescribeAppAssessmentResponsePrivate(
    DescribeAppAssessmentResponse * const q) : ResilienceHubResponsePrivate(q)
{

}

/*!
 * Parses a ResilienceHub DescribeAppAssessment response element from \a xml.
 */
void DescribeAppAssessmentResponsePrivate::parseDescribeAppAssessmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppAssessmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResilienceHub
} // namespace QtAws
