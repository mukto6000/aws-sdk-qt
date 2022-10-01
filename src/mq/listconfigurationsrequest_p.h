// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTCONFIGURATIONSREQUEST_P_H

#include "mqrequest_p.h"
#include "listconfigurationsrequest.h"

namespace QtAws {
namespace Mq {

class ListConfigurationsRequest;

class ListConfigurationsRequestPrivate : public MqRequestPrivate {

public:
    ListConfigurationsRequestPrivate(const MqRequest::Action action,
                                   ListConfigurationsRequest * const q);
    ListConfigurationsRequestPrivate(const ListConfigurationsRequestPrivate &other,
                                   ListConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConfigurationsRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
