// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPARTNEREVENTSREQUEST_H
#define QTAWS_PUTPARTNEREVENTSREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class PutPartnerEventsRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT PutPartnerEventsRequest : public EventBridgeRequest {

public:
    PutPartnerEventsRequest(const PutPartnerEventsRequest &other);
    PutPartnerEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPartnerEventsRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
