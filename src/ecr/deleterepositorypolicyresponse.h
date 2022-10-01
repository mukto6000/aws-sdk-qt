// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYPOLICYRESPONSE_H
#define QTAWS_DELETEREPOSITORYPOLICYRESPONSE_H

#include "ecrresponse.h"
#include "deleterepositorypolicyrequest.h"

namespace QtAws {
namespace Ecr {

class DeleteRepositoryPolicyResponsePrivate;

class QTAWSECR_EXPORT DeleteRepositoryPolicyResponse : public EcrResponse {
    Q_OBJECT

public:
    DeleteRepositoryPolicyResponse(const DeleteRepositoryPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRepositoryPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRepositoryPolicyResponse)
    Q_DISABLE_COPY(DeleteRepositoryPolicyResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
