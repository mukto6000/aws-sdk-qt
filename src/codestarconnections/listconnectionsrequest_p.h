// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTIONSREQUEST_P_H
#define QTAWS_LISTCONNECTIONSREQUEST_P_H

#include "codestarconnectionsrequest_p.h"
#include "listconnectionsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class ListConnectionsRequest;

class ListConnectionsRequestPrivate : public CodeStarconnectionsRequestPrivate {

public:
    ListConnectionsRequestPrivate(const CodeStarconnectionsRequest::Action action,
                                   ListConnectionsRequest * const q);
    ListConnectionsRequestPrivate(const ListConnectionsRequestPrivate &other,
                                   ListConnectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConnectionsRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
