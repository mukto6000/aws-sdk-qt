// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SFNCLIENT_P_H
#define QTAWS_SFNCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Sfn {

class SfnClient;

class SfnClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SfnClientPrivate(SfnClient * const q);

private:
    Q_DECLARE_PUBLIC(SfnClient)
    Q_DISABLE_COPY(SfnClientPrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
