// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcommentrequest.h"
#include "createcommentrequest_p.h"
#include "createcommentresponse.h"
#include "workdocsrequest_p.h"

namespace QtAws {
namespace WorkDocs {

/*!
 * \class QtAws::WorkDocs::CreateCommentRequest
 * \brief The CreateCommentRequest class provides an interface for WorkDocs CreateComment requests.
 *
 * \inmodule QtAwsWorkDocs
 *
 *  The WorkDocs API is designed for the following use
 * 
 *  cases> <ul> <li>
 * 
 *  File Migration: File migration applications are supported for users who want to migrate their files from an on-premises
 *  or off-premises file system or service. Users can insert files into a user directory structure, as well as allow for
 *  basic metadata changes, such as modifications to the permissions of
 * 
 *  files> </li> <li>
 * 
 *  Security: Support security applications are supported for users who have additional security needs, such as antivirus or
 *  data loss prevention. The API actions, along with AWS CloudTrail, allow these applications to detect when changes occur
 *  in Amazon WorkDocs. Then, the application can take the necessary actions and replace the target file. If the target file
 *  violates the policy, the application can also choose to email the
 * 
 *  user> </li> <li>
 * 
 *  eDiscovery/Analytics: General administrative applications are supported, such as eDiscovery and analytics. These
 *  applications can choose to mimic or record the actions in an Amazon WorkDocs site, along with AWS CloudTrail, to
 *  replicate data for eDiscovery, backup, or analytical
 * 
 *  applications> </li> </ul>
 * 
 *  All Amazon WorkDocs API actions are Amazon authenticated and certificate-signed. They not only require the use of the
 *  AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 *  policies. By creating a role and allowing an IAM user to access the Amazon WorkDocs site, the IAM user gains full
 *  administrative visibility into the entire Amazon WorkDocs site (or as set in the IAM policy). This includes, but is not
 *  limited to, the ability to modify file permissions and upload any file to any user. This allows developers to perform
 *  the three use cases above, as well as give users the ability to grant access on a selective basis using the IAM
 *
 * \sa WorkDocsClient::createComment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCommentRequest::CreateCommentRequest(const CreateCommentRequest &other)
    : WorkDocsRequest(new CreateCommentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCommentRequest object.
 */
CreateCommentRequest::CreateCommentRequest()
    : WorkDocsRequest(new CreateCommentRequestPrivate(WorkDocsRequest::CreateCommentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCommentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCommentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCommentRequest::response(QNetworkReply * const reply) const
{
    return new CreateCommentResponse(*this, reply);
}

/*!
 * \class QtAws::WorkDocs::CreateCommentRequestPrivate
 * \brief The CreateCommentRequestPrivate class provides private implementation for CreateCommentRequest.
 * \internal
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a CreateCommentRequestPrivate object for WorkDocs \a action,
 * with public implementation \a q.
 */
CreateCommentRequestPrivate::CreateCommentRequestPrivate(
    const WorkDocsRequest::Action action, CreateCommentRequest * const q)
    : WorkDocsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCommentRequest
 * class' copy constructor.
 */
CreateCommentRequestPrivate::CreateCommentRequestPrivate(
    const CreateCommentRequestPrivate &other, CreateCommentRequest * const q)
    : WorkDocsRequestPrivate(other, q)
{

}

} // namespace WorkDocs
} // namespace QtAws
