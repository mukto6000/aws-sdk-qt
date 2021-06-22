/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEDELIVERYSTREAMREQUEST_P_H
#define QTAWS_DESCRIBEDELIVERYSTREAMREQUEST_P_H

#include "firehoserequest_p.h"
#include "describedeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class DescribeDeliveryStreamRequest;

class DescribeDeliveryStreamRequestPrivate : public FirehoseRequestPrivate {

public:
    DescribeDeliveryStreamRequestPrivate(const FirehoseRequest::Action action,
                                   DescribeDeliveryStreamRequest * const q);
    DescribeDeliveryStreamRequestPrivate(const DescribeDeliveryStreamRequestPrivate &other,
                                   DescribeDeliveryStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
