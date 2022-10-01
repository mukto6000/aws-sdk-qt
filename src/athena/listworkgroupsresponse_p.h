// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKGROUPSRESPONSE_P_H
#define QTAWS_LISTWORKGROUPSRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class ListWorkGroupsResponse;

class ListWorkGroupsResponsePrivate : public AthenaResponsePrivate {

public:

    explicit ListWorkGroupsResponsePrivate(ListWorkGroupsResponse * const q);

    void parseListWorkGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkGroupsResponse)
    Q_DISABLE_COPY(ListWorkGroupsResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
