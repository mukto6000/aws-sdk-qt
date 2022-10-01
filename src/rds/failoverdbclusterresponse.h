// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERDBCLUSTERRESPONSE_H
#define QTAWS_FAILOVERDBCLUSTERRESPONSE_H

#include "rdsresponse.h"
#include "failoverdbclusterrequest.h"

namespace QtAws {
namespace Rds {

class FailoverDBClusterResponsePrivate;

class QTAWSRDS_EXPORT FailoverDBClusterResponse : public RdsResponse {
    Q_OBJECT

public:
    FailoverDBClusterResponse(const FailoverDBClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const FailoverDBClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FailoverDBClusterResponse)
    Q_DISABLE_COPY(FailoverDBClusterResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
