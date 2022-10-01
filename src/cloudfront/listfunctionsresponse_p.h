// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONSRESPONSE_P_H
#define QTAWS_LISTFUNCTIONSRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListFunctionsResponse;

class ListFunctionsResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListFunctionsResponsePrivate(ListFunctionsResponse * const q);

    void parseListFunctionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFunctionsResponse)
    Q_DISABLE_COPY(ListFunctionsResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
