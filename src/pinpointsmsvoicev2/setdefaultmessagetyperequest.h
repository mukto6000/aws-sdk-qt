// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTMESSAGETYPEREQUEST_H
#define QTAWS_SETDEFAULTMESSAGETYPEREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetDefaultMessageTypeRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT SetDefaultMessageTypeRequest : public PinpointSmsVoiceV2Request {

public:
    SetDefaultMessageTypeRequest(const SetDefaultMessageTypeRequest &other);
    SetDefaultMessageTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDefaultMessageTypeRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
