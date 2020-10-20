/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_DESCRIBELOGGINGSTATUSREQUEST_P_H
#define QTAWS_DESCRIBELOGGINGSTATUSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeloggingstatusrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeLoggingStatusRequest;

class QTAWS_EXPORT DescribeLoggingStatusRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeLoggingStatusRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeLoggingStatusRequest * const q);
    DescribeLoggingStatusRequestPrivate(const DescribeLoggingStatusRequestPrivate &other,
                                   DescribeLoggingStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoggingStatusRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
