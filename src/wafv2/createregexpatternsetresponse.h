// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGEXPATTERNSETRESPONSE_H
#define QTAWS_CREATEREGEXPATTERNSETRESPONSE_H

#include "wafv2response.h"
#include "createregexpatternsetrequest.h"

namespace QtAws {
namespace Wafv2 {

class CreateRegexPatternSetResponsePrivate;

class QTAWSWAFV2_EXPORT CreateRegexPatternSetResponse : public Wafv2Response {
    Q_OBJECT

public:
    CreateRegexPatternSetResponse(const CreateRegexPatternSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRegexPatternSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRegexPatternSetResponse)
    Q_DISABLE_COPY(CreateRegexPatternSetResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
