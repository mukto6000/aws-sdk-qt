// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMRESOURCEREQUEST_P_H
#define QTAWS_REMOVETAGSFROMRESOURCEREQUEST_P_H

#include "elasticacherequest_p.h"
#include "removetagsfromresourcerequest.h"

namespace QtAws {
namespace ElastiCache {

class RemoveTagsFromResourceRequest;

class RemoveTagsFromResourceRequestPrivate : public ElastiCacheRequestPrivate {

public:
    RemoveTagsFromResourceRequestPrivate(const ElastiCacheRequest::Action action,
                                   RemoveTagsFromResourceRequest * const q);
    RemoveTagsFromResourceRequestPrivate(const RemoveTagsFromResourceRequestPrivate &other,
                                   RemoveTagsFromResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTagsFromResourceRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
