// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONINGARTIFACTREQUEST_H
#define QTAWS_DELETEPROVISIONINGARTIFACTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteProvisioningArtifactRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DeleteProvisioningArtifactRequest : public ServiceCatalogRequest {

public:
    DeleteProvisioningArtifactRequest(const DeleteProvisioningArtifactRequest &other);
    DeleteProvisioningArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProvisioningArtifactRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
