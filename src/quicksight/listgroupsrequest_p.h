// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSREQUEST_P_H
#define QTAWS_LISTGROUPSREQUEST_P_H

#include "quicksightrequest_p.h"
#include "listgroupsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListGroupsRequest;

class ListGroupsRequestPrivate : public QuickSightRequestPrivate {

public:
    ListGroupsRequestPrivate(const QuickSightRequest::Action action,
                                   ListGroupsRequest * const q);
    ListGroupsRequestPrivate(const ListGroupsRequestPrivate &other,
                                   ListGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
