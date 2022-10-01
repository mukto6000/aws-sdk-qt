// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEGROUPRESPONSE_H
#define QTAWS_CREATERULEGROUPRESPONSE_H

#include "wafresponse.h"
#include "createrulegrouprequest.h"

namespace QtAws {
namespace Waf {

class CreateRuleGroupResponsePrivate;

class QTAWSWAF_EXPORT CreateRuleGroupResponse : public WafResponse {
    Q_OBJECT

public:
    CreateRuleGroupResponse(const CreateRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRuleGroupResponse)
    Q_DISABLE_COPY(CreateRuleGroupResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
