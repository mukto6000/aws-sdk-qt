// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENCLAVECERTIFICATEIAMROLEREQUEST_H
#define QTAWS_DISASSOCIATEENCLAVECERTIFICATEIAMROLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisassociateEnclaveCertificateIamRoleRequestPrivate;

class QTAWSEC2_EXPORT DisassociateEnclaveCertificateIamRoleRequest : public Ec2Request {

public:
    DisassociateEnclaveCertificateIamRoleRequest(const DisassociateEnclaveCertificateIamRoleRequest &other);
    DisassociateEnclaveCertificateIamRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateEnclaveCertificateIamRoleRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
