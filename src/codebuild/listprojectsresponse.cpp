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

#include "listprojectsresponse.h"
#include "listprojectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::ListProjectsResponse
 * \brief The ListProjectsResponse class provides an interace for CodeBuild ListProjects responses.
 *
 * \inmodule QtAwsCodeBuild
 *
 *  <fullname>AWS CodeBuild</fullname>
 * 
 *  AWS CodeBuild is a fully managed build service in the cloud. AWS CodeBuild compiles your source code, runs unit tests,
 *  and produces artifacts that are ready to deploy. AWS CodeBuild eliminates the need to provision, manage, and scale your
 *  own build servers. It provides prepackaged build environments for the most popular programming languages and build
 *  tools, such as Apache Maven, Gradle, and more. You can also fully customize build environments in AWS CodeBuild to use
 *  your own build tools. AWS CodeBuild scales automatically to meet peak build requests. You pay only for the build time
 *  you consume. For more information about AWS CodeBuild, see the <i> <a
 *  href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">AWS CodeBuild User Guide</a>.</i>
 *
 * \sa CodeBuildClient::listProjects
 */

/*!
 * Constructs a ListProjectsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProjectsResponse::ListProjectsResponse(
        const ListProjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new ListProjectsResponsePrivate(this), parent)
{
    setRequest(new ListProjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProjectsRequest * ListProjectsResponse::request() const
{
    return static_cast<const ListProjectsRequest *>(CodeBuildResponse::request());
}

/*!
 * \reimp
 * Parses a successful CodeBuild ListProjects \a response.
 */
void ListProjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeBuild::ListProjectsResponsePrivate
 * \brief The ListProjectsResponsePrivate class provides private implementation for ListProjectsResponse.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a ListProjectsResponsePrivate object with public implementation \a q.
 */
ListProjectsResponsePrivate::ListProjectsResponsePrivate(
    ListProjectsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/*!
 * Parses a CodeBuild ListProjects response element from \a xml.
 */
void ListProjectsResponsePrivate::parseListProjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeBuild
} // namespace QtAws
