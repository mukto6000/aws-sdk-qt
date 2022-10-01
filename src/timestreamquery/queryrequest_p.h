// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYREQUEST_P_H
#define QTAWS_QUERYREQUEST_P_H

#include "timestreamqueryrequest_p.h"
#include "queryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class QueryRequest;

class QueryRequestPrivate : public TimestreamQueryRequestPrivate {

public:
    QueryRequestPrivate(const TimestreamQueryRequest::Action action,
                                   QueryRequest * const q);
    QueryRequestPrivate(const QueryRequestPrivate &other,
                                   QueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(QueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
