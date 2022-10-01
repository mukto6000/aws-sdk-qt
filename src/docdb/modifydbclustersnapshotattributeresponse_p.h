// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTERESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class ModifyDBClusterSnapshotAttributeResponse;

class ModifyDBClusterSnapshotAttributeResponsePrivate : public DocDbResponsePrivate {

public:

    explicit ModifyDBClusterSnapshotAttributeResponsePrivate(ModifyDBClusterSnapshotAttributeResponse * const q);

    void parseModifyDBClusterSnapshotAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterSnapshotAttributeResponse)
    Q_DISABLE_COPY(ModifyDBClusterSnapshotAttributeResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
