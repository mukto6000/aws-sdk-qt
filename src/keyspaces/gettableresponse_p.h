// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLERESPONSE_P_H
#define QTAWS_GETTABLERESPONSE_P_H

#include "keyspacesresponse_p.h"

namespace QtAws {
namespace Keyspaces {

class GetTableResponse;

class GetTableResponsePrivate : public KeyspacesResponsePrivate {

public:

    explicit GetTableResponsePrivate(GetTableResponse * const q);

    void parseGetTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTableResponse)
    Q_DISABLE_COPY(GetTableResponsePrivate)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
