// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSQLINJECTIONMATCHSETREQUEST_H
#define QTAWS_GETSQLINJECTIONMATCHSETREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetSqlInjectionMatchSetRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetSqlInjectionMatchSetRequest : public WafRegionalRequest {

public:
    GetSqlInjectionMatchSetRequest(const GetSqlInjectionMatchSetRequest &other);
    GetSqlInjectionMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSqlInjectionMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
