// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARAMETERGROUPRESPONSE_P_H
#define QTAWS_CREATEPARAMETERGROUPRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class CreateParameterGroupResponse;

class CreateParameterGroupResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit CreateParameterGroupResponsePrivate(CreateParameterGroupResponse * const q);

    void parseCreateParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateParameterGroupResponse)
    Q_DISABLE_COPY(CreateParameterGroupResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
