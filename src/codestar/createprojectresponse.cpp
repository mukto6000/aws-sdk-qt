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

#include "createprojectresponse.h"
#include "createprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStar {

/*!
 * \class QtAws::CodeStar::CreateProjectResponse
 * \brief The CreateProjectResponse class provides an interace for CodeStar CreateProject responses.
 *
 * \inmodule QtAwsCodeStar
 *
 *  <fullname>AWS CodeStar</fullname>
 * 
 *  This is the API reference for AWS CodeStar. This reference provides descriptions of the operations and data types for
 *  the AWS CodeStar API along with usage
 * 
 *  examples>
 * 
 *  You can use the AWS CodeStar API to work
 * 
 *  with>
 * 
 *  Projects and their resources, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>DeleteProject</code>, which deletes a
 * 
 *  project> </li> <li>
 * 
 *  <code>DescribeProject</code>, which lists the attributes of a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListProjects</code>, which lists all projects associated with your AWS
 * 
 *  account> </li> <li>
 * 
 *  <code>ListResources</code>, which lists the resources associated with a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListTagsForProject</code>, which lists the tags associated with a
 * 
 *  project> </li> <li>
 * 
 *  <code>TagProject</code>, which adds tags to a
 * 
 *  project> </li> <li>
 * 
 *  <code>UntagProject</code>, which removes tags from a
 * 
 *  project> </li> <li>
 * 
 *  <code>UpdateProject</code>, which updates the attributes of a
 * 
 *  project> </li> </ul>
 * 
 *  Teams and team members, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>AssociateTeamMember</code>, which adds an IAM user to the team for a
 * 
 *  project> </li> <li>
 * 
 *  <code>DisassociateTeamMember</code>, which removes an IAM user from the team for a
 * 
 *  project> </li> <li>
 * 
 *  <code>ListTeamMembers</code>, which lists all the IAM users in the team for a project, including their roles and
 * 
 *  attributes> </li> <li>
 * 
 *  <code>UpdateTeamMember</code>, which updates a team member's attributes in a
 * 
 *  project> </li> </ul>
 * 
 *  Users, by calling the
 * 
 *  following> <ul> <li>
 * 
 *  <code>CreateUserProfile</code>, which creates a user profile that contains data associated with the user across all
 * 
 *  projects> </li> <li>
 * 
 *  <code>DeleteUserProfile</code>, which deletes all user profile information across all
 * 
 *  projects> </li> <li>
 * 
 *  <code>DescribeUserProfile</code>, which describes the profile of a
 * 
 *  user> </li> <li>
 * 
 *  <code>ListUserProfiles</code>, which lists all user
 * 
 *  profiles> </li> <li>
 * 
 *  <code>UpdateUserProfile</code>, which updates the profile for a
 *
 * \sa CodeStarClient::createProject
 */

/*!
 * Constructs a CreateProjectResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProjectResponse::CreateProjectResponse(
        const CreateProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarResponse(new CreateProjectResponsePrivate(this), parent)
{
    setRequest(new CreateProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProjectRequest * CreateProjectResponse::request() const
{
    Q_D(const CreateProjectResponse);
    return static_cast<const CreateProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeStar CreateProject \a response.
 */
void CreateProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeStar::CreateProjectResponsePrivate
 * \brief The CreateProjectResponsePrivate class provides private implementation for CreateProjectResponse.
 * \internal
 *
 * \inmodule QtAwsCodeStar
 */

/*!
 * Constructs a CreateProjectResponsePrivate object with public implementation \a q.
 */
CreateProjectResponsePrivate::CreateProjectResponsePrivate(
    CreateProjectResponse * const q) : CodeStarResponsePrivate(q)
{

}

/*!
 * Parses a CodeStar CreateProject response element from \a xml.
 */
void CreateProjectResponsePrivate::parseCreateProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeStar
} // namespace QtAws
