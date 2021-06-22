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

#ifndef QTAWS_UPDATERESERVATIONREQUEST_P_H
#define QTAWS_UPDATERESERVATIONREQUEST_P_H

#include "medialiverequest_p.h"
#include "updatereservationrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateReservationRequest;

class UpdateReservationRequestPrivate : public MediaLiveRequestPrivate {

public:
    UpdateReservationRequestPrivate(const MediaLiveRequest::Action action,
                                   UpdateReservationRequest * const q);
    UpdateReservationRequestPrivate(const UpdateReservationRequestPrivate &other,
                                   UpdateReservationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateReservationRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
