// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMANDINVOCATIONREQUEST_P_H
#define QTAWS_GETCOMMANDINVOCATIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "getcommandinvocationrequest.h"

namespace QtAws {
namespace Ssm {

class GetCommandInvocationRequest;

class GetCommandInvocationRequestPrivate : public SsmRequestPrivate {

public:
    GetCommandInvocationRequestPrivate(const SsmRequest::Action action,
                                   GetCommandInvocationRequest * const q);
    GetCommandInvocationRequestPrivate(const GetCommandInvocationRequestPrivate &other,
                                   GetCommandInvocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCommandInvocationRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
