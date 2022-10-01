// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTCATEGORIESREQUEST_P_H
#define QTAWS_DESCRIBEEVENTCATEGORIESREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeeventcategoriesrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeEventCategoriesRequest;

class DescribeEventCategoriesRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeEventCategoriesRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeEventCategoriesRequest * const q);
    DescribeEventCategoriesRequestPrivate(const DescribeEventCategoriesRequestPrivate &other,
                                   DescribeEventCategoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventCategoriesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
