// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationrequest.h"
#include "updateapplicationrequest_p.h"
#include "updateapplicationresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::UpdateApplicationRequest
 * \brief The UpdateApplicationRequest class provides an interface for ServerlessApplicationRepository UpdateApplication requests.
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
 * \sa ServerlessApplicationRepositoryClient::updateApplication
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApplicationRequest::UpdateApplicationRequest(const UpdateApplicationRequest &other)
    : ServerlessApplicationRepositoryRequest(new UpdateApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApplicationRequest object.
 */
UpdateApplicationRequest::UpdateApplicationRequest()
    : ServerlessApplicationRepositoryRequest(new UpdateApplicationRequestPrivate(ServerlessApplicationRepositoryRequest::UpdateApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApplicationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::ServerlessApplicationRepository::UpdateApplicationRequestPrivate
 * \brief The UpdateApplicationRequestPrivate class provides private implementation for UpdateApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsServerlessApplicationRepository
 */

/*!
 * Constructs a UpdateApplicationRequestPrivate object for ServerlessApplicationRepository \a action,
 * with public implementation \a q.
 */
UpdateApplicationRequestPrivate::UpdateApplicationRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, UpdateApplicationRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationRequest
 * class' copy constructor.
 */
UpdateApplicationRequestPrivate::UpdateApplicationRequestPrivate(
    const UpdateApplicationRequestPrivate &other, UpdateApplicationRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(other, q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
