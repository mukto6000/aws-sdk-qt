// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFOLDERREQUEST_P_H
#define QTAWS_DELETEFOLDERREQUEST_P_H

#include "quicksightrequest_p.h"
#include "deletefolderrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteFolderRequest;

class DeleteFolderRequestPrivate : public QuickSightRequestPrivate {

public:
    DeleteFolderRequestPrivate(const QuickSightRequest::Action action,
                                   DeleteFolderRequest * const q);
    DeleteFolderRequestPrivate(const DeleteFolderRequestPrivate &other,
                                   DeleteFolderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFolderRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
