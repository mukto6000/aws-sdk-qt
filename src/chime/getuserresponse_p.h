// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERRESPONSE_P_H
#define QTAWS_GETUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetUserResponse;

class GetUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetUserResponsePrivate(GetUserResponse * const q);

    void parseGetUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUserResponse)
    Q_DISABLE_COPY(GetUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
