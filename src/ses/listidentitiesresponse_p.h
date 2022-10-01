// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITIESRESPONSE_P_H
#define QTAWS_LISTIDENTITIESRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class ListIdentitiesResponse;

class ListIdentitiesResponsePrivate : public SesResponsePrivate {

public:

    explicit ListIdentitiesResponsePrivate(ListIdentitiesResponse * const q);

    void parseListIdentitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIdentitiesResponse)
    Q_DISABLE_COPY(ListIdentitiesResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
