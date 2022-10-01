// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEXSSMATCHSETRESPONSE_P_H
#define QTAWS_CREATEXSSMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class CreateXssMatchSetResponse;

class CreateXssMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit CreateXssMatchSetResponsePrivate(CreateXssMatchSetResponse * const q);

    void parseCreateXssMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateXssMatchSetResponse)
    Q_DISABLE_COPY(CreateXssMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
