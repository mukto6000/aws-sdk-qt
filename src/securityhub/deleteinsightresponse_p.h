// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSIGHTRESPONSE_P_H
#define QTAWS_DELETEINSIGHTRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DeleteInsightResponse;

class DeleteInsightResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DeleteInsightResponsePrivate(DeleteInsightResponse * const q);

    void parseDeleteInsightResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInsightResponse)
    Q_DISABLE_COPY(DeleteInsightResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
