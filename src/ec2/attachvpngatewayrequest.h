// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHVPNGATEWAYREQUEST_H
#define QTAWS_ATTACHVPNGATEWAYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AttachVpnGatewayRequestPrivate;

class QTAWSEC2_EXPORT AttachVpnGatewayRequest : public Ec2Request {

public:
    AttachVpnGatewayRequest(const AttachVpnGatewayRequest &other);
    AttachVpnGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachVpnGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
