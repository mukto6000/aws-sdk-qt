// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONREQUEST_H
#define QTAWS_DESCRIBEAPPLICATIONREQUEST_H

#include "iotfleethubrequest.h"

namespace QtAws {
namespace IoTFleetHub {

class DescribeApplicationRequestPrivate;

class QTAWSIOTFLEETHUB_EXPORT DescribeApplicationRequest : public IoTFleetHubRequest {

public:
    DescribeApplicationRequest(const DescribeApplicationRequest &other);
    DescribeApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationRequest)

};

} // namespace IoTFleetHub
} // namespace QtAws

#endif
