// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTREQUEST_H
#define QTAWS_CREATEVPCENDPOINTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointRequestPrivate;

class QTAWSEC2_EXPORT CreateVpcEndpointRequest : public Ec2Request {

public:
    CreateVpcEndpointRequest(const CreateVpcEndpointRequest &other);
    CreateVpcEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcEndpointRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
