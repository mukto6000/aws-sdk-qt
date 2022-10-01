// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESREQUEST_H
#define QTAWS_LISTENTITIESREQUEST_H

#include "marketplacecatalogrequest.h"

namespace QtAws {
namespace MarketplaceCatalog {

class ListEntitiesRequestPrivate;

class QTAWSMARKETPLACECATALOG_EXPORT ListEntitiesRequest : public MarketplaceCatalogRequest {

public:
    ListEntitiesRequest(const ListEntitiesRequest &other);
    ListEntitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntitiesRequest)

};

} // namespace MarketplaceCatalog
} // namespace QtAws

#endif
