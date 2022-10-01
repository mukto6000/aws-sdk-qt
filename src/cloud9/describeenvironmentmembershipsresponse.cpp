// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeenvironmentmembershipsresponse.h"
#include "describeenvironmentmembershipsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::DescribeEnvironmentMembershipsResponse
 * \brief The DescribeEnvironmentMembershipsResponse class provides an interace for Cloud9 DescribeEnvironmentMemberships responses.
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
 * \sa Cloud9Client::describeEnvironmentMemberships
 */

/*!
 * Constructs a DescribeEnvironmentMembershipsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEnvironmentMembershipsResponse::DescribeEnvironmentMembershipsResponse(
        const DescribeEnvironmentMembershipsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Cloud9Response(new DescribeEnvironmentMembershipsResponsePrivate(this), parent)
{
    setRequest(new DescribeEnvironmentMembershipsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEnvironmentMembershipsRequest * DescribeEnvironmentMembershipsResponse::request() const
{
    Q_D(const DescribeEnvironmentMembershipsResponse);
    return static_cast<const DescribeEnvironmentMembershipsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Cloud9 DescribeEnvironmentMemberships \a response.
 */
void DescribeEnvironmentMembershipsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEnvironmentMembershipsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Cloud9::DescribeEnvironmentMembershipsResponsePrivate
 * \brief The DescribeEnvironmentMembershipsResponsePrivate class provides private implementation for DescribeEnvironmentMembershipsResponse.
 * \internal
 *
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a DescribeEnvironmentMembershipsResponsePrivate object with public implementation \a q.
 */
DescribeEnvironmentMembershipsResponsePrivate::DescribeEnvironmentMembershipsResponsePrivate(
    DescribeEnvironmentMembershipsResponse * const q) : Cloud9ResponsePrivate(q)
{

}

/*!
 * Parses a Cloud9 DescribeEnvironmentMemberships response element from \a xml.
 */
void DescribeEnvironmentMembershipsResponsePrivate::parseDescribeEnvironmentMembershipsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEnvironmentMembershipsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Cloud9
} // namespace QtAws
