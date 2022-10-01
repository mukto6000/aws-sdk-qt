// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESLOTTYPEREQUEST_P_H
#define QTAWS_UPDATESLOTTYPEREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "updateslottyperequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateSlotTypeRequest;

class UpdateSlotTypeRequestPrivate : public LexModelsV2RequestPrivate {

public:
    UpdateSlotTypeRequestPrivate(const LexModelsV2Request::Action action,
                                   UpdateSlotTypeRequest * const q);
    UpdateSlotTypeRequestPrivate(const UpdateSlotTypeRequestPrivate &other,
                                   UpdateSlotTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSlotTypeRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
