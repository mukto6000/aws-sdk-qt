// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTLOCALERESPONSE_P_H
#define QTAWS_CREATEBOTLOCALERESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotLocaleResponse;

class CreateBotLocaleResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit CreateBotLocaleResponsePrivate(CreateBotLocaleResponse * const q);

    void parseCreateBotLocaleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBotLocaleResponse)
    Q_DISABLE_COPY(CreateBotLocaleResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
