// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegithubaccounttokenrequest.h"
#include "deletegithubaccounttokenrequest_p.h"
#include "deletegithubaccounttokenresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/*!
 * \class QtAws::CodeDeploy::DeleteGitHubAccountTokenRequest
 * \brief The DeleteGitHubAccountTokenRequest class provides an interface for CodeDeploy DeleteGitHubAccountToken requests.
 *
 * \inmodule QtAwsCodeDeploy
 *
 *  <fullname>AWS CodeDeploy</fullname>
 * 
 *  AWS CodeDeploy is a deployment service that automates application deployments to Amazon EC2 instances, on-premises
 *  instances running in your own facility, serverless AWS Lambda functions, or applications in an Amazon ECS
 * 
 *  service>
 * 
 *  You can deploy a nearly unlimited variety of application content, such as an updated Lambda function, updated
 *  applications in an Amazon ECS service, code, web and configuration files, executables, packages, scripts, multimedia
 *  files, and so on. AWS CodeDeploy can deploy application content stored in Amazon S3 buckets, GitHub repositories, or
 *  Bitbucket repositories. You do not need to make changes to your existing code before you can use AWS
 * 
 *  CodeDeploy>
 * 
 *  AWS CodeDeploy makes it easier for you to rapidly release new features, helps you avoid downtime during application
 *  deployment, and handles the complexity of updating your applications, without many of the risks associated with
 *  error-prone manual
 * 
 *  deployments>
 * 
 *  <b>AWS CodeDeploy Components</b>
 * 
 *  </p
 * 
 *  Use the information in this guide to help you work with the following AWS CodeDeploy
 * 
 *  components> <ul> <li>
 * 
 *  <b>Application</b>: A name that uniquely identifies the application you want to deploy. AWS CodeDeploy uses this name,
 *  which functions as a container, to ensure the correct combination of revision, deployment configuration, and deployment
 *  group are referenced during a
 * 
 *  deployment> </li> <li>
 * 
 *  <b>Deployment group</b>: A set of individual instances, CodeDeploy Lambda deployment configuration settings, or an
 *  Amazon ECS service and network details. A Lambda deployment group specifies how to route traffic to a new version of a
 *  Lambda function. An Amazon ECS deployment group specifies the service created in Amazon ECS to deploy, a load balancer,
 *  and a listener to reroute production traffic to an updated containerized application. An EC2/On-premises deployment
 *  group contains individually tagged instances, Amazon EC2 instances in Amazon EC2 Auto Scaling groups, or both. All
 *  deployment groups can specify optional trigger, alarm, and rollback
 * 
 *  settings> </li> <li>
 * 
 *  <b>Deployment configuration</b>: A set of deployment rules and deployment success and failure conditions used by AWS
 *  CodeDeploy during a
 * 
 *  deployment> </li> <li>
 * 
 *  <b>Deployment</b>: The process and the components used when updating a Lambda function, a containerized application in
 *  an Amazon ECS service, or of installing content on one or more instances.
 * 
 *  </p </li> <li>
 * 
 *  <b>Application revisions</b>: For an AWS Lambda deployment, this is an AppSpec file that specifies the Lambda function
 *  to be updated and one or more functions to validate deployment lifecycle events. For an Amazon ECS deployment, this is
 *  an AppSpec file that specifies the Amazon ECS task definition, container, and port where production traffic is rerouted.
 *  For an EC2/On-premises deployment, this is an archive file that contains source content—source code, webpages,
 *  executable files, and deployment scripts—along with an AppSpec file. Revisions are stored in Amazon S3 buckets or GitHub
 *  repositories. For Amazon S3, a revision is uniquely identified by its Amazon S3 object key and its ETag, version, or
 *  both. For GitHub, a revision is uniquely identified by its commit
 * 
 *  ID> </li> </ul>
 * 
 *  This guide also contains information to help you get details about the instances in your deployments, to make
 *  on-premises instances available for AWS CodeDeploy deployments, to get details about a Lambda function deployment, and
 *  to get details about Amazon ECS service
 * 
 *  deployments>
 * 
 *  <b>AWS CodeDeploy Information Resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/codedeploy/latest/userguide">AWS CodeDeploy User Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/codedeploy/latest/APIReference/">AWS CodeDeploy API Reference Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/cli/latest/reference/deploy/index.html">AWS CLI Reference for AWS CodeDeploy</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://forums.aws.amazon.com/forum.jspa?forumID=179">AWS CodeDeploy Developer Forum</a>
 *
 * \sa CodeDeployClient::deleteGitHubAccountToken
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGitHubAccountTokenRequest::DeleteGitHubAccountTokenRequest(const DeleteGitHubAccountTokenRequest &other)
    : CodeDeployRequest(new DeleteGitHubAccountTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGitHubAccountTokenRequest object.
 */
DeleteGitHubAccountTokenRequest::DeleteGitHubAccountTokenRequest()
    : CodeDeployRequest(new DeleteGitHubAccountTokenRequestPrivate(CodeDeployRequest::DeleteGitHubAccountTokenAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGitHubAccountTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGitHubAccountTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGitHubAccountTokenRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGitHubAccountTokenResponse(*this, reply);
}

/*!
 * \class QtAws::CodeDeploy::DeleteGitHubAccountTokenRequestPrivate
 * \brief The DeleteGitHubAccountTokenRequestPrivate class provides private implementation for DeleteGitHubAccountTokenRequest.
 * \internal
 *
 * \inmodule QtAwsCodeDeploy
 */

/*!
 * Constructs a DeleteGitHubAccountTokenRequestPrivate object for CodeDeploy \a action,
 * with public implementation \a q.
 */
DeleteGitHubAccountTokenRequestPrivate::DeleteGitHubAccountTokenRequestPrivate(
    const CodeDeployRequest::Action action, DeleteGitHubAccountTokenRequest * const q)
    : CodeDeployRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGitHubAccountTokenRequest
 * class' copy constructor.
 */
DeleteGitHubAccountTokenRequestPrivate::DeleteGitHubAccountTokenRequestPrivate(
    const DeleteGitHubAccountTokenRequestPrivate &other, DeleteGitHubAccountTokenRequest * const q)
    : CodeDeployRequestPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws
