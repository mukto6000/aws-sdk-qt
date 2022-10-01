// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserprofileresponse.h"
#include "createuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeStar {

/*!
 * \class QtAws::CodeStar::CreateUserProfileResponse
 * \brief The CreateUserProfileResponse class provides an interace for CodeStar CreateUserProfile responses.
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
 * \sa CodeStarClient::createUserProfile
 */

/*!
 * Constructs a CreateUserProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserProfileResponse::CreateUserProfileResponse(
        const CreateUserProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeStarResponse(new CreateUserProfileResponsePrivate(this), parent)
{
    setRequest(new CreateUserProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserProfileRequest * CreateUserProfileResponse::request() const
{
    Q_D(const CreateUserProfileResponse);
    return static_cast<const CreateUserProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeStar CreateUserProfile \a response.
 */
void CreateUserProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeStar::CreateUserProfileResponsePrivate
 * \brief The CreateUserProfileResponsePrivate class provides private implementation for CreateUserProfileResponse.
 * \internal
 *
 * \inmodule QtAwsCodeStar
 */

/*!
 * Constructs a CreateUserProfileResponsePrivate object with public implementation \a q.
 */
CreateUserProfileResponsePrivate::CreateUserProfileResponsePrivate(
    CreateUserProfileResponse * const q) : CodeStarResponsePrivate(q)
{

}

/*!
 * Parses a CodeStar CreateUserProfile response element from \a xml.
 */
void CreateUserProfileResponsePrivate::parseCreateUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeStar
} // namespace QtAws
