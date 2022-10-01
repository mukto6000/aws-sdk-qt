// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPSETREQUEST_P_H
#define QTAWS_CREATEIPSETREQUEST_P_H

#include "wafrequest_p.h"
#include "createipsetrequest.h"

namespace QtAws {
namespace Waf {

class CreateIPSetRequest;

class CreateIPSetRequestPrivate : public WafRequestPrivate {

public:
    CreateIPSetRequestPrivate(const WafRequest::Action action,
                                   CreateIPSetRequest * const q);
    CreateIPSetRequestPrivate(const CreateIPSetRequestPrivate &other,
                                   CreateIPSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIPSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
