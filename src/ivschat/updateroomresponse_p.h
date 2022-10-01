// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROOMRESPONSE_P_H
#define QTAWS_UPDATEROOMRESPONSE_P_H

#include "ivschatresponse_p.h"

namespace QtAws {
namespace IvsChat {

class UpdateRoomResponse;

class UpdateRoomResponsePrivate : public IvsChatResponsePrivate {

public:

    explicit UpdateRoomResponsePrivate(UpdateRoomResponse * const q);

    void parseUpdateRoomResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoomResponse)
    Q_DISABLE_COPY(UpdateRoomResponsePrivate)

};

} // namespace IvsChat
} // namespace QtAws

#endif
