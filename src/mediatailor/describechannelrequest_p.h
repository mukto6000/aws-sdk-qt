// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELREQUEST_P_H
#define QTAWS_DESCRIBECHANNELREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "describechannelrequest.h"

namespace QtAws {
namespace MediaTailor {

class DescribeChannelRequest;

class DescribeChannelRequestPrivate : public MediaTailorRequestPrivate {

public:
    DescribeChannelRequestPrivate(const MediaTailorRequest::Action action,
                                   DescribeChannelRequest * const q);
    DescribeChannelRequestPrivate(const DescribeChannelRequestPrivate &other,
                                   DescribeChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChannelRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
