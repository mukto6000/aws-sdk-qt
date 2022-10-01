// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecomponentconfigurationresponse.h"
#include "describecomponentconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentConfigurationResponse
 * \brief The DescribeComponentConfigurationResponse class provides an interace for ApplicationInsights DescribeComponentConfiguration responses.
 *
 * \inmodule QtAwsApplicationInsights
 *
 *  <fullname>Amazon CloudWatch Application Insights</fullname>
 * 
 *  Amazon CloudWatch Application Insights is a service that helps you detect common problems with your applications. It
 *  enables you to pinpoint the source of issues in your applications (built with technologies such as Microsoft IIS, .NET,
 *  and Microsoft SQL Server), by providing key insights into detected
 * 
 *  problems>
 * 
 *  After you onboard your application, CloudWatch Application Insights identifies, recommends, and sets up metrics and
 *  logs. It continuously analyzes and correlates your metrics and logs for unusual behavior to surface actionable problems
 *  with your application. For example, if your application is slow and unresponsive and leading to HTTP 500 errors in your
 *  Application Load Balancer (ALB), Application Insights informs you that a memory pressure problem with your SQL Server
 *  database is occurring. It bases this analysis on impactful metrics and log errors.
 *
 * \sa ApplicationInsightsClient::describeComponentConfiguration
 */

/*!
 * Constructs a DescribeComponentConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeComponentConfigurationResponse::DescribeComponentConfigurationResponse(
        const DescribeComponentConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new DescribeComponentConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeComponentConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeComponentConfigurationRequest * DescribeComponentConfigurationResponse::request() const
{
    Q_D(const DescribeComponentConfigurationResponse);
    return static_cast<const DescribeComponentConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights DescribeComponentConfiguration \a response.
 */
void DescribeComponentConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeComponentConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentConfigurationResponsePrivate
 * \brief The DescribeComponentConfigurationResponsePrivate class provides private implementation for DescribeComponentConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeComponentConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeComponentConfigurationResponsePrivate::DescribeComponentConfigurationResponsePrivate(
    DescribeComponentConfigurationResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights DescribeComponentConfiguration response element from \a xml.
 */
void DescribeComponentConfigurationResponsePrivate::parseDescribeComponentConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeComponentConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
