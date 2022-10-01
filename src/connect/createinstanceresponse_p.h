// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCERESPONSE_P_H
#define QTAWS_CREATEINSTANCERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateInstanceResponse;

class CreateInstanceResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateInstanceResponsePrivate(CreateInstanceResponse * const q);

    void parseCreateInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInstanceResponse)
    Q_DISABLE_COPY(CreateInstanceResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
