// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETREQUEST_P_H
#define QTAWS_CREATECONFIGURATIONSETREQUEST_P_H

#include "pinpointsmsvoicerequest_p.h"
#include "createconfigurationsetrequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class CreateConfigurationSetRequest;

class CreateConfigurationSetRequestPrivate : public PinpointSmsVoiceRequestPrivate {

public:
    CreateConfigurationSetRequestPrivate(const PinpointSmsVoiceRequest::Action action,
                                   CreateConfigurationSetRequest * const q);
    CreateConfigurationSetRequestPrivate(const CreateConfigurationSetRequestPrivate &other,
                                   CreateConfigurationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
