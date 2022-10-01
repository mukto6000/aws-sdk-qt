// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSUGGESTIONSRESPONSE_P_H
#define QTAWS_GETQUERYSUGGESTIONSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class GetQuerySuggestionsResponse;

class GetQuerySuggestionsResponsePrivate : public KendraResponsePrivate {

public:

    explicit GetQuerySuggestionsResponsePrivate(GetQuerySuggestionsResponse * const q);

    void parseGetQuerySuggestionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQuerySuggestionsResponse)
    Q_DISABLE_COPY(GetQuerySuggestionsResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
