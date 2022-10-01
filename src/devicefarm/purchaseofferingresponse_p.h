// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PURCHASEOFFERINGRESPONSE_P_H
#define QTAWS_PURCHASEOFFERINGRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class PurchaseOfferingResponse;

class PurchaseOfferingResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit PurchaseOfferingResponsePrivate(PurchaseOfferingResponse * const q);

    void parsePurchaseOfferingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PurchaseOfferingResponse)
    Q_DISABLE_COPY(PurchaseOfferingResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
