// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSECURITYGROUPRESPONSE_P_H
#define QTAWS_DELETEDBSECURITYGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DeleteDBSecurityGroupResponse;

class DeleteDBSecurityGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit DeleteDBSecurityGroupResponsePrivate(DeleteDBSecurityGroupResponse * const q);

    void parseDeleteDBSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBSecurityGroupResponse)
    Q_DISABLE_COPY(DeleteDBSecurityGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
