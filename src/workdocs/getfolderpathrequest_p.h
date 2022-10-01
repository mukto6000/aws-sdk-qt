// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFOLDERPATHREQUEST_P_H
#define QTAWS_GETFOLDERPATHREQUEST_P_H

#include "workdocsrequest_p.h"
#include "getfolderpathrequest.h"

namespace QtAws {
namespace WorkDocs {

class GetFolderPathRequest;

class GetFolderPathRequestPrivate : public WorkDocsRequestPrivate {

public:
    GetFolderPathRequestPrivate(const WorkDocsRequest::Action action,
                                   GetFolderPathRequest * const q);
    GetFolderPathRequestPrivate(const GetFolderPathRequestPrivate &other,
                                   GetFolderPathRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFolderPathRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
