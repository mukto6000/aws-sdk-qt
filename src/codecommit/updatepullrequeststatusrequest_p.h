// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTSTATUSREQUEST_P_H
#define QTAWS_UPDATEPULLREQUESTSTATUSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "updatepullrequeststatusrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestStatusRequest;

class UpdatePullRequestStatusRequestPrivate : public CodeCommitRequestPrivate {

public:
    UpdatePullRequestStatusRequestPrivate(const CodeCommitRequest::Action action,
                                   UpdatePullRequestStatusRequest * const q);
    UpdatePullRequestStatusRequestPrivate(const UpdatePullRequestStatusRequestPrivate &other,
                                   UpdatePullRequestStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePullRequestStatusRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
