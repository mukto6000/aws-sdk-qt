// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIDESTINATIONRESPONSE_P_H
#define QTAWS_DELETEAPIDESTINATIONRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class DeleteApiDestinationResponse;

class DeleteApiDestinationResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit DeleteApiDestinationResponsePrivate(DeleteApiDestinationResponse * const q);

    void parseDeleteApiDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApiDestinationResponse)
    Q_DISABLE_COPY(DeleteApiDestinationResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
