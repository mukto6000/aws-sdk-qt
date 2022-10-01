// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DRSCLIENT_P_H
#define QTAWS_DRSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Drs {

class DrsClient;

class DrsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DrsClientPrivate(DrsClient * const q);

private:
    Q_DECLARE_PUBLIC(DrsClient)
    Q_DISABLE_COPY(DrsClientPrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
