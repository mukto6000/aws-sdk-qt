// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIALIZESERVICERESPONSE_P_H
#define QTAWS_INITIALIZESERVICERESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class InitializeServiceResponse;

class InitializeServiceResponsePrivate : public DrsResponsePrivate {

public:

    explicit InitializeServiceResponsePrivate(InitializeServiceResponse * const q);

    void parseInitializeServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InitializeServiceResponse)
    Q_DISABLE_COPY(InitializeServiceResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
