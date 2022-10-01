// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCERESPONSE_P_H
#define QTAWS_STARTINSTANCERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class StartInstanceResponse;

class StartInstanceResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit StartInstanceResponsePrivate(StartInstanceResponse * const q);

    void parseStartInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartInstanceResponse)
    Q_DISABLE_COPY(StartInstanceResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
