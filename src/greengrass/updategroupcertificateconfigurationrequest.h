// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPCERTIFICATECONFIGURATIONREQUEST_H
#define QTAWS_UPDATEGROUPCERTIFICATECONFIGURATIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateGroupCertificateConfigurationRequestPrivate;

class QTAWSGREENGRASS_EXPORT UpdateGroupCertificateConfigurationRequest : public GreengrassRequest {

public:
    UpdateGroupCertificateConfigurationRequest(const UpdateGroupCertificateConfigurationRequest &other);
    UpdateGroupCertificateConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGroupCertificateConfigurationRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
