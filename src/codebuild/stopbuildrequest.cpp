// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopbuildrequest.h"
#include "stopbuildrequest_p.h"
#include "stopbuildresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::StopBuildRequest
 * \brief The StopBuildRequest class provides an interface for CodeBuild StopBuild requests.
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
 * \sa CodeBuildClient::stopBuild
 */

/*!
 * Constructs a copy of \a other.
 */
StopBuildRequest::StopBuildRequest(const StopBuildRequest &other)
    : CodeBuildRequest(new StopBuildRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopBuildRequest object.
 */
StopBuildRequest::StopBuildRequest()
    : CodeBuildRequest(new StopBuildRequestPrivate(CodeBuildRequest::StopBuildAction, this))
{

}

/*!
 * \reimp
 */
bool StopBuildRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopBuildResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopBuildRequest::response(QNetworkReply * const reply) const
{
    return new StopBuildResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::StopBuildRequestPrivate
 * \brief The StopBuildRequestPrivate class provides private implementation for StopBuildRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a StopBuildRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
StopBuildRequestPrivate::StopBuildRequestPrivate(
    const CodeBuildRequest::Action action, StopBuildRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopBuildRequest
 * class' copy constructor.
 */
StopBuildRequestPrivate::StopBuildRequestPrivate(
    const StopBuildRequestPrivate &other, StopBuildRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
