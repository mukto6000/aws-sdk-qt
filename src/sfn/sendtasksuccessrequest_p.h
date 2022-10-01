// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTASKSUCCESSREQUEST_P_H
#define QTAWS_SENDTASKSUCCESSREQUEST_P_H

#include "sfnrequest_p.h"
#include "sendtasksuccessrequest.h"

namespace QtAws {
namespace Sfn {

class SendTaskSuccessRequest;

class SendTaskSuccessRequestPrivate : public SfnRequestPrivate {

public:
    SendTaskSuccessRequestPrivate(const SfnRequest::Action action,
                                   SendTaskSuccessRequest * const q);
    SendTaskSuccessRequestPrivate(const SendTaskSuccessRequestPrivate &other,
                                   SendTaskSuccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendTaskSuccessRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
