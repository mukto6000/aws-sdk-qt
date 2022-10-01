// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateenvironmentmembershipresponse.h"
#include "updateenvironmentmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::UpdateEnvironmentMembershipResponse
 * \brief The UpdateEnvironmentMembershipResponse class provides an interace for Cloud9 UpdateEnvironmentMembership responses.
 *
 * \inmodule QtAwsCloud9
 *
 *  <fullname>Cloud9</fullname>
 * 
 *  Cloud9 is a collection of tools that you can use to code, build, run, test, debug, and release software in the
 * 
 *  cloud>
 * 
 *  For more information about Cloud9, see the <a href="https://docs.aws.amazon.com/cloud9/latest/user-guide">Cloud9 User
 * 
 *  Guide</a>>
 * 
 *  Cloud9 supports these
 * 
 *  operations> <ul> <li>
 * 
 *  <code>CreateEnvironmentEC2</code>: Creates an Cloud9 development environment, launches an Amazon EC2 instance, and then
 *  connects from the instance to the
 * 
 *  environment> </li> <li>
 * 
 *  <code>CreateEnvironmentMembership</code>: Adds an environment member to an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DeleteEnvironment</code>: Deletes an environment. If an Amazon EC2 instance is connected to the environment, also
 *  terminates the
 * 
 *  instance> </li> <li>
 * 
 *  <code>DeleteEnvironmentMembership</code>: Deletes an environment member from an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DescribeEnvironmentMemberships</code>: Gets information about environment members for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>DescribeEnvironments</code>: Gets information about
 * 
 *  environments> </li> <li>
 * 
 *  <code>DescribeEnvironmentStatus</code>: Gets status information for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>ListEnvironments</code>: Gets a list of environment
 * 
 *  identifiers> </li> <li>
 * 
 *  <code>ListTagsForResource</code>: Gets the tags for an
 * 
 *  environment> </li> <li>
 * 
 *  <code>TagResource</code>: Adds tags to an
 * 
 *  environment> </li> <li>
 * 
 *  <code>UntagResource</code>: Removes tags from an
 * 
 *  environment> </li> <li>
 * 
 *  <code>UpdateEnvironment</code>: Changes the settings of an existing
 * 
 *  environment> </li> <li>
 * 
 *  <code>UpdateEnvironmentMembership</code>: Changes the settings of an existing environment member for an
 *
 * \sa Cloud9Client::updateEnvironmentMembership
 */

/*!
 * Constructs a UpdateEnvironmentMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEnvironmentMembershipResponse::UpdateEnvironmentMembershipResponse(
        const UpdateEnvironmentMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Cloud9Response(new UpdateEnvironmentMembershipResponsePrivate(this), parent)
{
    setRequest(new UpdateEnvironmentMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEnvironmentMembershipRequest * UpdateEnvironmentMembershipResponse::request() const
{
    Q_D(const UpdateEnvironmentMembershipResponse);
    return static_cast<const UpdateEnvironmentMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Cloud9 UpdateEnvironmentMembership \a response.
 */
void UpdateEnvironmentMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEnvironmentMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Cloud9::UpdateEnvironmentMembershipResponsePrivate
 * \brief The UpdateEnvironmentMembershipResponsePrivate class provides private implementation for UpdateEnvironmentMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a UpdateEnvironmentMembershipResponsePrivate object with public implementation \a q.
 */
UpdateEnvironmentMembershipResponsePrivate::UpdateEnvironmentMembershipResponsePrivate(
    UpdateEnvironmentMembershipResponse * const q) : Cloud9ResponsePrivate(q)
{

}

/*!
 * Parses a Cloud9 UpdateEnvironmentMembership response element from \a xml.
 */
void UpdateEnvironmentMembershipResponsePrivate::parseUpdateEnvironmentMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEnvironmentMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Cloud9
} // namespace QtAws
