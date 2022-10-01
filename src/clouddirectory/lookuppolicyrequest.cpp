// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lookuppolicyrequest.h"
#include "lookuppolicyrequest_p.h"
#include "lookuppolicyresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::LookupPolicyRequest
 * \brief The LookupPolicyRequest class provides an interface for CloudDirectory LookupPolicy requests.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about Cloud Directory
 *  features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon Cloud
 *  Directory Developer
 *
 * \sa CloudDirectoryClient::lookupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
LookupPolicyRequest::LookupPolicyRequest(const LookupPolicyRequest &other)
    : CloudDirectoryRequest(new LookupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a LookupPolicyRequest object.
 */
LookupPolicyRequest::LookupPolicyRequest()
    : CloudDirectoryRequest(new LookupPolicyRequestPrivate(CloudDirectoryRequest::LookupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool LookupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a LookupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * LookupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new LookupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::LookupPolicyRequestPrivate
 * \brief The LookupPolicyRequestPrivate class provides private implementation for LookupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a LookupPolicyRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
LookupPolicyRequestPrivate::LookupPolicyRequestPrivate(
    const CloudDirectoryRequest::Action action, LookupPolicyRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the LookupPolicyRequest
 * class' copy constructor.
 */
LookupPolicyRequestPrivate::LookupPolicyRequestPrivate(
    const LookupPolicyRequestPrivate &other, LookupPolicyRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
