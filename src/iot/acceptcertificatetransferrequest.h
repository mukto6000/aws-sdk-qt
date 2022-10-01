// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTCERTIFICATETRANSFERREQUEST_H
#define QTAWS_ACCEPTCERTIFICATETRANSFERREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class AcceptCertificateTransferRequestPrivate;

class QTAWSIOT_EXPORT AcceptCertificateTransferRequest : public IoTRequest {

public:
    AcceptCertificateTransferRequest(const AcceptCertificateTransferRequest &other);
    AcceptCertificateTransferRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptCertificateTransferRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
