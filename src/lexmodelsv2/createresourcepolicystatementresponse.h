// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEPOLICYSTATEMENTRESPONSE_H
#define QTAWS_CREATERESOURCEPOLICYSTATEMENTRESPONSE_H

#include "lexmodelsv2response.h"
#include "createresourcepolicystatementrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateResourcePolicyStatementResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT CreateResourcePolicyStatementResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    CreateResourcePolicyStatementResponse(const CreateResourcePolicyStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResourcePolicyStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourcePolicyStatementResponse)
    Q_DISABLE_COPY(CreateResourcePolicyStatementResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
