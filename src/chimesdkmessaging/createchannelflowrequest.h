// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELFLOWREQUEST_H
#define QTAWS_CREATECHANNELFLOWREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class CreateChannelFlowRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT CreateChannelFlowRequest : public ChimeSdkMessagingRequest {

public:
    CreateChannelFlowRequest(const CreateChannelFlowRequest &other);
    CreateChannelFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelFlowRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
