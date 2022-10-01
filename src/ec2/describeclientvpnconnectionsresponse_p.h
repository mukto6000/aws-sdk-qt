// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNCONNECTIONSRESPONSE_P_H
#define QTAWS_DESCRIBECLIENTVPNCONNECTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnConnectionsResponse;

class DescribeClientVpnConnectionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeClientVpnConnectionsResponsePrivate(DescribeClientVpnConnectionsResponse * const q);

    void parseDescribeClientVpnConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClientVpnConnectionsResponse)
    Q_DISABLE_COPY(DescribeClientVpnConnectionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
