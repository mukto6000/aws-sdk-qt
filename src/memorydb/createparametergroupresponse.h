// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARAMETERGROUPRESPONSE_H
#define QTAWS_CREATEPARAMETERGROUPRESPONSE_H

#include "memorydbresponse.h"
#include "createparametergrouprequest.h"

namespace QtAws {
namespace MemoryDb {

class CreateParameterGroupResponsePrivate;

class QTAWSMEMORYDB_EXPORT CreateParameterGroupResponse : public MemoryDbResponse {
    Q_OBJECT

public:
    CreateParameterGroupResponse(const CreateParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateParameterGroupResponse)
    Q_DISABLE_COPY(CreateParameterGroupResponse)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
