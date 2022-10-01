// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HONEYCODECLIENT_P_H
#define QTAWS_HONEYCODECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Honeycode {

class HoneycodeClient;

class HoneycodeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit HoneycodeClientPrivate(HoneycodeClient * const q);

private:
    Q_DECLARE_PUBLIC(HoneycodeClient)
    Q_DISABLE_COPY(HoneycodeClientPrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
