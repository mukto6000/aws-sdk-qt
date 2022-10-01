// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTORREQUEST_P_H
#define QTAWS_DESCRIBECONNECTORREQUEST_P_H

#include "transferrequest_p.h"
#include "describeconnectorrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeConnectorRequest;

class DescribeConnectorRequestPrivate : public TransferRequestPrivate {

public:
    DescribeConnectorRequestPrivate(const TransferRequest::Action action,
                                   DescribeConnectorRequest * const q);
    DescribeConnectorRequestPrivate(const DescribeConnectorRequestPrivate &other,
                                   DescribeConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConnectorRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
