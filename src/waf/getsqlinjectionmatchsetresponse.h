/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETSQLINJECTIONMATCHSETRESPONSE_H
#define QTAWS_GETSQLINJECTIONMATCHSETRESPONSE_H

#include "wafresponse.h"
#include "getsqlinjectionmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class GetSqlInjectionMatchSetResponsePrivate;

class QTAWSWAF_EXPORT GetSqlInjectionMatchSetResponse : public WafResponse {
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

} // namespace Waf
} // namespace QtAws

#endif
