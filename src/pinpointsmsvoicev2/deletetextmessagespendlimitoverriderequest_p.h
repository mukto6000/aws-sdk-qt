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

#ifndef QTAWS_DELETETEXTMESSAGESPENDLIMITOVERRIDEREQUEST_P_H
#define QTAWS_DELETETEXTMESSAGESPENDLIMITOVERRIDEREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "deletetextmessagespendlimitoverriderequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteTextMessageSpendLimitOverrideRequest;

class DeleteTextMessageSpendLimitOverrideRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DeleteTextMessageSpendLimitOverrideRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DeleteTextMessageSpendLimitOverrideRequest * const q);
    DeleteTextMessageSpendLimitOverrideRequestPrivate(const DeleteTextMessageSpendLimitOverrideRequestPrivate &other,
                                   DeleteTextMessageSpendLimitOverrideRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTextMessageSpendLimitOverrideRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
