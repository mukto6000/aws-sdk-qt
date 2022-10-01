// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNEREVENTSOURCESREQUEST_H
#define QTAWS_LISTPARTNEREVENTSOURCESREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class ListPartnerEventSourcesRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT ListPartnerEventSourcesRequest : public EventBridgeRequest {

public:
    ListPartnerEventSourcesRequest(const ListPartnerEventSourcesRequest &other);
    ListPartnerEventSourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPartnerEventSourcesRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
