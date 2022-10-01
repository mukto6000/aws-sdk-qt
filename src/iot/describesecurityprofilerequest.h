// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYPROFILEREQUEST_H
#define QTAWS_DESCRIBESECURITYPROFILEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeSecurityProfileRequestPrivate;

class QTAWSIOT_EXPORT DescribeSecurityProfileRequest : public IoTRequest {

public:
    DescribeSecurityProfileRequest(const DescribeSecurityProfileRequest &other);
    DescribeSecurityProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
