// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGSREQUEST_P_H
#define QTAWS_DELETETAGSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "deletetagsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteTagsRequest;

class DeleteTagsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DeleteTagsRequestPrivate(const WorkSpacesRequest::Action action,
                                   DeleteTagsRequest * const q);
    DeleteTagsRequestPrivate(const DeleteTagsRequestPrivate &other,
                                   DeleteTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTagsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
