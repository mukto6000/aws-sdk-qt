// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEMAPPINGTEMPLATERESPONSE_P_H
#define QTAWS_EVALUATEMAPPINGTEMPLATERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class EvaluateMappingTemplateResponse;

class EvaluateMappingTemplateResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit EvaluateMappingTemplateResponsePrivate(EvaluateMappingTemplateResponse * const q);

    void parseEvaluateMappingTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EvaluateMappingTemplateResponse)
    Q_DISABLE_COPY(EvaluateMappingTemplateResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
