// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSREQUEST_P_H
#define QTAWS_LISTTAGSREQUEST_P_H

#include "opensearchrequest_p.h"
#include "listtagsrequest.h"

namespace QtAws {
namespace OpenSearch {

class ListTagsRequest;

class ListTagsRequestPrivate : public OpenSearchRequestPrivate {

public:
    ListTagsRequestPrivate(const OpenSearchRequest::Action action,
                                   ListTagsRequest * const q);
    ListTagsRequestPrivate(const ListTagsRequestPrivate &other,
                                   ListTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
