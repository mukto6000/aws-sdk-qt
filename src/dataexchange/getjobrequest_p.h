// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBREQUEST_P_H
#define QTAWS_GETJOBREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "getjobrequest.h"

namespace QtAws {
namespace DataExchange {

class GetJobRequest;

class GetJobRequestPrivate : public DataExchangeRequestPrivate {

public:
    GetJobRequestPrivate(const DataExchangeRequest::Action action,
                                   GetJobRequest * const q);
    GetJobRequestPrivate(const GetJobRequestPrivate &other,
                                   GetJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
