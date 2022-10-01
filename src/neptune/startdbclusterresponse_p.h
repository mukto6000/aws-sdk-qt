// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBCLUSTERRESPONSE_P_H
#define QTAWS_STARTDBCLUSTERRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class StartDBClusterResponse;

class StartDBClusterResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit StartDBClusterResponsePrivate(StartDBClusterResponse * const q);

    void parseStartDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDBClusterResponse)
    Q_DISABLE_COPY(StartDBClusterResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
