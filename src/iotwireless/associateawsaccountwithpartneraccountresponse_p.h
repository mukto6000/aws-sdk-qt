// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAWSACCOUNTWITHPARTNERACCOUNTRESPONSE_P_H
#define QTAWS_ASSOCIATEAWSACCOUNTWITHPARTNERACCOUNTRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class AssociateAwsAccountWithPartnerAccountResponse;

class AssociateAwsAccountWithPartnerAccountResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit AssociateAwsAccountWithPartnerAccountResponsePrivate(AssociateAwsAccountWithPartnerAccountResponse * const q);

    void parseAssociateAwsAccountWithPartnerAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateAwsAccountWithPartnerAccountResponse)
    Q_DISABLE_COPY(AssociateAwsAccountWithPartnerAccountResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
