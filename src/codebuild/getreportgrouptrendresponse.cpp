// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreportgrouptrendresponse.h"
#include "getreportgrouptrendresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::GetReportGroupTrendResponse
 * \brief The GetReportGroupTrendResponse class provides an interace for CodeBuild GetReportGroupTrend responses.
 *
 * \inmodule QtAwsCodeBuild
 *
 *  <fullname>CodeBuild</fullname>
 * 
 *  CodeBuild is a fully managed build service in the cloud. CodeBuild compiles your source code, runs unit tests, and
 *  produces artifacts that are ready to deploy. CodeBuild eliminates the need to provision, manage, and scale your own
 *  build servers. It provides prepackaged build environments for the most popular programming languages and build tools,
 *  such as Apache Maven, Gradle, and more. You can also fully customize build environments in CodeBuild to use your own
 *  build tools. CodeBuild scales automatically to meet peak build requests. You pay only for the build time you consume.
 *  For more information about CodeBuild, see the <i> <a
 *  href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">CodeBuild User Guide</a>.</i>
 *
 * \sa CodeBuildClient::getReportGroupTrend
 */

/*!
 * Constructs a GetReportGroupTrendResponse object for \a reply to \a request, with parent \a parent.
 */
GetReportGroupTrendResponse::GetReportGroupTrendResponse(
        const GetReportGroupTrendRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new GetReportGroupTrendResponsePrivate(this), parent)
{
    setRequest(new GetReportGroupTrendRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReportGroupTrendRequest * GetReportGroupTrendResponse::request() const
{
    Q_D(const GetReportGroupTrendResponse);
    return static_cast<const GetReportGroupTrendRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeBuild GetReportGroupTrend \a response.
 */
void GetReportGroupTrendResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReportGroupTrendResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::GetReportGroupTrendResponsePrivate
 * \brief The GetReportGroupTrendResponsePrivate class provides private implementation for GetReportGroupTrendResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a GetReportGroupTrendResponsePrivate object with public implementation \a q.
 */
GetReportGroupTrendResponsePrivate::GetReportGroupTrendResponsePrivate(
    GetReportGroupTrendResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild GetReportGroupTrend response element from \a xml.
 */
void GetReportGroupTrendResponsePrivate::parseGetReportGroupTrendResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReportGroupTrendResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws
