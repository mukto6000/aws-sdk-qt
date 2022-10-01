// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERRESPONSE_P_H
#define QTAWS_DELETEUSERRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DeleteUserResponse;

class DeleteUserResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DeleteUserResponsePrivate(DeleteUserResponse * const q);

    void parseDeleteUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserResponse)
    Q_DISABLE_COPY(DeleteUserResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
