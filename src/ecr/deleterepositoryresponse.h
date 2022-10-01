// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYRESPONSE_H
#define QTAWS_DELETEREPOSITORYRESPONSE_H

#include "ecrresponse.h"
#include "deleterepositoryrequest.h"

namespace QtAws {
namespace Ecr {

class DeleteRepositoryResponsePrivate;

class QTAWSECR_EXPORT DeleteRepositoryResponse : public EcrResponse {
    Q_OBJECT

public:
    DeleteRepositoryResponse(const DeleteRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRepositoryResponse)
    Q_DISABLE_COPY(DeleteRepositoryResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
