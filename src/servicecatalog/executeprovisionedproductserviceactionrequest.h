// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEPROVISIONEDPRODUCTSERVICEACTIONREQUEST_H
#define QTAWS_EXECUTEPROVISIONEDPRODUCTSERVICEACTIONREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ExecuteProvisionedProductServiceActionRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ExecuteProvisionedProductServiceActionRequest : public ServiceCatalogRequest {

public:
    ExecuteProvisionedProductServiceActionRequest(const ExecuteProvisionedProductServiceActionRequest &other);
    ExecuteProvisionedProductServiceActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteProvisionedProductServiceActionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
