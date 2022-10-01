// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWRESPONSE_P_H
#define QTAWS_CREATEFLOWRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class CreateFlowResponse;

class CreateFlowResponsePrivate : public AppflowResponsePrivate {

public:

    explicit CreateFlowResponsePrivate(CreateFlowResponse * const q);

    void parseCreateFlowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFlowResponse)
    Q_DISABLE_COPY(CreateFlowResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
