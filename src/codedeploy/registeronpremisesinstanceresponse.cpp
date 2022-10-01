// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registeronpremisesinstanceresponse.h"
#include "registeronpremisesinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/*!
 * \class QtAws::CodeDeploy::RegisterOnPremisesInstanceResponse
 * \brief The RegisterOnPremisesInstanceResponse class provides an interace for CodeDeploy RegisterOnPremisesInstance responses.
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
 * \sa CodeDeployClient::registerOnPremisesInstance
 */

/*!
 * Constructs a RegisterOnPremisesInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterOnPremisesInstanceResponse::RegisterOnPremisesInstanceResponse(
        const RegisterOnPremisesInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new RegisterOnPremisesInstanceResponsePrivate(this), parent)
{
    setRequest(new RegisterOnPremisesInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterOnPremisesInstanceRequest * RegisterOnPremisesInstanceResponse::request() const
{
    Q_D(const RegisterOnPremisesInstanceResponse);
    return static_cast<const RegisterOnPremisesInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CodeDeploy RegisterOnPremisesInstance \a response.
 */
void RegisterOnPremisesInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterOnPremisesInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CodeDeploy::RegisterOnPremisesInstanceResponsePrivate
 * \brief The RegisterOnPremisesInstanceResponsePrivate class provides private implementation for RegisterOnPremisesInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsCodeDeploy
 */

/*!
 * Constructs a RegisterOnPremisesInstanceResponsePrivate object with public implementation \a q.
 */
RegisterOnPremisesInstanceResponsePrivate::RegisterOnPremisesInstanceResponsePrivate(
    RegisterOnPremisesInstanceResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/*!
 * Parses a CodeDeploy RegisterOnPremisesInstance response element from \a xml.
 */
void RegisterOnPremisesInstanceResponsePrivate::parseRegisterOnPremisesInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterOnPremisesInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CodeDeploy
} // namespace QtAws
