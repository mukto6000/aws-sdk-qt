// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTREQUEST_H
#define QTAWS_DESCRIBEENDPOINTREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeEndpointRequestPrivate;

class QTAWSIOT_EXPORT DescribeEndpointRequest : public IoTRequest {

public:
    DescribeEndpointRequest(const DescribeEndpointRequest &other);
    DescribeEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
