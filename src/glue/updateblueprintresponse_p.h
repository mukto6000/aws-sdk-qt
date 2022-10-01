// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBLUEPRINTRESPONSE_P_H
#define QTAWS_UPDATEBLUEPRINTRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateBlueprintResponse;

class UpdateBlueprintResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateBlueprintResponsePrivate(UpdateBlueprintResponse * const q);

    void parseUpdateBlueprintResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBlueprintResponse)
    Q_DISABLE_COPY(UpdateBlueprintResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
