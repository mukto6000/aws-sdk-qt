// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBINSTANCERESPONSE_P_H
#define QTAWS_MODIFYDBINSTANCERESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyDBInstanceResponse;

class ModifyDBInstanceResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyDBInstanceResponsePrivate(ModifyDBInstanceResponse * const q);

    void parseModifyDBInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBInstanceResponse)
    Q_DISABLE_COPY(ModifyDBInstanceResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
