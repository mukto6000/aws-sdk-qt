// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEREQUEST_P_H
#define QTAWS_DELETERULEREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "deleterulerequest.h"

namespace QtAws {
namespace EventBridge {

class DeleteRuleRequest;

class DeleteRuleRequestPrivate : public EventBridgeRequestPrivate {

public:
    DeleteRuleRequestPrivate(const EventBridgeRequest::Action action,
                                   DeleteRuleRequest * const q);
    DeleteRuleRequestPrivate(const DeleteRuleRequestPrivate &other,
                                   DeleteRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRuleRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
