// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BRAKETCLIENT_P_H
#define QTAWS_BRAKETCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Braket {

class BraketClient;

class BraketClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit BraketClientPrivate(BraketClient * const q);

private:
    Q_DECLARE_PUBLIC(BraketClient)
    Q_DISABLE_COPY(BraketClientPrivate)

};

} // namespace Braket
} // namespace QtAws

#endif
