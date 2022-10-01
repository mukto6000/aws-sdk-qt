// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCELOCATIONRESPONSE_P_H
#define QTAWS_DELETESOURCELOCATIONRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class DeleteSourceLocationResponse;

class DeleteSourceLocationResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit DeleteSourceLocationResponsePrivate(DeleteSourceLocationResponse * const q);

    void parseDeleteSourceLocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSourceLocationResponse)
    Q_DISABLE_COPY(DeleteSourceLocationResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
