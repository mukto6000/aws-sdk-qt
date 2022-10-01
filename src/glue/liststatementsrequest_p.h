// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTATEMENTSREQUEST_P_H
#define QTAWS_LISTSTATEMENTSREQUEST_P_H

#include "gluerequest_p.h"
#include "liststatementsrequest.h"

namespace QtAws {
namespace Glue {

class ListStatementsRequest;

class ListStatementsRequestPrivate : public GlueRequestPrivate {

public:
    ListStatementsRequestPrivate(const GlueRequest::Action action,
                                   ListStatementsRequest * const q);
    ListStatementsRequestPrivate(const ListStatementsRequestPrivate &other,
                                   ListStatementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStatementsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
