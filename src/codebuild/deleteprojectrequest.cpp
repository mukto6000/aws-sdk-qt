// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprojectrequest.h"
#include "deleteprojectrequest_p.h"
#include "deleteprojectresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::DeleteProjectRequest
 * \brief The DeleteProjectRequest class provides an interface for CodeBuild DeleteProject requests.
 *
 * \inmodule QtAwsCodeBuild
 *
 *  <fullname>CodeBuild</fullname>
 * 
 *  CodeBuild is a fully managed build service in the cloud. CodeBuild compiles your source code, runs unit tests, and
 *  produces artifacts that are ready to deploy. CodeBuild eliminates the need to provision, manage, and scale your own
 *  build servers. It provides prepackaged build environments for the most popular programming languages and build tools,
 *  such as Apache Maven, Gradle, and more. You can also fully customize build environments in CodeBuild to use your own
 *  build tools. CodeBuild scales automatically to meet peak build requests. You pay only for the build time you consume.
 *  For more information about CodeBuild, see the <i> <a
 *  href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">CodeBuild User Guide</a>.</i>
 *
 * \sa CodeBuildClient::deleteProject
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProjectRequest::DeleteProjectRequest(const DeleteProjectRequest &other)
    : CodeBuildRequest(new DeleteProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProjectRequest object.
 */
DeleteProjectRequest::DeleteProjectRequest()
    : CodeBuildRequest(new DeleteProjectRequestPrivate(CodeBuildRequest::DeleteProjectAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProjectResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::DeleteProjectRequestPrivate
 * \brief The DeleteProjectRequestPrivate class provides private implementation for DeleteProjectRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a DeleteProjectRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const CodeBuildRequest::Action action, DeleteProjectRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProjectRequest
 * class' copy constructor.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const DeleteProjectRequestPrivate &other, DeleteProjectRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
