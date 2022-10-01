// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGOPTIONSREQUEST_P_H
#define QTAWS_PUTLOGGINGOPTIONSREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "putloggingoptionsrequest.h"

namespace QtAws {
namespace IoTEvents {

class PutLoggingOptionsRequest;

class PutLoggingOptionsRequestPrivate : public IoTEventsRequestPrivate {

public:
    PutLoggingOptionsRequestPrivate(const IoTEventsRequest::Action action,
                                   PutLoggingOptionsRequest * const q);
    PutLoggingOptionsRequestPrivate(const PutLoggingOptionsRequestPrivate &other,
                                   PutLoggingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLoggingOptionsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
