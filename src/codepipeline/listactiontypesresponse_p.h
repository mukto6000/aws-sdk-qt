// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONTYPESRESPONSE_P_H
#define QTAWS_LISTACTIONTYPESRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class ListActionTypesResponse;

class ListActionTypesResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit ListActionTypesResponsePrivate(ListActionTypesResponse * const q);

    void parseListActionTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListActionTypesResponse)
    Q_DISABLE_COPY(ListActionTypesResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
