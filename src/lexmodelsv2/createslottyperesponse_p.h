// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTTYPERESPONSE_P_H
#define QTAWS_CREATESLOTTYPERESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateSlotTypeResponse;

class CreateSlotTypeResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit CreateSlotTypeResponsePrivate(CreateSlotTypeResponse * const q);

    void parseCreateSlotTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSlotTypeResponse)
    Q_DISABLE_COPY(CreateSlotTypeResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
