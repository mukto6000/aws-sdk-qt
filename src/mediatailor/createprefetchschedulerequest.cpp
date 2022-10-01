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

#include "createprefetchschedulerequest.h"
#include "createprefetchschedulerequest_p.h"
#include "createprefetchscheduleresponse.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::CreatePrefetchScheduleRequest
 * \brief The CreatePrefetchScheduleRequest class provides an interface for MediaTailor CreatePrefetchSchedule requests.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::createPrefetchSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePrefetchScheduleRequest::CreatePrefetchScheduleRequest(const CreatePrefetchScheduleRequest &other)
    : MediaTailorRequest(new CreatePrefetchScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePrefetchScheduleRequest object.
 */
CreatePrefetchScheduleRequest::CreatePrefetchScheduleRequest()
    : MediaTailorRequest(new CreatePrefetchScheduleRequestPrivate(MediaTailorRequest::CreatePrefetchScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePrefetchScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePrefetchScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePrefetchScheduleRequest::response(QNetworkReply * const reply) const
{
    return new CreatePrefetchScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::MediaTailor::CreatePrefetchScheduleRequestPrivate
 * \brief The CreatePrefetchScheduleRequestPrivate class provides private implementation for CreatePrefetchScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a CreatePrefetchScheduleRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
CreatePrefetchScheduleRequestPrivate::CreatePrefetchScheduleRequestPrivate(
    const MediaTailorRequest::Action action, CreatePrefetchScheduleRequest * const q)
    : MediaTailorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePrefetchScheduleRequest
 * class' copy constructor.
 */
CreatePrefetchScheduleRequestPrivate::CreatePrefetchScheduleRequestPrivate(
    const CreatePrefetchScheduleRequestPrivate &other, CreatePrefetchScheduleRequest * const q)
    : MediaTailorRequestPrivate(other, q)
{

}

} // namespace MediaTailor
} // namespace QtAws
