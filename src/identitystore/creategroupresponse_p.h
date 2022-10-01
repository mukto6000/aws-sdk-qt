// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPRESPONSE_P_H
#define QTAWS_CREATEGROUPRESPONSE_P_H

#include "identitystoreresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class CreateGroupResponse;

class CreateGroupResponsePrivate : public IdentityStoreResponsePrivate {

public:

    explicit CreateGroupResponsePrivate(CreateGroupResponse * const q);

    void parseCreateGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGroupResponse)
    Q_DISABLE_COPY(CreateGroupResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
