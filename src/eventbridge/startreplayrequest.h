// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLAYREQUEST_H
#define QTAWS_STARTREPLAYREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class StartReplayRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT StartReplayRequest : public EventBridgeRequest {

public:
    StartReplayRequest(const StartReplayRequest &other);
    StartReplayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReplayRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
