// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPONENTRESPONSE_P_H
#define QTAWS_CREATECOMPONENTRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class CreateComponentResponse;

class CreateComponentResponsePrivate : public ProtonResponsePrivate {

public:

    explicit CreateComponentResponsePrivate(CreateComponentResponse * const q);

    void parseCreateComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateComponentResponse)
    Q_DISABLE_COPY(CreateComponentResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
