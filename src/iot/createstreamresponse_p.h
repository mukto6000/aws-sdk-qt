// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMRESPONSE_P_H
#define QTAWS_CREATESTREAMRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateStreamResponse;

class CreateStreamResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateStreamResponsePrivate(CreateStreamResponse * const q);

    void parseCreateStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStreamResponse)
    Q_DISABLE_COPY(CreateStreamResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
