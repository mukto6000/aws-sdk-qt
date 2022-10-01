// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCERTIFICATEFROMDISTRIBUTIONREQUEST_H
#define QTAWS_DETACHCERTIFICATEFROMDISTRIBUTIONREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DetachCertificateFromDistributionRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DetachCertificateFromDistributionRequest : public LightsailRequest {

public:
    DetachCertificateFromDistributionRequest(const DetachCertificateFromDistributionRequest &other);
    DetachCertificateFromDistributionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachCertificateFromDistributionRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
