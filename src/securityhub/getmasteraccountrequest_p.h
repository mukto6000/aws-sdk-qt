// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMASTERACCOUNTREQUEST_P_H
#define QTAWS_GETMASTERACCOUNTREQUEST_P_H

#include "securityhubrequest_p.h"
#include "getmasteraccountrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetMasterAccountRequest;

class GetMasterAccountRequestPrivate : public SecurityHubRequestPrivate {

public:
    GetMasterAccountRequestPrivate(const SecurityHubRequest::Action action,
                                   GetMasterAccountRequest * const q);
    GetMasterAccountRequestPrivate(const GetMasterAccountRequestPrivate &other,
                                   GetMasterAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMasterAccountRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
