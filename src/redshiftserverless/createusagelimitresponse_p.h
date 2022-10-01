// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGELIMITRESPONSE_P_H
#define QTAWS_CREATEUSAGELIMITRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateUsageLimitResponse;

class CreateUsageLimitResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit CreateUsageLimitResponsePrivate(CreateUsageLimitResponse * const q);

    void parseCreateUsageLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUsageLimitResponse)
    Q_DISABLE_COPY(CreateUsageLimitResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
