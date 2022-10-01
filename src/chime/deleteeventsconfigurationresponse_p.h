// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEEVENTSCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteEventsConfigurationResponse;

class DeleteEventsConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteEventsConfigurationResponsePrivate(DeleteEventsConfigurationResponse * const q);

    void parseDeleteEventsConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventsConfigurationResponse)
    Q_DISABLE_COPY(DeleteEventsConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
