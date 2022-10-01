// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSQLINJECTIONMATCHSETRESPONSE_H
#define QTAWS_GETSQLINJECTIONMATCHSETRESPONSE_H

#include "wafregionalresponse.h"
#include "getsqlinjectionmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class GetSqlInjectionMatchSetResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetSqlInjectionMatchSetResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetSqlInjectionMatchSetResponse(const GetSqlInjectionMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSqlInjectionMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSqlInjectionMatchSetResponse)
    Q_DISABLE_COPY(GetSqlInjectionMatchSetResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
