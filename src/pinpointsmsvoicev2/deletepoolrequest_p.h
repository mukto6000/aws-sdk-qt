// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOOLREQUEST_P_H
#define QTAWS_DELETEPOOLREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "deletepoolrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeletePoolRequest;

class DeletePoolRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DeletePoolRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DeletePoolRequest * const q);
    DeletePoolRequestPrivate(const DeletePoolRequestPrivate &other,
                                   DeletePoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePoolRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
