// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMLINEITEMRESPONSE_P_H
#define QTAWS_DELETECUSTOMLINEITEMRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class DeleteCustomLineItemResponse;

class DeleteCustomLineItemResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit DeleteCustomLineItemResponsePrivate(DeleteCustomLineItemResponse * const q);

    void parseDeleteCustomLineItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomLineItemResponse)
    Q_DISABLE_COPY(DeleteCustomLineItemResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
