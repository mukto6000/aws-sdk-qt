// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNENDPOINTSREQUEST_H
#define QTAWS_DESCRIBECLIENTVPNENDPOINTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnEndpointsRequestPrivate;

class QTAWSEC2_EXPORT DescribeClientVpnEndpointsRequest : public Ec2Request {

public:
    DescribeClientVpnEndpointsRequest(const DescribeClientVpnEndpointsRequest &other);
    DescribeClientVpnEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientVpnEndpointsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
