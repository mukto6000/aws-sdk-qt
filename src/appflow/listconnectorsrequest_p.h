// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORSREQUEST_P_H
#define QTAWS_LISTCONNECTORSREQUEST_P_H

#include "appflowrequest_p.h"
#include "listconnectorsrequest.h"

namespace QtAws {
namespace Appflow {

class ListConnectorsRequest;

class ListConnectorsRequestPrivate : public AppflowRequestPrivate {

public:
    ListConnectorsRequestPrivate(const AppflowRequest::Action action,
                                   ListConnectorsRequest * const q);
    ListConnectorsRequestPrivate(const ListConnectorsRequestPrivate &other,
                                   ListConnectorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConnectorsRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
