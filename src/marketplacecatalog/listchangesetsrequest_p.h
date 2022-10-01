// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGESETSREQUEST_P_H
#define QTAWS_LISTCHANGESETSREQUEST_P_H

#include "marketplacecatalogrequest_p.h"
#include "listchangesetsrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class ListChangeSetsRequest;

class ListChangeSetsRequestPrivate : public MarketplaceCatalogRequestPrivate {

public:
    ListChangeSetsRequestPrivate(const MarketplaceCatalogRequest::Action action,
                                   ListChangeSetsRequest * const q);
    ListChangeSetsRequestPrivate(const ListChangeSetsRequestPrivate &other,
                                   ListChangeSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListChangeSetsRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
