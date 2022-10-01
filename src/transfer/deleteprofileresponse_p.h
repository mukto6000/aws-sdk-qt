// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILERESPONSE_P_H
#define QTAWS_DELETEPROFILERESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class DeleteProfileResponse;

class DeleteProfileResponsePrivate : public TransferResponsePrivate {

public:

    explicit DeleteProfileResponsePrivate(DeleteProfileResponse * const q);

    void parseDeleteProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProfileResponse)
    Q_DISABLE_COPY(DeleteProfileResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
