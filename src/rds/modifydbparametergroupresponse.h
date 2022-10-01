// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPARAMETERGROUPRESPONSE_H
#define QTAWS_MODIFYDBPARAMETERGROUPRESPONSE_H

#include "rdsresponse.h"
#include "modifydbparametergrouprequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBParameterGroupResponsePrivate;

class QTAWSRDS_EXPORT ModifyDBParameterGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyDBParameterGroupResponse(const ModifyDBParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBParameterGroupResponse)
    Q_DISABLE_COPY(ModifyDBParameterGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
