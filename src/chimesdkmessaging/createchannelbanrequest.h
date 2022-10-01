// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELBANREQUEST_H
#define QTAWS_CREATECHANNELBANREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class CreateChannelBanRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT CreateChannelBanRequest : public ChimeSdkMessagingRequest {

public:
    CreateChannelBanRequest(const CreateChannelBanRequest &other);
    CreateChannelBanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelBanRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
