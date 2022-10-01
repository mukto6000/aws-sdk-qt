// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPTOUTSPEAKERREQUEST_H
#define QTAWS_OPTOUTSPEAKERREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class OptOutSpeakerRequestPrivate;

class QTAWSVOICEID_EXPORT OptOutSpeakerRequest : public VoiceIdRequest {

public:
    OptOutSpeakerRequest(const OptOutSpeakerRequest &other);
    OptOutSpeakerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OptOutSpeakerRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
