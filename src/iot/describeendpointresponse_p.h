// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTRESPONSE_P_H
#define QTAWS_DESCRIBEENDPOINTRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeEndpointResponse;

class DescribeEndpointResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeEndpointResponsePrivate(DescribeEndpointResponse * const q);

    void parseDescribeEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointResponse)
    Q_DISABLE_COPY(DescribeEndpointResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
