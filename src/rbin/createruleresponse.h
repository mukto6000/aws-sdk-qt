// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULERESPONSE_H
#define QTAWS_CREATERULERESPONSE_H

#include "rbinresponse.h"
#include "createrulerequest.h"

namespace QtAws {
namespace Rbin {

class CreateRuleResponsePrivate;

class QTAWSRBIN_EXPORT CreateRuleResponse : public RbinResponse {
    Q_OBJECT

public:
    CreateRuleResponse(const CreateRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRuleResponse)
    Q_DISABLE_COPY(CreateRuleResponse)

};

} // namespace Rbin
} // namespace QtAws

#endif
