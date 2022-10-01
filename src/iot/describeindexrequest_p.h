// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINDEXREQUEST_P_H
#define QTAWS_DESCRIBEINDEXREQUEST_P_H

#include "iotrequest_p.h"
#include "describeindexrequest.h"

namespace QtAws {
namespace IoT {

class DescribeIndexRequest;

class DescribeIndexRequestPrivate : public IoTRequestPrivate {

public:
    DescribeIndexRequestPrivate(const IoTRequest::Action action,
                                   DescribeIndexRequest * const q);
    DescribeIndexRequestPrivate(const DescribeIndexRequestPrivate &other,
                                   DescribeIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIndexRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
