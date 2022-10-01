// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERENDPOINTRESPONSE_P_H
#define QTAWS_DELETEDBCLUSTERENDPOINTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DeleteDBClusterEndpointResponse;

class DeleteDBClusterEndpointResponsePrivate : public RdsResponsePrivate {

public:

    explicit DeleteDBClusterEndpointResponsePrivate(DeleteDBClusterEndpointResponse * const q);

    void parseDeleteDBClusterEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBClusterEndpointResponse)
    Q_DISABLE_COPY(DeleteDBClusterEndpointResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
