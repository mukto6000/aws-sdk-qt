// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICIESRESPONSE_P_H
#define QTAWS_GETRESOURCEPOLICIESRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class GetResourcePoliciesResponse;

class GetResourcePoliciesResponsePrivate : public RamResponsePrivate {

public:

    explicit GetResourcePoliciesResponsePrivate(GetResourcePoliciesResponse * const q);

    void parseGetResourcePoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourcePoliciesResponse)
    Q_DISABLE_COPY(GetResourcePoliciesResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
