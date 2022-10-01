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

#include "updatedevicemetadatarequest.h"
#include "updatedevicemetadatarequest_p.h"
#include "updatedevicemetadataresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::UpdateDeviceMetadataRequest
 * \brief The UpdateDeviceMetadataRequest class provides an interface for Panorama UpdateDeviceMetadata requests.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::updateDeviceMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDeviceMetadataRequest::UpdateDeviceMetadataRequest(const UpdateDeviceMetadataRequest &other)
    : PanoramaRequest(new UpdateDeviceMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDeviceMetadataRequest object.
 */
UpdateDeviceMetadataRequest::UpdateDeviceMetadataRequest()
    : PanoramaRequest(new UpdateDeviceMetadataRequestPrivate(PanoramaRequest::UpdateDeviceMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDeviceMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDeviceMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDeviceMetadataRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDeviceMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::UpdateDeviceMetadataRequestPrivate
 * \brief The UpdateDeviceMetadataRequestPrivate class provides private implementation for UpdateDeviceMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a UpdateDeviceMetadataRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
UpdateDeviceMetadataRequestPrivate::UpdateDeviceMetadataRequestPrivate(
    const PanoramaRequest::Action action, UpdateDeviceMetadataRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDeviceMetadataRequest
 * class' copy constructor.
 */
UpdateDeviceMetadataRequestPrivate::UpdateDeviceMetadataRequestPrivate(
    const UpdateDeviceMetadataRequestPrivate &other, UpdateDeviceMetadataRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
