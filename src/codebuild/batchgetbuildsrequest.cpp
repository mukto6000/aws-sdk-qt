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

#include "batchgetbuildsrequest.h"
#include "batchgetbuildsrequest_p.h"
#include "batchgetbuildsresponse.h"
#include "codebuildrequest_p.h"

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::BatchGetBuildsRequest
 * \brief The BatchGetBuildsRequest class provides an interface for CodeBuild BatchGetBuilds requests.
 *
 * \inmodule QtAwsCodeBuild
 *
 *  <fullname>AWS CodeBuild</fullname>
 * 
 *  AWS CodeBuild is a fully managed build service in the cloud. AWS CodeBuild compiles your source code, runs unit tests,
 *  and produces artifacts that are ready to deploy. AWS CodeBuild eliminates the need to provision, manage, and scale your
 *  own build servers. It provides prepackaged build environments for the most popular programming languages and build
 *  tools, such as Apache Maven, Gradle, and more. You can also fully customize build environments in AWS CodeBuild to use
 *  your own build tools. AWS CodeBuild scales automatically to meet peak build requests. You pay only for the build time
 *  you consume. For more information about AWS CodeBuild, see the <i> <a
 *  href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">AWS CodeBuild User Guide</a>.</i>
 *
 * \sa CodeBuildClient::batchGetBuilds
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetBuildsRequest::BatchGetBuildsRequest(const BatchGetBuildsRequest &other)
    : CodeBuildRequest(new BatchGetBuildsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetBuildsRequest object.
 */
BatchGetBuildsRequest::BatchGetBuildsRequest()
    : CodeBuildRequest(new BatchGetBuildsRequestPrivate(CodeBuildRequest::BatchGetBuildsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetBuildsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetBuildsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetBuildsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetBuildsResponse(*this, reply);
}

/*!
 * \class QtAws::CodeBuild::BatchGetBuildsRequestPrivate
 * \brief The BatchGetBuildsRequestPrivate class provides private implementation for BatchGetBuildsRequest.
 * \internal
 *
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a BatchGetBuildsRequestPrivate object for CodeBuild \a action,
 * with public implementation \a q.
 */
BatchGetBuildsRequestPrivate::BatchGetBuildsRequestPrivate(
    const CodeBuildRequest::Action action, BatchGetBuildsRequest * const q)
    : CodeBuildRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetBuildsRequest
 * class' copy constructor.
 */
BatchGetBuildsRequestPrivate::BatchGetBuildsRequestPrivate(
    const BatchGetBuildsRequestPrivate &other, BatchGetBuildsRequest * const q)
    : CodeBuildRequestPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace QtAws
