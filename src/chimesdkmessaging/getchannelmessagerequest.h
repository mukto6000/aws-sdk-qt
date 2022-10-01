// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMESSAGEREQUEST_H
#define QTAWS_GETCHANNELMESSAGEREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetChannelMessageRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT GetChannelMessageRequest : public ChimeSdkMessagingRequest {

public:
    GetChannelMessageRequest(const GetChannelMessageRequest &other);
    GetChannelMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelMessageRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
