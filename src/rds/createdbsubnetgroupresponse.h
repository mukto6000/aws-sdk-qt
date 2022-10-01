// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSUBNETGROUPRESPONSE_H
#define QTAWS_CREATEDBSUBNETGROUPRESPONSE_H

#include "rdsresponse.h"
#include "createdbsubnetgrouprequest.h"

namespace QtAws {
namespace Rds {

class CreateDBSubnetGroupResponsePrivate;

class QTAWSRDS_EXPORT CreateDBSubnetGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateDBSubnetGroupResponse(const CreateDBSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBSubnetGroupResponse)
    Q_DISABLE_COPY(CreateDBSubnetGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
