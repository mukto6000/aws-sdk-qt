// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMREQUEST_P_H
#define QTAWS_DELETEROOMREQUEST_P_H

#include "chimerequest_p.h"
#include "deleteroomrequest.h"

namespace QtAws {
namespace Chime {

class DeleteRoomRequest;

class DeleteRoomRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteRoomRequestPrivate(const ChimeRequest::Action action,
                                   DeleteRoomRequest * const q);
    DeleteRoomRequestPrivate(const DeleteRoomRequestPrivate &other,
                                   DeleteRoomRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRoomRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
