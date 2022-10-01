// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSRESPONSE_P_H
#define QTAWS_LISTENDPOINTSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListEndpointsResponse;

class ListEndpointsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListEndpointsResponsePrivate(ListEndpointsResponse * const q);

    void parseListEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEndpointsResponse)
    Q_DISABLE_COPY(ListEndpointsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
