// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHITSRESPONSE_P_H
#define QTAWS_LISTHITSRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class ListHITsResponse;

class ListHITsResponsePrivate : public MTurkResponsePrivate {

public:

    explicit ListHITsResponsePrivate(ListHITsResponse * const q);

    void parseListHITsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHITsResponse)
    Q_DISABLE_COPY(ListHITsResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
