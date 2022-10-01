// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCHANNELMESSAGEREQUEST_H
#define QTAWS_SENDCHANNELMESSAGEREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class SendChannelMessageRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT SendChannelMessageRequest : public ChimeSdkMessagingRequest {

public:
    SendChannelMessageRequest(const SendChannelMessageRequest &other);
    SendChannelMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendChannelMessageRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
