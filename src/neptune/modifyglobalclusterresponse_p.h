// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYGLOBALCLUSTERRESPONSE_P_H
#define QTAWS_MODIFYGLOBALCLUSTERRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class ModifyGlobalClusterResponse;

class ModifyGlobalClusterResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit ModifyGlobalClusterResponsePrivate(ModifyGlobalClusterResponse * const q);

    void parseModifyGlobalClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyGlobalClusterResponse)
    Q_DISABLE_COPY(ModifyGlobalClusterResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
