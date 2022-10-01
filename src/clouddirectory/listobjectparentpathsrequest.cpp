// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listobjectparentpathsrequest.h"
#include "listobjectparentpathsrequest_p.h"
#include "listobjectparentpathsresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListObjectParentPathsRequest
 * \brief The ListObjectParentPathsRequest class provides an interface for CloudDirectory ListObjectParentPaths requests.
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
 * \sa CloudDirectoryClient::listObjectParentPaths
 */

/*!
 * Constructs a copy of \a other.
 */
ListObjectParentPathsRequest::ListObjectParentPathsRequest(const ListObjectParentPathsRequest &other)
    : CloudDirectoryRequest(new ListObjectParentPathsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListObjectParentPathsRequest object.
 */
ListObjectParentPathsRequest::ListObjectParentPathsRequest()
    : CloudDirectoryRequest(new ListObjectParentPathsRequestPrivate(CloudDirectoryRequest::ListObjectParentPathsAction, this))
{

}

/*!
 * \reimp
 */
bool ListObjectParentPathsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListObjectParentPathsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectParentPathsRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectParentPathsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListObjectParentPathsRequestPrivate
 * \brief The ListObjectParentPathsRequestPrivate class provides private implementation for ListObjectParentPathsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListObjectParentPathsRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListObjectParentPathsRequestPrivate::ListObjectParentPathsRequestPrivate(
    const CloudDirectoryRequest::Action action, ListObjectParentPathsRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListObjectParentPathsRequest
 * class' copy constructor.
 */
ListObjectParentPathsRequestPrivate::ListObjectParentPathsRequestPrivate(
    const ListObjectParentPathsRequestPrivate &other, ListObjectParentPathsRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
