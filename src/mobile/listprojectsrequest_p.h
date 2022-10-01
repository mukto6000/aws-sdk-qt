// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSREQUEST_P_H
#define QTAWS_LISTPROJECTSREQUEST_P_H

#include "mobilerequest_p.h"
#include "listprojectsrequest.h"

namespace QtAws {
namespace Mobile {

class ListProjectsRequest;

class ListProjectsRequestPrivate : public MobileRequestPrivate {

public:
    ListProjectsRequestPrivate(const MobileRequest::Action action,
                                   ListProjectsRequest * const q);
    ListProjectsRequestPrivate(const ListProjectsRequestPrivate &other,
                                   ListProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProjectsRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
