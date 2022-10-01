// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWSRESPONSE_P_H
#define QTAWS_LISTWORKFLOWSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListWorkflowsResponse;

class ListWorkflowsResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListWorkflowsResponsePrivate(ListWorkflowsResponse * const q);

    void parseListWorkflowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkflowsResponse)
    Q_DISABLE_COPY(ListWorkflowsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
