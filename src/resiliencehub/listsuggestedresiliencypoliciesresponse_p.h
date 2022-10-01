// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUGGESTEDRESILIENCYPOLICIESRESPONSE_P_H
#define QTAWS_LISTSUGGESTEDRESILIENCYPOLICIESRESPONSE_P_H

#include "resiliencehubresponse_p.h"

namespace QtAws {
namespace ResilienceHub {

class ListSuggestedResiliencyPoliciesResponse;

class ListSuggestedResiliencyPoliciesResponsePrivate : public ResilienceHubResponsePrivate {

public:

    explicit ListSuggestedResiliencyPoliciesResponsePrivate(ListSuggestedResiliencyPoliciesResponse * const q);

    void parseListSuggestedResiliencyPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSuggestedResiliencyPoliciesResponse)
    Q_DISABLE_COPY(ListSuggestedResiliencyPoliciesResponsePrivate)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
