// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGSREQUEST_P_H
#define QTAWS_DESCRIBETAGSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describetagsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeTagsRequest;

class DescribeTagsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeTagsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeTagsRequest * const q);
    DescribeTagsRequestPrivate(const DescribeTagsRequestPrivate &other,
                                   DescribeTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTagsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
