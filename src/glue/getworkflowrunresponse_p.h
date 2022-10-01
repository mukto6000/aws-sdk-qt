// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRUNRESPONSE_P_H
#define QTAWS_GETWORKFLOWRUNRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetWorkflowRunResponse;

class GetWorkflowRunResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetWorkflowRunResponsePrivate(GetWorkflowRunResponse * const q);

    void parseGetWorkflowRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWorkflowRunResponse)
    Q_DISABLE_COPY(GetWorkflowRunResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
