// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBRANCHREQUEST_P_H
#define QTAWS_DELETEBRANCHREQUEST_P_H

#include "amplifyrequest_p.h"
#include "deletebranchrequest.h"

namespace QtAws {
namespace Amplify {

class DeleteBranchRequest;

class DeleteBranchRequestPrivate : public AmplifyRequestPrivate {

public:
    DeleteBranchRequestPrivate(const AmplifyRequest::Action action,
                                   DeleteBranchRequest * const q);
    DeleteBranchRequestPrivate(const DeleteBranchRequestPrivate &other,
                                   DeleteBranchRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBranchRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
