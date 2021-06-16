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

#include "updatenumberofdomaincontrollersrequest.h"
#include "updatenumberofdomaincontrollersrequest_p.h"
#include "updatenumberofdomaincontrollersresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::UpdateNumberOfDomainControllersRequest
 * \brief The UpdateNumberOfDomainControllersRequest class provides an interface for DirectoryService UpdateNumberOfDomainControllers requests.
 *
 * \inmodule QtAwsDirectoryService
 *
 *  <fullname>AWS Directory Service</fullname>
 * 
 *  AWS Directory Service is a web service that makes it easy for you to setup and run directories in the AWS cloud, or
 *  connect your AWS resources with an existing on-premises Microsoft Active Directory. This guide provides detailed
 *  information about AWS Directory Service operations, data types, parameters, and errors. For information about AWS
 *  Directory Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 * 
 *  Guide</a>> <note>
 * 
 *  AWS provides SDKs that consist of libraries and sample code for various programming languages and platforms (Java, Ruby,
 *  .Net, iOS, Android, etc.). The SDKs provide a convenient way to create programmatic access to AWS Directory Service and
 *  other AWS services. For more information about the AWS SDKs, including how to download and install them, see <a
 *  href="http://aws.amazon.com/tools/">Tools for Amazon Web
 *
 * \sa DirectoryServiceClient::updateNumberOfDomainControllers
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNumberOfDomainControllersRequest::UpdateNumberOfDomainControllersRequest(const UpdateNumberOfDomainControllersRequest &other)
    : DirectoryServiceRequest(new UpdateNumberOfDomainControllersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNumberOfDomainControllersRequest object.
 */
UpdateNumberOfDomainControllersRequest::UpdateNumberOfDomainControllersRequest()
    : DirectoryServiceRequest(new UpdateNumberOfDomainControllersRequestPrivate(DirectoryServiceRequest::UpdateNumberOfDomainControllersAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNumberOfDomainControllersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNumberOfDomainControllersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNumberOfDomainControllersRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNumberOfDomainControllersResponse(*this, reply);
}

/*!
 * \class QtAws::DirectoryService::UpdateNumberOfDomainControllersRequestPrivate
 * \brief The UpdateNumberOfDomainControllersRequestPrivate class provides private implementation for UpdateNumberOfDomainControllersRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a UpdateNumberOfDomainControllersRequestPrivate object for DirectoryService \a action,
 * with public implementation \a q.
 */
UpdateNumberOfDomainControllersRequestPrivate::UpdateNumberOfDomainControllersRequestPrivate(
    const DirectoryServiceRequest::Action action, UpdateNumberOfDomainControllersRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNumberOfDomainControllersRequest
 * class' copy constructor.
 */
UpdateNumberOfDomainControllersRequestPrivate::UpdateNumberOfDomainControllersRequestPrivate(
    const UpdateNumberOfDomainControllersRequestPrivate &other, UpdateNumberOfDomainControllersRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
