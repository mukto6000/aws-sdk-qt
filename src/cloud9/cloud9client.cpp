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

#include "cloud9client.h"
#include "cloud9client_p.h"

#include "core/awssignaturev4.h"
#include "createenvironmentec2request.h"
#include "createenvironmentec2response.h"
#include "createenvironmentmembershiprequest.h"
#include "createenvironmentmembershipresponse.h"
#include "deleteenvironmentrequest.h"
#include "deleteenvironmentresponse.h"
#include "deleteenvironmentmembershiprequest.h"
#include "deleteenvironmentmembershipresponse.h"
#include "describeenvironmentmembershipsrequest.h"
#include "describeenvironmentmembershipsresponse.h"
#include "describeenvironmentstatusrequest.h"
#include "describeenvironmentstatusresponse.h"
#include "describeenvironmentsrequest.h"
#include "describeenvironmentsresponse.h"
#include "listenvironmentsrequest.h"
#include "listenvironmentsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateenvironmentrequest.h"
#include "updateenvironmentresponse.h"
#include "updateenvironmentmembershiprequest.h"
#include "updateenvironmentmembershipresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Cloud9
 * \brief Contains classess for accessing AWS Cloud9.
 *
 * \inmodule QtAwsCloud9
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Cloud9 {

/*!
 * \class QtAws::Cloud9::Cloud9Client
 * \brief The Cloud9Client class provides access to the AWS Cloud9 service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloud9
 *
 *  <fullname>AWS Cloud9</fullname>
 * 
 *  AWS Cloud9 is a collection of tools that you can use to code, build, run, test, debug, and release software in the
 * 
 *  cloud>
 * 
 *  For more information about AWS Cloud9, see the <a href="https://docs.aws.amazon.com/cloud9/latest/user-guide">AWS Cloud9
 *  User
 * 
 *  Guide</a>>
 * 
 *  AWS Cloud9 supports these
 * 
 *  operations> <ul> <li>
 * 
 *  <code>CreateEnvironmentEC2</code>: Creates an AWS Cloud9 development environment, launches an Amazon EC2 instance, and
 *  then connects from the instance to the
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
 */

/*!
 * \brief Constructs a Cloud9Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Cloud9Client::Cloud9Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-09-23"),
    QStringLiteral("cloud9"),
    QStringLiteral("AWS Cloud9"),
    QStringLiteral("cloud9"),
    parent), d_ptr(new Cloud9ClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload Cloud9Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Cloud9Client::Cloud9Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-09-23"),
    QStringLiteral("cloud9"),
    QStringLiteral("AWS Cloud9"),
    QStringLiteral("cloud9"),
    parent), d_ptr(new Cloud9ClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * CreateEnvironmentEC2Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS Cloud9 development environment, launches an Amazon Elastic Compute Cloud (Amazon EC2) instance, and then
 * connects from the instance to the
 */
CreateEnvironmentEC2Response * Cloud9Client::createEnvironmentEC2(const CreateEnvironmentEC2Request &request)
{
    return qobject_cast<CreateEnvironmentEC2Response *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * CreateEnvironmentMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an environment member to an AWS Cloud9 development
 */
CreateEnvironmentMembershipResponse * Cloud9Client::createEnvironmentMembership(const CreateEnvironmentMembershipRequest &request)
{
    return qobject_cast<CreateEnvironmentMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * DeleteEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AWS Cloud9 development environment. If an Amazon EC2 instance is connected to the environment, also
 * terminates the
 */
DeleteEnvironmentResponse * Cloud9Client::deleteEnvironment(const DeleteEnvironmentRequest &request)
{
    return qobject_cast<DeleteEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * DeleteEnvironmentMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an environment member from an AWS Cloud9 development
 */
DeleteEnvironmentMembershipResponse * Cloud9Client::deleteEnvironmentMembership(const DeleteEnvironmentMembershipRequest &request)
{
    return qobject_cast<DeleteEnvironmentMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * DescribeEnvironmentMembershipsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about environment members for an AWS Cloud9 development
 */
DescribeEnvironmentMembershipsResponse * Cloud9Client::describeEnvironmentMemberships(const DescribeEnvironmentMembershipsRequest &request)
{
    return qobject_cast<DescribeEnvironmentMembershipsResponse *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * DescribeEnvironmentStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets status information for an AWS Cloud9 development
 */
DescribeEnvironmentStatusResponse * Cloud9Client::describeEnvironmentStatus(const DescribeEnvironmentStatusRequest &request)
{
    return qobject_cast<DescribeEnvironmentStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * DescribeEnvironmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about AWS Cloud9 development
 */
DescribeEnvironmentsResponse * Cloud9Client::describeEnvironments(const DescribeEnvironmentsRequest &request)
{
    return qobject_cast<DescribeEnvironmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * ListEnvironmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of AWS Cloud9 development environment
 */
ListEnvironmentsResponse * Cloud9Client::listEnvironments(const ListEnvironmentsRequest &request)
{
    return qobject_cast<ListEnvironmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of the tags associated with an AWS Cloud9 development
 */
ListTagsForResourceResponse * Cloud9Client::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to an AWS Cloud9 development
 *
 * environment> <b>
 *
 * Tags that you add to an AWS Cloud9 environment by using this method will NOT be automatically propagated to underlying
 */
TagResourceResponse * Cloud9Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from an AWS Cloud9 development
 */
UntagResourceResponse * Cloud9Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * UpdateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the settings of an existing AWS Cloud9 development
 */
UpdateEnvironmentResponse * Cloud9Client::updateEnvironment(const UpdateEnvironmentRequest &request)
{
    return qobject_cast<UpdateEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the Cloud9Client service, and returns a pointer to an
 * UpdateEnvironmentMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the settings of an existing environment member for an AWS Cloud9 development
 */
UpdateEnvironmentMembershipResponse * Cloud9Client::updateEnvironmentMembership(const UpdateEnvironmentMembershipRequest &request)
{
    return qobject_cast<UpdateEnvironmentMembershipResponse *>(send(request));
}

/*!
 * \class QtAws::Cloud9::Cloud9ClientPrivate
 * \brief The Cloud9ClientPrivate class provides private implementation for Cloud9Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloud9
 */

/*!
 * Constructs a Cloud9ClientPrivate object with public implementation \a q.
 */
Cloud9ClientPrivate::Cloud9ClientPrivate(Cloud9Client * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace Cloud9
} // namespace QtAws
