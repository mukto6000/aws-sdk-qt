// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBOUNCEREQUEST_P_H
#define QTAWS_SENDBOUNCEREQUEST_P_H

#include "sesrequest_p.h"
#include "sendbouncerequest.h"

namespace QtAws {
namespace Ses {

class SendBounceRequest;

class SendBounceRequestPrivate : public SesRequestPrivate {

public:
    SendBounceRequestPrivate(const SesRequest::Action action,
                                   SendBounceRequest * const q);
    SendBounceRequestPrivate(const SendBounceRequestPrivate &other,
                                   SendBounceRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendBounceRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
