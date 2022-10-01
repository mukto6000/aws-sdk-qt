// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationversionrequest.h"
#include "createapplicationversionrequest_p.h"
#include "createapplicationversionresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::CreateApplicationVersionRequest
 * \brief The CreateApplicationVersionRequest class provides an interface for ServerlessApplicationRepository CreateApplicationVersion requests.
 *
 * \inmodule QtAwsServerlessApplicationRepository
 *
 *  The AWS Serverless Application Repository makes it easy for developers and enterprises to quickly find and deploy
 *  serverless applications in the AWS Cloud. For more information about serverless applications, see Serverless Computing
 *  and Applications on the AWS website.</p><p>The AWS Serverless Application Repository is deeply integrated with the AWS
 *  Lambda console, so that developers of all levels can get started with serverless computing without needing to learn
 *  anything new. You can use category keywords to browse for applications such as web and mobile backends, data processing
 *  applications, or chatbots. You can also search for applications by name, publisher, or event source. To use an
 *  application, you simply choose it, configure any required fields, and deploy it with a few clicks. </p><p>You can also
 *  easily publish applications, sharing them publicly with the community at large, or privately within your team or across
 *  your organization. To publish a serverless application (or app), you can use the AWS Management Console, AWS Command
 *  Line Interface (AWS CLI), or AWS SDKs to upload the code. Along with the code, you upload a simple manifest file, also
 *  known as the AWS Serverless Application Model (AWS SAM) template. For more information about AWS SAM, see AWS Serverless
 *  Application Model (AWS SAM) on the AWS Labs GitHub repository.</p><p>The AWS Serverless Application Repository Developer
 *  Guide contains more information about the two developer experiences available:</p><ul> <li>
 * 
 *  Consuming Applications – Browse for applications and view information about them, including source code and readme
 *  files. Also install, configure, and deploy applications of your choosing.
 * 
 *  </p
 * 
 *  Publishing Applications – Configure and upload applications to make them available to other developers, and publish new
 *  versions of applications.
 *
 * \sa ServerlessApplicationRepositoryClient::createApplicationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApplicationVersionRequest::CreateApplicationVersionRequest(const CreateApplicationVersionRequest &other)
    : ServerlessApplicationRepositoryRequest(new CreateApplicationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApplicationVersionRequest object.
 */
CreateApplicationVersionRequest::CreateApplicationVersionRequest()
    : ServerlessApplicationRepositoryRequest(new CreateApplicationVersionRequestPrivate(ServerlessApplicationRepositoryRequest::CreateApplicationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApplicationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApplicationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApplicationVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::ServerlessApplicationRepository::CreateApplicationVersionRequestPrivate
 * \brief The CreateApplicationVersionRequestPrivate class provides private implementation for CreateApplicationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsServerlessApplicationRepository
 */

/*!
 * Constructs a CreateApplicationVersionRequestPrivate object for ServerlessApplicationRepository \a action,
 * with public implementation \a q.
 */
CreateApplicationVersionRequestPrivate::CreateApplicationVersionRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, CreateApplicationVersionRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationVersionRequest
 * class' copy constructor.
 */
CreateApplicationVersionRequestPrivate::CreateApplicationVersionRequestPrivate(
    const CreateApplicationVersionRequestPrivate &other, CreateApplicationVersionRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(other, q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
