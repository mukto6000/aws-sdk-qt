// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTRIBUTEGROUPSFORAPPLICATIONREQUEST_H
#define QTAWS_LISTATTRIBUTEGROUPSFORAPPLICATIONREQUEST_H

#include "servicecatalogappregistryrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class ListAttributeGroupsForApplicationRequestPrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT ListAttributeGroupsForApplicationRequest : public ServiceCatalogAppRegistryRequest {

public:
    ListAttributeGroupsForApplicationRequest(const ListAttributeGroupsForApplicationRequest &other);
    ListAttributeGroupsForApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttributeGroupsForApplicationRequest)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
