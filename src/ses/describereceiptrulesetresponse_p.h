// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECEIPTRULESETRESPONSE_P_H
#define QTAWS_DESCRIBERECEIPTRULESETRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DescribeReceiptRuleSetResponse;

class DescribeReceiptRuleSetResponsePrivate : public SesResponsePrivate {

public:

    explicit DescribeReceiptRuleSetResponsePrivate(DescribeReceiptRuleSetResponse * const q);

    void parseDescribeReceiptRuleSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReceiptRuleSetResponse)
    Q_DISABLE_COPY(DescribeReceiptRuleSetResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
