// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBRESPONSE_P_H
#define QTAWS_CANCELJOBRESPONSE_P_H

#include "braketresponse_p.h"

namespace QtAws {
namespace Braket {

class CancelJobResponse;

class CancelJobResponsePrivate : public BraketResponsePrivate {

public:

    explicit CancelJobResponsePrivate(CancelJobResponse * const q);

    void parseCancelJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelJobResponse)
    Q_DISABLE_COPY(CancelJobResponsePrivate)

};

} // namespace Braket
} // namespace QtAws

#endif
