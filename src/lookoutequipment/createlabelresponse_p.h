// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELRESPONSE_P_H
#define QTAWS_CREATELABELRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class CreateLabelResponse;

class CreateLabelResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit CreateLabelResponsePrivate(CreateLabelResponse * const q);

    void parseCreateLabelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLabelResponse)
    Q_DISABLE_COPY(CreateLabelResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
