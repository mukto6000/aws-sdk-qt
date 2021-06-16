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

#include "deletestoragelensconfigurationtaggingrequest.h"
#include "deletestoragelensconfigurationtaggingrequest_p.h"
#include "deletestoragelensconfigurationtaggingresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteStorageLensConfigurationTaggingRequest
 * \brief The DeleteStorageLensConfigurationTaggingRequest class provides an interface for S3Control DeleteStorageLensConfigurationTagging requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteStorageLensConfigurationTagging
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStorageLensConfigurationTaggingRequest::DeleteStorageLensConfigurationTaggingRequest(const DeleteStorageLensConfigurationTaggingRequest &other)
    : S3ControlRequest(new DeleteStorageLensConfigurationTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStorageLensConfigurationTaggingRequest object.
 */
DeleteStorageLensConfigurationTaggingRequest::DeleteStorageLensConfigurationTaggingRequest()
    : S3ControlRequest(new DeleteStorageLensConfigurationTaggingRequestPrivate(S3ControlRequest::DeleteStorageLensConfigurationTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStorageLensConfigurationTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStorageLensConfigurationTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStorageLensConfigurationTaggingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStorageLensConfigurationTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteStorageLensConfigurationTaggingRequestPrivate
 * \brief The DeleteStorageLensConfigurationTaggingRequestPrivate class provides private implementation for DeleteStorageLensConfigurationTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteStorageLensConfigurationTaggingRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteStorageLensConfigurationTaggingRequestPrivate::DeleteStorageLensConfigurationTaggingRequestPrivate(
    const S3ControlRequest::Action action, DeleteStorageLensConfigurationTaggingRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStorageLensConfigurationTaggingRequest
 * class' copy constructor.
 */
DeleteStorageLensConfigurationTaggingRequestPrivate::DeleteStorageLensConfigurationTaggingRequestPrivate(
    const DeleteStorageLensConfigurationTaggingRequestPrivate &other, DeleteStorageLensConfigurationTaggingRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
