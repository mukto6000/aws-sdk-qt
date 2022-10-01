// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGACCELERATORREQUEST_H
#define QTAWS_DESCRIBECUSTOMROUTINGACCELERATORREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingAcceleratorRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeCustomRoutingAcceleratorRequest : public GlobalAcceleratorRequest {

public:
    DescribeCustomRoutingAcceleratorRequest(const DescribeCustomRoutingAcceleratorRequest &other);
    DescribeCustomRoutingAcceleratorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomRoutingAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
