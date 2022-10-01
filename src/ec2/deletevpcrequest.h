// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCREQUEST_H
#define QTAWS_DELETEVPCREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcRequestPrivate;

class QTAWSEC2_EXPORT DeleteVpcRequest : public Ec2Request {

public:
    DeleteVpcRequest(const DeleteVpcRequest &other);
    DeleteVpcRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
