// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXMATCHSETRESPONSE_H
#define QTAWS_UPDATEREGEXMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "updateregexmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateRegexMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateRegexMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    UpdateRegexMatchSetResponse(const UpdateRegexMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRegexMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRegexMatchSetResponse)
    Q_DISABLE_COPY(UpdateRegexMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
