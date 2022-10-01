// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEMAILIDENTITIESREQUEST_P_H
#define QTAWS_LISTEMAILIDENTITIESREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "listemailidentitiesrequest.h"

namespace QtAws {
namespace PinpointEmail {

class ListEmailIdentitiesRequest;

class ListEmailIdentitiesRequestPrivate : public PinpointEmailRequestPrivate {

public:
    ListEmailIdentitiesRequestPrivate(const PinpointEmailRequest::Action action,
                                   ListEmailIdentitiesRequest * const q);
    ListEmailIdentitiesRequestPrivate(const ListEmailIdentitiesRequestPrivate &other,
                                   ListEmailIdentitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEmailIdentitiesRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
