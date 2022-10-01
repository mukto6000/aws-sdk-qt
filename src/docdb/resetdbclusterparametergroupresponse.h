// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDBCLUSTERPARAMETERGROUPRESPONSE_H
#define QTAWS_RESETDBCLUSTERPARAMETERGROUPRESPONSE_H

#include "docdbresponse.h"
#include "resetdbclusterparametergrouprequest.h"

namespace QtAws {
namespace DocDb {

class ResetDBClusterParameterGroupResponsePrivate;

class QTAWSDOCDB_EXPORT ResetDBClusterParameterGroupResponse : public DocDbResponse {
    Q_OBJECT

public:
    ResetDBClusterParameterGroupResponse(const ResetDBClusterParameterGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetDBClusterParameterGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetDBClusterParameterGroupResponse)
    Q_DISABLE_COPY(ResetDBClusterParameterGroupResponse)

};

} // namespace DocDb
} // namespace QtAws

#endif
