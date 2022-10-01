// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORDERRESPONSE_P_H
#define QTAWS_GETORDERRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class GetOrderResponse;

class GetOrderResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit GetOrderResponsePrivate(GetOrderResponse * const q);

    void parseGetOrderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOrderResponse)
    Q_DISABLE_COPY(GetOrderResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
