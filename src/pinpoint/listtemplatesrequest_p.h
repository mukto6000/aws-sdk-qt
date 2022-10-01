// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATESREQUEST_P_H
#define QTAWS_LISTTEMPLATESREQUEST_P_H

#include "pinpointrequest_p.h"
#include "listtemplatesrequest.h"

namespace QtAws {
namespace Pinpoint {

class ListTemplatesRequest;

class ListTemplatesRequestPrivate : public PinpointRequestPrivate {

public:
    ListTemplatesRequestPrivate(const PinpointRequest::Action action,
                                   ListTemplatesRequest * const q);
    ListTemplatesRequestPrivate(const ListTemplatesRequestPrivate &other,
                                   ListTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTemplatesRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
