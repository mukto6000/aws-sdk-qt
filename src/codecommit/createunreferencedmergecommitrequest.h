// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUNREFERENCEDMERGECOMMITREQUEST_H
#define QTAWS_CREATEUNREFERENCEDMERGECOMMITREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreateUnreferencedMergeCommitRequestPrivate;

class QTAWSCODECOMMIT_EXPORT CreateUnreferencedMergeCommitRequest : public CodeCommitRequest {

public:
    CreateUnreferencedMergeCommitRequest(const CreateUnreferencedMergeCommitRequest &other);
    CreateUnreferencedMergeCommitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUnreferencedMergeCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
