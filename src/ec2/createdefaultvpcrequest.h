// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEFAULTVPCREQUEST_H
#define QTAWS_CREATEDEFAULTVPCREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateDefaultVpcRequestPrivate;

class QTAWSEC2_EXPORT CreateDefaultVpcRequest : public Ec2Request {

public:
    CreateDefaultVpcRequest(const CreateDefaultVpcRequest &other);
    CreateDefaultVpcRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDefaultVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
