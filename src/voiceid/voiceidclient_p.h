// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VOICEIDCLIENT_P_H
#define QTAWS_VOICEIDCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace VoiceId {

class VoiceIdClient;

class VoiceIdClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit VoiceIdClientPrivate(VoiceIdClient * const q);

private:
    Q_DECLARE_PUBLIC(VoiceIdClient)
    Q_DISABLE_COPY(VoiceIdClientPrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
