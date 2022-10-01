// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPRESPONSE_P_H
#define QTAWS_CREATEGROUPRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateGroupResponse;

class CreateGroupResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateGroupResponsePrivate(CreateGroupResponse * const q);

    void parseCreateGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGroupResponse)
    Q_DISABLE_COPY(CreateGroupResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
