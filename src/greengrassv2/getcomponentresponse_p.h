// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTRESPONSE_P_H
#define QTAWS_GETCOMPONENTRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class GetComponentResponse;

class GetComponentResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit GetComponentResponsePrivate(GetComponentResponse * const q);

    void parseGetComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetComponentResponse)
    Q_DISABLE_COPY(GetComponentResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
