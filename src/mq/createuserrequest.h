// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERREQUEST_H
#define QTAWS_CREATEUSERREQUEST_H

#include "mqrequest.h"

namespace QtAws {
namespace Mq {

class CreateUserRequestPrivate;

class QTAWSMQ_EXPORT CreateUserRequest : public MqRequest {

public:
    CreateUserRequest(const CreateUserRequest &other);
    CreateUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
