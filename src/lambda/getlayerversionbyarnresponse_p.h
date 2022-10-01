// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAYERVERSIONBYARNRESPONSE_P_H
#define QTAWS_GETLAYERVERSIONBYARNRESPONSE_P_H

#include "lambdaresponse_p.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionByArnResponse;

class GetLayerVersionByArnResponsePrivate : public LambdaResponsePrivate {

public:

    explicit GetLayerVersionByArnResponsePrivate(GetLayerVersionByArnResponse * const q);

    void parseGetLayerVersionByArnResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLayerVersionByArnResponse)
    Q_DISABLE_COPY(GetLayerVersionByArnResponsePrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
