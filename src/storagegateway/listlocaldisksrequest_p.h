// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOCALDISKSREQUEST_P_H
#define QTAWS_LISTLOCALDISKSREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "listlocaldisksrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListLocalDisksRequest;

class ListLocalDisksRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ListLocalDisksRequestPrivate(const StorageGatewayRequest::Action action,
                                   ListLocalDisksRequest * const q);
    ListLocalDisksRequestPrivate(const ListLocalDisksRequestPrivate &other,
                                   ListLocalDisksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLocalDisksRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
