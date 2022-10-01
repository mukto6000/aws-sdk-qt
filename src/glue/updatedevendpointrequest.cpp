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

#include "updatedevendpointrequest.h"
#include "updatedevendpointrequest_p.h"
#include "updatedevendpointresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateDevEndpointRequest
 * \brief The UpdateDevEndpointRequest class provides an interface for Glue UpdateDevEndpoint requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateDevEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDevEndpointRequest::UpdateDevEndpointRequest(const UpdateDevEndpointRequest &other)
    : GlueRequest(new UpdateDevEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDevEndpointRequest object.
 */
UpdateDevEndpointRequest::UpdateDevEndpointRequest()
    : GlueRequest(new UpdateDevEndpointRequestPrivate(GlueRequest::UpdateDevEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDevEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDevEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDevEndpointRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDevEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateDevEndpointRequestPrivate
 * \brief The UpdateDevEndpointRequestPrivate class provides private implementation for UpdateDevEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateDevEndpointRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateDevEndpointRequestPrivate::UpdateDevEndpointRequestPrivate(
    const GlueRequest::Action action, UpdateDevEndpointRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDevEndpointRequest
 * class' copy constructor.
 */
UpdateDevEndpointRequestPrivate::UpdateDevEndpointRequestPrivate(
    const UpdateDevEndpointRequestPrivate &other, UpdateDevEndpointRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
