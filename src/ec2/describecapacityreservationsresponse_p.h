// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAPACITYRESERVATIONSRESPONSE_P_H
#define QTAWS_DESCRIBECAPACITYRESERVATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeCapacityReservationsResponse;

class DescribeCapacityReservationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeCapacityReservationsResponsePrivate(DescribeCapacityReservationsResponse * const q);

    void parseDescribeCapacityReservationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCapacityReservationsResponse)
    Q_DISABLE_COPY(DescribeCapacityReservationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
