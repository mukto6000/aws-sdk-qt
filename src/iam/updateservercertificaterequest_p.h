// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERCERTIFICATEREQUEST_P_H
#define QTAWS_UPDATESERVERCERTIFICATEREQUEST_P_H

#include "iamrequest_p.h"
#include "updateservercertificaterequest.h"

namespace QtAws {
namespace Iam {

class UpdateServerCertificateRequest;

class UpdateServerCertificateRequestPrivate : public IamRequestPrivate {

public:
    UpdateServerCertificateRequestPrivate(const IamRequest::Action action,
                                   UpdateServerCertificateRequest * const q);
    UpdateServerCertificateRequestPrivate(const UpdateServerCertificateRequestPrivate &other,
                                   UpdateServerCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServerCertificateRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
