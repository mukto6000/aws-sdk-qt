// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNOTIFICATIONSREQUEST_P_H
#define QTAWS_LISTNOTIFICATIONSREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "listnotificationsrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListNotificationsRequest;

class ListNotificationsRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ListNotificationsRequestPrivate(const WellArchitectedRequest::Action action,
                                   ListNotificationsRequest * const q);
    ListNotificationsRequestPrivate(const ListNotificationsRequestPrivate &other,
                                   ListNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNotificationsRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
