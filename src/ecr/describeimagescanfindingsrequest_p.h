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

#ifndef QTAWS_DESCRIBEIMAGESCANFINDINGSREQUEST_P_H
#define QTAWS_DESCRIBEIMAGESCANFINDINGSREQUEST_P_H

#include "ecrrequest_p.h"
#include "describeimagescanfindingsrequest.h"

namespace QtAws {
namespace ECR {

class DescribeImageScanFindingsRequest;

class QTAWS_EXPORT DescribeImageScanFindingsRequestPrivate : public EcrRequestPrivate {

public:
    DescribeImageScanFindingsRequestPrivate(const EcrRequest::Action action,
                                   DescribeImageScanFindingsRequest * const q);
    DescribeImageScanFindingsRequestPrivate(const DescribeImageScanFindingsRequestPrivate &other,
                                   DescribeImageScanFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImageScanFindingsRequest)

};

} // namespace ECR
} // namespace QtAws

#endif
