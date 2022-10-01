// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTATEMENTSRESPONSE_P_H
#define QTAWS_LISTSTATEMENTSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListStatementsResponse;

class ListStatementsResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListStatementsResponsePrivate(ListStatementsResponse * const q);

    void parseListStatementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStatementsResponse)
    Q_DISABLE_COPY(ListStatementsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
