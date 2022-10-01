// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevelopmentschemaarnsrequest.h"
#include "listdevelopmentschemaarnsrequest_p.h"
#include "listdevelopmentschemaarnsresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListDevelopmentSchemaArnsRequest
 * \brief The ListDevelopmentSchemaArnsRequest class provides an interface for CloudDirectory ListDevelopmentSchemaArns requests.
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
 * \sa CloudDirectoryClient::listDevelopmentSchemaArns
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevelopmentSchemaArnsRequest::ListDevelopmentSchemaArnsRequest(const ListDevelopmentSchemaArnsRequest &other)
    : CloudDirectoryRequest(new ListDevelopmentSchemaArnsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevelopmentSchemaArnsRequest object.
 */
ListDevelopmentSchemaArnsRequest::ListDevelopmentSchemaArnsRequest()
    : CloudDirectoryRequest(new ListDevelopmentSchemaArnsRequestPrivate(CloudDirectoryRequest::ListDevelopmentSchemaArnsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevelopmentSchemaArnsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevelopmentSchemaArnsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevelopmentSchemaArnsRequest::response(QNetworkReply * const reply) const
{
    return new ListDevelopmentSchemaArnsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ListDevelopmentSchemaArnsRequestPrivate
 * \brief The ListDevelopmentSchemaArnsRequestPrivate class provides private implementation for ListDevelopmentSchemaArnsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ListDevelopmentSchemaArnsRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ListDevelopmentSchemaArnsRequestPrivate::ListDevelopmentSchemaArnsRequestPrivate(
    const CloudDirectoryRequest::Action action, ListDevelopmentSchemaArnsRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevelopmentSchemaArnsRequest
 * class' copy constructor.
 */
ListDevelopmentSchemaArnsRequestPrivate::ListDevelopmentSchemaArnsRequestPrivate(
    const ListDevelopmentSchemaArnsRequestPrivate &other, ListDevelopmentSchemaArnsRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
