// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEPOLICYRESPONSE_H
#define QTAWS_DELETERESOURCEPOLICYRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "deleteresourcepolicyrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class DeleteResourcePolicyResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT DeleteResourcePolicyResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    DeleteResourcePolicyResponse(const DeleteResourcePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourcePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourcePolicyResponse)
    Q_DISABLE_COPY(DeleteResourcePolicyResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
