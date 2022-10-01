// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateradiusrequest.h"
#include "updateradiusrequest_p.h"
#include "updateradiusresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/*!
 * \class QtAws::DirectoryService::UpdateRadiusRequest
 * \brief The UpdateRadiusRequest class provides an interface for DirectoryService UpdateRadius requests.
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
 * \sa DirectoryServiceClient::updateRadius
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRadiusRequest::UpdateRadiusRequest(const UpdateRadiusRequest &other)
    : DirectoryServiceRequest(new UpdateRadiusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRadiusRequest object.
 */
UpdateRadiusRequest::UpdateRadiusRequest()
    : DirectoryServiceRequest(new UpdateRadiusRequestPrivate(DirectoryServiceRequest::UpdateRadiusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRadiusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRadiusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRadiusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRadiusResponse(*this, reply);
}

/*!
 * \class QtAws::DirectoryService::UpdateRadiusRequestPrivate
 * \brief The UpdateRadiusRequestPrivate class provides private implementation for UpdateRadiusRequest.
 * \internal
 *
 * \inmodule QtAwsDirectoryService
 */

/*!
 * Constructs a UpdateRadiusRequestPrivate object for DirectoryService \a action,
 * with public implementation \a q.
 */
UpdateRadiusRequestPrivate::UpdateRadiusRequestPrivate(
    const DirectoryServiceRequest::Action action, UpdateRadiusRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRadiusRequest
 * class' copy constructor.
 */
UpdateRadiusRequestPrivate::UpdateRadiusRequestPrivate(
    const UpdateRadiusRequestPrivate &other, UpdateRadiusRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
