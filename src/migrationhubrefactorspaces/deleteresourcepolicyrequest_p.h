// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEPOLICYREQUEST_P_H
#define QTAWS_DELETERESOURCEPOLICYREQUEST_P_H

#include "migrationhubrefactorspacesrequest_p.h"
#include "deleteresourcepolicyrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class DeleteResourcePolicyRequest;

class DeleteResourcePolicyRequestPrivate : public MigrationHubRefactorSpacesRequestPrivate {

public:
    DeleteResourcePolicyRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action,
                                   DeleteResourcePolicyRequest * const q);
    DeleteResourcePolicyRequestPrivate(const DeleteResourcePolicyRequestPrivate &other,
                                   DeleteResourcePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourcePolicyRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
