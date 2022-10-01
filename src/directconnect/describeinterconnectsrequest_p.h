// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTERCONNECTSREQUEST_P_H
#define QTAWS_DESCRIBEINTERCONNECTSREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describeinterconnectsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeInterconnectsRequest;

class DescribeInterconnectsRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeInterconnectsRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeInterconnectsRequest * const q);
    DescribeInterconnectsRequestPrivate(const DescribeInterconnectsRequestPrivate &other,
                                   DescribeInterconnectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInterconnectsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
