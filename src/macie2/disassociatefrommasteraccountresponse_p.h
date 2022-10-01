// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFROMMASTERACCOUNTRESPONSE_P_H
#define QTAWS_DISASSOCIATEFROMMASTERACCOUNTRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class DisassociateFromMasterAccountResponse;

class DisassociateFromMasterAccountResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit DisassociateFromMasterAccountResponsePrivate(DisassociateFromMasterAccountResponse * const q);

    void parseDisassociateFromMasterAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateFromMasterAccountResponse)
    Q_DISABLE_COPY(DisassociateFromMasterAccountResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
