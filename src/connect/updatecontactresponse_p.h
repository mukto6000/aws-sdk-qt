// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTRESPONSE_P_H
#define QTAWS_UPDATECONTACTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateContactResponse;

class UpdateContactResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateContactResponsePrivate(UpdateContactResponse * const q);

    void parseUpdateContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContactResponse)
    Q_DISABLE_COPY(UpdateContactResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
