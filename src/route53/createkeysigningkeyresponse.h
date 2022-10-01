// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSIGNINGKEYRESPONSE_H
#define QTAWS_CREATEKEYSIGNINGKEYRESPONSE_H

#include "route53response.h"
#include "createkeysigningkeyrequest.h"

namespace QtAws {
namespace Route53 {

class CreateKeySigningKeyResponsePrivate;

class QTAWSROUTE53_EXPORT CreateKeySigningKeyResponse : public Route53Response {
    Q_OBJECT

public:
    CreateKeySigningKeyResponse(const CreateKeySigningKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateKeySigningKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeySigningKeyResponse)
    Q_DISABLE_COPY(CreateKeySigningKeyResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
