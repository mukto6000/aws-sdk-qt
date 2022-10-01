// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXMATCHSETRESPONSE_P_H
#define QTAWS_DELETEREGEXMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class DeleteRegexMatchSetResponse;

class DeleteRegexMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit DeleteRegexMatchSetResponsePrivate(DeleteRegexMatchSetResponse * const q);

    void parseDeleteRegexMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRegexMatchSetResponse)
    Q_DISABLE_COPY(DeleteRegexMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
