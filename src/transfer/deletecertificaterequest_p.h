// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECERTIFICATEREQUEST_P_H
#define QTAWS_DELETECERTIFICATEREQUEST_P_H

#include "transferrequest_p.h"
#include "deletecertificaterequest.h"

namespace QtAws {
namespace Transfer {

class DeleteCertificateRequest;

class DeleteCertificateRequestPrivate : public TransferRequestPrivate {

public:
    DeleteCertificateRequestPrivate(const TransferRequest::Action action,
                                   DeleteCertificateRequest * const q);
    DeleteCertificateRequestPrivate(const DeleteCertificateRequestPrivate &other,
                                   DeleteCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCertificateRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
