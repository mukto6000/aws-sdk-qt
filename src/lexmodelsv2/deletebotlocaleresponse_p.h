// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTLOCALERESPONSE_P_H
#define QTAWS_DELETEBOTLOCALERESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotLocaleResponse;

class DeleteBotLocaleResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DeleteBotLocaleResponsePrivate(DeleteBotLocaleResponse * const q);

    void parseDeleteBotLocaleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBotLocaleResponse)
    Q_DISABLE_COPY(DeleteBotLocaleResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
