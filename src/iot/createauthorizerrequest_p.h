// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTHORIZERREQUEST_P_H
#define QTAWS_CREATEAUTHORIZERREQUEST_P_H

#include "iotrequest_p.h"
#include "createauthorizerrequest.h"

namespace QtAws {
namespace IoT {

class CreateAuthorizerRequest;

class CreateAuthorizerRequestPrivate : public IoTRequestPrivate {

public:
    CreateAuthorizerRequestPrivate(const IoTRequest::Action action,
                                   CreateAuthorizerRequest * const q);
    CreateAuthorizerRequestPrivate(const CreateAuthorizerRequestPrivate &other,
                                   CreateAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
