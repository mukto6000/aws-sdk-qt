// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPRESPONSE_P_H
#define QTAWS_GETGROUPRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetGroupResponse;

class GetGroupResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetGroupResponsePrivate(GetGroupResponse * const q);

    void parseGetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupResponse)
    Q_DISABLE_COPY(GetGroupResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
