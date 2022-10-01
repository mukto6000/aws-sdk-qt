// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETLOCATIONATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBEFLEETLOCATIONATTRIBUTESREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describefleetlocationattributesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetLocationAttributesRequest;

class DescribeFleetLocationAttributesRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeFleetLocationAttributesRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeFleetLocationAttributesRequest * const q);
    DescribeFleetLocationAttributesRequestPrivate(const DescribeFleetLocationAttributesRequestPrivate &other,
                                   DescribeFleetLocationAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetLocationAttributesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
