// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPRESPONSE_P_H
#define QTAWS_UPDATEAPPRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class UpdateAppResponse;

class UpdateAppResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit UpdateAppResponsePrivate(UpdateAppResponse * const q);

    void parseUpdateAppResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAppResponse)
    Q_DISABLE_COPY(UpdateAppResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
