// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconditionalforwarderrequest.h"
#include "createconditionalforwarderrequest_p.h"
#include "createconditionalforwarderresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::CreateConditionalForwarderRequest
 * \brief The CreateConditionalForwarderRequest class provides an interface for DirectoryService CreateConditionalForwarder requests.
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
 * \sa DirectoryServiceClient::createConditionalForwarder
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConditionalForwarderRequest::CreateConditionalForwarderRequest(const CreateConditionalForwarderRequest &other)
    : DirectoryServiceRequest(new CreateConditionalForwarderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConditionalForwarderRequest object.
 */
CreateConditionalForwarderRequest::CreateConditionalForwarderRequest()
    : DirectoryServiceRequest(new CreateConditionalForwarderRequestPrivate(DirectoryServiceRequest::CreateConditionalForwarderAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConditionalForwarderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConditionalForwarderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConditionalForwarderRequest::response(QNetworkReply * const reply) const
{
    return new CreateConditionalForwarderResponse(*this, reply);
}

/*!
 * \class QtAws::DirectoryService::CreateConditionalForwarderRequestPrivate
 * \brief The CreateConditionalForwarderRequestPrivate class provides private implementation for CreateConditionalForwarderRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a CreateConditionalForwarderRequestPrivate object for DirectoryService \a action,
 * with public implementation \a q.
 */
CreateConditionalForwarderRequestPrivate::CreateConditionalForwarderRequestPrivate(
    const DirectoryServiceRequest::Action action, CreateConditionalForwarderRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConditionalForwarderRequest
 * class' copy constructor.
 */
CreateConditionalForwarderRequestPrivate::CreateConditionalForwarderRequestPrivate(
    const CreateConditionalForwarderRequestPrivate &other, CreateConditionalForwarderRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
