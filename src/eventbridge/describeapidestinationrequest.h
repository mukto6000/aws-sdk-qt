// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPIDESTINATIONREQUEST_H
#define QTAWS_DESCRIBEAPIDESTINATIONREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeApiDestinationRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribeApiDestinationRequest : public EventBridgeRequest {

public:
    DescribeApiDestinationRequest(const DescribeApiDestinationRequest &other);
    DescribeApiDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApiDestinationRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
