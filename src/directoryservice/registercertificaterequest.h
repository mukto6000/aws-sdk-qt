// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCERTIFICATEREQUEST_H
#define QTAWS_REGISTERCERTIFICATEREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class RegisterCertificateRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT RegisterCertificateRequest : public DirectoryServiceRequest {

public:
    RegisterCertificateRequest(const RegisterCertificateRequest &other);
    RegisterCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterCertificateRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
