// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECATALOGRESPONSE_P_H
#define QTAWS_MARKETPLACECATALOGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MarketplaceCatalog {

class MarketplaceCatalogResponse;

class MarketplaceCatalogResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MarketplaceCatalogResponsePrivate(MarketplaceCatalogResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MarketplaceCatalogResponse)
    Q_DISABLE_COPY(MarketplaceCatalogResponsePrivate)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
