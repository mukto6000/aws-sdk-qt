// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONRESPONSE_H
#define QTAWS_UPDATEAPPLICATIONRESPONSE_H

#include "servicecatalogappregistryresponse.h"
#include "updateapplicationrequest.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class UpdateApplicationResponsePrivate;

class QTAWSSERVICECATALOGAPPREGISTRY_EXPORT UpdateApplicationResponse : public ServiceCatalogAppRegistryResponse {
    Q_OBJECT

public:
    UpdateApplicationResponse(const UpdateApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationResponse)
    Q_DISABLE_COPY(UpdateApplicationResponse)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
