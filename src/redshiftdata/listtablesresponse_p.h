// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLESRESPONSE_P_H
#define QTAWS_LISTTABLESRESPONSE_P_H

#include "redshiftdataresponse_p.h"

namespace QtAws {
namespace RedshiftData {

class ListTablesResponse;

class ListTablesResponsePrivate : public RedshiftDataResponsePrivate {

public:

    explicit ListTablesResponsePrivate(ListTablesResponse * const q);

    void parseListTablesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTablesResponse)
    Q_DISABLE_COPY(ListTablesResponsePrivate)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
