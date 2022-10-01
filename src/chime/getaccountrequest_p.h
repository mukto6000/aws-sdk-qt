// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTREQUEST_P_H
#define QTAWS_GETACCOUNTREQUEST_P_H

#include "chimerequest_p.h"
#include "getaccountrequest.h"

namespace QtAws {
namespace Chime {

class GetAccountRequest;

class GetAccountRequestPrivate : public ChimeRequestPrivate {

public:
    GetAccountRequestPrivate(const ChimeRequest::Action action,
                                   GetAccountRequest * const q);
    GetAccountRequestPrivate(const GetAccountRequestPrivate &other,
                                   GetAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
