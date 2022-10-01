// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTSREQUEST_P_H
#define QTAWS_LISTENVIRONMENTSREQUEST_P_H

#include "mwaarequest_p.h"
#include "listenvironmentsrequest.h"

namespace QtAws {
namespace Mwaa {

class ListEnvironmentsRequest;

class ListEnvironmentsRequestPrivate : public MwaaRequestPrivate {

public:
    ListEnvironmentsRequestPrivate(const MwaaRequest::Action action,
                                   ListEnvironmentsRequest * const q);
    ListEnvironmentsRequestPrivate(const ListEnvironmentsRequestPrivate &other,
                                   ListEnvironmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEnvironmentsRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif
