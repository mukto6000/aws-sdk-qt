// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMREQUEST_H
#define QTAWS_DELETEIPAMREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamRequestPrivate;

class QTAWSEC2_EXPORT DeleteIpamRequest : public Ec2Request {

public:
    DeleteIpamRequest(const DeleteIpamRequest &other);
    DeleteIpamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIpamRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
