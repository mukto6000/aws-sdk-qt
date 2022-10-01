// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPOLICIESRESPONSE_P_H
#define QTAWS_LISTUSERPOLICIESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListUserPoliciesResponse;

class ListUserPoliciesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListUserPoliciesResponsePrivate(ListUserPoliciesResponse * const q);

    void parseListUserPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUserPoliciesResponse)
    Q_DISABLE_COPY(ListUserPoliciesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
