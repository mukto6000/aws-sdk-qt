// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATECHANNELMEMBERSHIPREQUEST_H
#define QTAWS_BATCHCREATECHANNELMEMBERSHIPREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class BatchCreateChannelMembershipRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT BatchCreateChannelMembershipRequest : public ChimeSdkMessagingRequest {

public:
    BatchCreateChannelMembershipRequest(const BatchCreateChannelMembershipRequest &other);
    BatchCreateChannelMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateChannelMembershipRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
