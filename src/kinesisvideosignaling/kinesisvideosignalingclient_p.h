// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOSIGNALINGCLIENT_P_H
#define QTAWS_KINESISVIDEOSIGNALINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace KinesisVideoSignaling {

class KinesisVideoSignalingClient;

class KinesisVideoSignalingClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit KinesisVideoSignalingClientPrivate(KinesisVideoSignalingClient * const q);

private:
    Q_DECLARE_PUBLIC(KinesisVideoSignalingClient)
    Q_DISABLE_COPY(KinesisVideoSignalingClientPrivate)

};

} // namespace KinesisVideoSignaling
} // namespace QtAws

#endif
