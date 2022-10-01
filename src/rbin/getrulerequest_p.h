// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULEREQUEST_P_H
#define QTAWS_GETRULEREQUEST_P_H

#include "rbinrequest_p.h"
#include "getrulerequest.h"

namespace QtAws {
namespace Rbin {

class GetRuleRequest;

class GetRuleRequestPrivate : public RbinRequestPrivate {

public:
    GetRuleRequestPrivate(const RbinRequest::Action action,
                                   GetRuleRequest * const q);
    GetRuleRequestPrivate(const GetRuleRequestPrivate &other,
                                   GetRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRuleRequest)

};

} // namespace Rbin
} // namespace QtAws

#endif
