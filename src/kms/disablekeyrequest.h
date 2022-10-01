// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEKEYREQUEST_H
#define QTAWS_DISABLEKEYREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class DisableKeyRequestPrivate;

class QTAWSKMS_EXPORT DisableKeyRequest : public KmsRequest {

public:
    DisableKeyRequest(const DisableKeyRequest &other);
    DisableKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
