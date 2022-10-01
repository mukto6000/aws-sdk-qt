// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGEXPATTERNSETRESPONSE_H
#define QTAWS_GETREGEXPATTERNSETRESPONSE_H

#include "wafresponse.h"
#include "getregexpatternsetrequest.h"

namespace QtAws {
namespace Waf {

class GetRegexPatternSetResponsePrivate;

class QTAWSWAF_EXPORT GetRegexPatternSetResponse : public WafResponse {
    Q_OBJECT

public:
    GetRegexPatternSetResponse(const GetRegexPatternSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRegexPatternSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegexPatternSetResponse)
    Q_DISABLE_COPY(GetRegexPatternSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
