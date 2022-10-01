// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALENDARSTATERESPONSE_P_H
#define QTAWS_GETCALENDARSTATERESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetCalendarStateResponse;

class GetCalendarStateResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetCalendarStateResponsePrivate(GetCalendarStateResponse * const q);

    void parseGetCalendarStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCalendarStateResponse)
    Q_DISABLE_COPY(GetCalendarStateResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
