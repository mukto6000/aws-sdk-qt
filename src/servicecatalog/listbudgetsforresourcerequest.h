// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUDGETSFORRESOURCEREQUEST_H
#define QTAWS_LISTBUDGETSFORRESOURCEREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListBudgetsForResourceRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListBudgetsForResourceRequest : public ServiceCatalogRequest {

public:
    ListBudgetsForResourceRequest(const ListBudgetsForResourceRequest &other);
    ListBudgetsForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBudgetsForResourceRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
