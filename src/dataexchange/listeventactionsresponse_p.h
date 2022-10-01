// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTACTIONSRESPONSE_P_H
#define QTAWS_LISTEVENTACTIONSRESPONSE_P_H

#include "dataexchangeresponse_p.h"

namespace QtAws {
namespace DataExchange {

class ListEventActionsResponse;

class ListEventActionsResponsePrivate : public DataExchangeResponsePrivate {

public:

    explicit ListEventActionsResponsePrivate(ListEventActionsResponse * const q);

    void parseListEventActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventActionsResponse)
    Q_DISABLE_COPY(ListEventActionsResponsePrivate)

};

} // namespace DataExchange
} // namespace QtAws

#endif
