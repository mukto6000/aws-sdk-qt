// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventtopicsrequest.h"
#include "describeeventtopicsrequest_p.h"
#include "describeeventtopicsresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::DescribeEventTopicsRequest
 * \brief The DescribeEventTopicsRequest class provides an interface for DirectoryService DescribeEventTopics requests.
 *
 * \inmodule QtAwsDirectoryService
 *
 *  <fullname>Directory Service</fullname>
 * 
 *  Directory Service is a web service that makes it easy for you to setup and run directories in the Amazon Web Services
 *  cloud, or connect your Amazon Web Services resources with an existing self-managed Microsoft Active Directory. This
 *  guide provides detailed information about Directory Service operations, data types, parameters, and errors. For
 *  information about Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">Directory
 *  Service</a> and the <a href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">Directory
 *  Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  Amazon Web Services provides SDKs that consist of libraries and sample code for various programming languages and
 *  platforms (Java, Ruby, .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to
 *  Directory Service and other Amazon Web Services services. For more information about the Amazon Web Services SDKs,
 *  including how to download and install them, see <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::describeEventTopics
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventTopicsRequest::DescribeEventTopicsRequest(const DescribeEventTopicsRequest &other)
    : DirectoryServiceRequest(new DescribeEventTopicsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventTopicsRequest object.
 */
DescribeEventTopicsRequest::DescribeEventTopicsRequest()
    : DirectoryServiceRequest(new DescribeEventTopicsRequestPrivate(DirectoryServiceRequest::DescribeEventTopicsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventTopicsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventTopicsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventTopicsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventTopicsResponse(*this, reply);
}

/*!
 * \class QtAws::DirectoryService::DescribeEventTopicsRequestPrivate
 * \brief The DescribeEventTopicsRequestPrivate class provides private implementation for DescribeEventTopicsRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a DescribeEventTopicsRequestPrivate object for DirectoryService \a action,
 * with public implementation \a q.
 */
DescribeEventTopicsRequestPrivate::DescribeEventTopicsRequestPrivate(
    const DirectoryServiceRequest::Action action, DescribeEventTopicsRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventTopicsRequest
 * class' copy constructor.
 */
DescribeEventTopicsRequestPrivate::DescribeEventTopicsRequestPrivate(
    const DescribeEventTopicsRequestPrivate &other, DescribeEventTopicsRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
