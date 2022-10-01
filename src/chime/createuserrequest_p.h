// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERREQUEST_P_H
#define QTAWS_CREATEUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "createuserrequest.h"

namespace QtAws {
namespace Chime {

class CreateUserRequest;

class CreateUserRequestPrivate : public ChimeRequestPrivate {

public:
    CreateUserRequestPrivate(const ChimeRequest::Action action,
                                   CreateUserRequest * const q);
    CreateUserRequestPrivate(const CreateUserRequestPrivate &other,
                                   CreateUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
