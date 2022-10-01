// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANGESETRESPONSE_P_H
#define QTAWS_DELETECHANGESETRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DeleteChangeSetResponse;

class DeleteChangeSetResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DeleteChangeSetResponsePrivate(DeleteChangeSetResponse * const q);

    void parseDeleteChangeSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteChangeSetResponse)
    Q_DISABLE_COPY(DeleteChangeSetResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
