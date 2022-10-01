// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERREQUEST_P_H
#define QTAWS_DESCRIBEUSERREQUEST_P_H

#include "mqrequest_p.h"
#include "describeuserrequest.h"

namespace QtAws {
namespace Mq {

class DescribeUserRequest;

class DescribeUserRequestPrivate : public MqRequestPrivate {

public:
    DescribeUserRequestPrivate(const MqRequest::Action action,
                                   DescribeUserRequest * const q);
    DescribeUserRequestPrivate(const DescribeUserRequestPrivate &other,
                                   DescribeUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
