// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERSRESPONSE_P_H
#define QTAWS_LISTMEMBERSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class ListMembersResponse;

class ListMembersResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit ListMembersResponsePrivate(ListMembersResponse * const q);

    void parseListMembersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMembersResponse)
    Q_DISABLE_COPY(ListMembersResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
