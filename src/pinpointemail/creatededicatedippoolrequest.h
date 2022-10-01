// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEDICATEDIPPOOLREQUEST_H
#define QTAWS_CREATEDEDICATEDIPPOOLREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class CreateDedicatedIpPoolRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT CreateDedicatedIpPoolRequest : public PinpointEmailRequest {

public:
    CreateDedicatedIpPoolRequest(const CreateDedicatedIpPoolRequest &other);
    CreateDedicatedIpPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDedicatedIpPoolRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
