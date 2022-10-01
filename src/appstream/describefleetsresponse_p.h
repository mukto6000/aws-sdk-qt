// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETSRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeFleetsResponse;

class DescribeFleetsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeFleetsResponsePrivate(DescribeFleetsResponse * const q);

    void parseDescribeFleetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetsResponse)
    Q_DISABLE_COPY(DescribeFleetsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
