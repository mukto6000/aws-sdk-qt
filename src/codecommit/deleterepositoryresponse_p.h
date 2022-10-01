// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYRESPONSE_P_H
#define QTAWS_DELETEREPOSITORYRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class DeleteRepositoryResponse;

class DeleteRepositoryResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit DeleteRepositoryResponsePrivate(DeleteRepositoryResponse * const q);

    void parseDeleteRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRepositoryResponse)
    Q_DISABLE_COPY(DeleteRepositoryResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
