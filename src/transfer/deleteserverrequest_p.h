// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERREQUEST_P_H
#define QTAWS_DELETESERVERREQUEST_P_H

#include "transferrequest_p.h"
#include "deleteserverrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteServerRequest;

class DeleteServerRequestPrivate : public TransferRequestPrivate {

public:
    DeleteServerRequestPrivate(const TransferRequest::Action action,
                                   DeleteServerRequest * const q);
    DeleteServerRequestPrivate(const DeleteServerRequestPrivate &other,
                                   DeleteServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServerRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
