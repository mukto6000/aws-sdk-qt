// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEALIASRESPONSE_P_H
#define QTAWS_DELETEROLEALIASRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteRoleAliasResponse;

class DeleteRoleAliasResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteRoleAliasResponsePrivate(DeleteRoleAliasResponse * const q);

    void parseDeleteRoleAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRoleAliasResponse)
    Q_DISABLE_COPY(DeleteRoleAliasResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
