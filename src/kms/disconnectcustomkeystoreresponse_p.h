// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTCUSTOMKEYSTORERESPONSE_P_H
#define QTAWS_DISCONNECTCUSTOMKEYSTORERESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class DisconnectCustomKeyStoreResponse;

class DisconnectCustomKeyStoreResponsePrivate : public KmsResponsePrivate {

public:

    explicit DisconnectCustomKeyStoreResponsePrivate(DisconnectCustomKeyStoreResponse * const q);

    void parseDisconnectCustomKeyStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisconnectCustomKeyStoreResponse)
    Q_DISABLE_COPY(DisconnectCustomKeyStoreResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
