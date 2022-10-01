// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIVESOURCERESPONSE_P_H
#define QTAWS_DESCRIBELIVESOURCERESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class DescribeLiveSourceResponse;

class DescribeLiveSourceResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit DescribeLiveSourceResponsePrivate(DescribeLiveSourceResponse * const q);

    void parseDescribeLiveSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLiveSourceResponse)
    Q_DISABLE_COPY(DescribeLiveSourceResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
