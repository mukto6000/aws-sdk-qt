// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTERCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEROUTERCONFIGURATIONRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DescribeRouterConfigurationResponse;

class DescribeRouterConfigurationResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DescribeRouterConfigurationResponsePrivate(DescribeRouterConfigurationResponse * const q);

    void parseDescribeRouterConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRouterConfigurationResponse)
    Q_DISABLE_COPY(DescribeRouterConfigurationResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
