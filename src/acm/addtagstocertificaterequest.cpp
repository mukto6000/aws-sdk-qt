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

#include "addtagstocertificaterequest.h"
#include "addtagstocertificaterequest_p.h"
#include "addtagstocertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::AddTagsToCertificateRequest
 * \brief The AddTagsToCertificateRequest class provides an interface for ACM AddTagsToCertificate requests.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  Welcome to the AWS Certificate Manager (ACM) API
 * 
 *  documentation>
 * 
 *  You can use ACM to manage SSL/TLS certificates for your AWS-based websites and applications. For general information
 *  about using ACM, see the <a href="https://docs.aws.amazon.com/acm/latest/userguide/"> <i>AWS Certificate Manager User
 *  Guide</i>
 *
 * \sa AcmClient::addTagsToCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
AddTagsToCertificateRequest::AddTagsToCertificateRequest(const AddTagsToCertificateRequest &other)
    : AcmRequest(new AddTagsToCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddTagsToCertificateRequest object.
 */
AddTagsToCertificateRequest::AddTagsToCertificateRequest()
    : AcmRequest(new AddTagsToCertificateRequestPrivate(AcmRequest::AddTagsToCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool AddTagsToCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddTagsToCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsToCertificateRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::ACM::AddTagsToCertificateRequestPrivate
 * \brief The AddTagsToCertificateRequestPrivate class provides private implementation for AddTagsToCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a AddTagsToCertificateRequestPrivate object for Acm \a action,
 * with public implementation \a q.
 */
AddTagsToCertificateRequestPrivate::AddTagsToCertificateRequestPrivate(
    const AcmRequest::Action action, AddTagsToCertificateRequest * const q)
    : AcmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToCertificateRequest
 * class' copy constructor.
 */
AddTagsToCertificateRequestPrivate::AddTagsToCertificateRequestPrivate(
    const AddTagsToCertificateRequestPrivate &other, AddTagsToCertificateRequest * const q)
    : AcmRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
