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

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONSREQUEST_P_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describemaintenancewindowexecutionsrequest.h"

namespace QtAws {
namespace SSM {

class DescribeMaintenanceWindowExecutionsRequest;

class DescribeMaintenanceWindowExecutionsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeMaintenanceWindowExecutionsRequestPrivate(const SsmRequest::Action action,
                                   DescribeMaintenanceWindowExecutionsRequest * const q);
    DescribeMaintenanceWindowExecutionsRequestPrivate(const DescribeMaintenanceWindowExecutionsRequestPrivate &other,
                                   DescribeMaintenanceWindowExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeMaintenanceWindowExecutionsRequest)

};

} // namespace SSM
} // namespace QtAws

#endif
