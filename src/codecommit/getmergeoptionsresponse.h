// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMERGEOPTIONSRESPONSE_H
#define QTAWS_GETMERGEOPTIONSRESPONSE_H

#include "codecommitresponse.h"
#include "getmergeoptionsrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetMergeOptionsResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetMergeOptionsResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetMergeOptionsResponse(const GetMergeOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMergeOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMergeOptionsResponse)
    Q_DISABLE_COPY(GetMergeOptionsResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
