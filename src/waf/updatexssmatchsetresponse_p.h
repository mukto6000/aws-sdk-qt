// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEXSSMATCHSETRESPONSE_P_H
#define QTAWS_UPDATEXSSMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class UpdateXssMatchSetResponse;

class UpdateXssMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit UpdateXssMatchSetResponsePrivate(UpdateXssMatchSetResponse * const q);

    void parseUpdateXssMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateXssMatchSetResponse)
    Q_DISABLE_COPY(UpdateXssMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
