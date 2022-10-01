// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECATALOGCLIENT_P_H
#define QTAWS_MARKETPLACECATALOGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MarketplaceCatalog {

class MarketplaceCatalogClient;

class MarketplaceCatalogClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MarketplaceCatalogClientPrivate(MarketplaceCatalogClient * const q);

private:
    Q_DECLARE_PUBLIC(MarketplaceCatalogClient)
    Q_DISABLE_COPY(MarketplaceCatalogClientPrivate)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
