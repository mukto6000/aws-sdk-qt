// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetypedlinkfacetrequest.h"
#include "updatetypedlinkfacetrequest_p.h"
#include "updatetypedlinkfacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::UpdateTypedLinkFacetRequest
 * \brief The UpdateTypedLinkFacetRequest class provides an interface for CloudDirectory UpdateTypedLinkFacet requests.
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
 * \sa CloudDirectoryClient::updateTypedLinkFacet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTypedLinkFacetRequest::UpdateTypedLinkFacetRequest(const UpdateTypedLinkFacetRequest &other)
    : CloudDirectoryRequest(new UpdateTypedLinkFacetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTypedLinkFacetRequest object.
 */
UpdateTypedLinkFacetRequest::UpdateTypedLinkFacetRequest()
    : CloudDirectoryRequest(new UpdateTypedLinkFacetRequestPrivate(CloudDirectoryRequest::UpdateTypedLinkFacetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTypedLinkFacetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTypedLinkFacetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTypedLinkFacetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTypedLinkFacetResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::UpdateTypedLinkFacetRequestPrivate
 * \brief The UpdateTypedLinkFacetRequestPrivate class provides private implementation for UpdateTypedLinkFacetRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a UpdateTypedLinkFacetRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
UpdateTypedLinkFacetRequestPrivate::UpdateTypedLinkFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, UpdateTypedLinkFacetRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTypedLinkFacetRequest
 * class' copy constructor.
 */
UpdateTypedLinkFacetRequestPrivate::UpdateTypedLinkFacetRequestPrivate(
    const UpdateTypedLinkFacetRequestPrivate &other, UpdateTypedLinkFacetRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
