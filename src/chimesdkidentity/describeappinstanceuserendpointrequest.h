// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEUSERENDPOINTREQUEST_H
#define QTAWS_DESCRIBEAPPINSTANCEUSERENDPOINTREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceUserEndpointRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DescribeAppInstanceUserEndpointRequest : public ChimeSdkIdentityRequest {

public:
    DescribeAppInstanceUserEndpointRequest(const DescribeAppInstanceUserEndpointRequest &other);
    DescribeAppInstanceUserEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppInstanceUserEndpointRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
