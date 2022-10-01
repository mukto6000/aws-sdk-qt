// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPRESPONSE_P_H
#define QTAWS_GETAPPRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class GetAppResponse;

class GetAppResponsePrivate : public SmsResponsePrivate {

public:

    explicit GetAppResponsePrivate(GetAppResponse * const q);

    void parseGetAppResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAppResponse)
    Q_DISABLE_COPY(GetAppResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
