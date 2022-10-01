// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSREQUEST_P_H
#define QTAWS_LISTDATASETSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listdatasetsrequest.h"

namespace QtAws {
namespace Personalize {

class ListDatasetsRequest;

class ListDatasetsRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListDatasetsRequestPrivate(const PersonalizeRequest::Action action,
                                   ListDatasetsRequest * const q);
    ListDatasetsRequestPrivate(const ListDatasetsRequestPrivate &other,
                                   ListDatasetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasetsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
