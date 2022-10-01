// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXECUTIONSREQUEST_P_H
#define QTAWS_LISTEXECUTIONSREQUEST_P_H

#include "transferrequest_p.h"
#include "listexecutionsrequest.h"

namespace QtAws {
namespace Transfer {

class ListExecutionsRequest;

class ListExecutionsRequestPrivate : public TransferRequestPrivate {

public:
    ListExecutionsRequestPrivate(const TransferRequest::Action action,
                                   ListExecutionsRequest * const q);
    ListExecutionsRequestPrivate(const ListExecutionsRequestPrivate &other,
                                   ListExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExecutionsRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
